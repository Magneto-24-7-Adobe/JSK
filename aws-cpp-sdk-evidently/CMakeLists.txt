add_project(aws-cpp-sdk-evidently "C++ SDK for the AWS evidently service" aws-cpp-sdk-core)

file(GLOB AWS_EVIDENTLY_HEADERS
    "include/aws/evidently/*.h"
)

file(GLOB AWS_EVIDENTLY_MODEL_HEADERS
    "include/aws/evidently/model/*.h"
)

file(GLOB AWS_EVIDENTLY_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_EVIDENTLY_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB EVIDENTLY_UNIFIED_HEADERS
    ${AWS_EVIDENTLY_HEADERS}
    ${AWS_EVIDENTLY_MODEL_HEADERS}
)

file(GLOB EVIDENTLY_UNITY_SRC
    ${AWS_EVIDENTLY_SOURCE}
    ${AWS_EVIDENTLY_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("EVIDENTLY" EVIDENTLY_UNITY_SRC)
endif()

file(GLOB EVIDENTLY_SRC
    ${EVIDENTLY_UNIFIED_HEADERS}
    ${EVIDENTLY_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\evidently" FILES ${AWS_EVIDENTLY_HEADERS})
        source_group("Header Files\\aws\\evidently\\model" FILES ${AWS_EVIDENTLY_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_EVIDENTLY_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_EVIDENTLY_MODEL_SOURCE})
    endif(MSVC)
endif()

set(EVIDENTLY_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${EVIDENTLY_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_CLOUDWATCHEVIDENTLY_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_EVIDENTLY_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/evidently)
install (FILES ${AWS_EVIDENTLY_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/evidently/model)

do_packaging()



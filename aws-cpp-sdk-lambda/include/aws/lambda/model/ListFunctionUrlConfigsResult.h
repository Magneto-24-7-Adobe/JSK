﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/model/FunctionUrlConfig.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Lambda
{
namespace Model
{
  class AWS_LAMBDA_API ListFunctionUrlConfigsResult
  {
  public:
    ListFunctionUrlConfigsResult();
    ListFunctionUrlConfigsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListFunctionUrlConfigsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of function URL configurations.</p>
     */
    inline const Aws::Vector<FunctionUrlConfig>& GetFunctionUrlConfigs() const{ return m_functionUrlConfigs; }

    /**
     * <p>A list of function URL configurations.</p>
     */
    inline void SetFunctionUrlConfigs(const Aws::Vector<FunctionUrlConfig>& value) { m_functionUrlConfigs = value; }

    /**
     * <p>A list of function URL configurations.</p>
     */
    inline void SetFunctionUrlConfigs(Aws::Vector<FunctionUrlConfig>&& value) { m_functionUrlConfigs = std::move(value); }

    /**
     * <p>A list of function URL configurations.</p>
     */
    inline ListFunctionUrlConfigsResult& WithFunctionUrlConfigs(const Aws::Vector<FunctionUrlConfig>& value) { SetFunctionUrlConfigs(value); return *this;}

    /**
     * <p>A list of function URL configurations.</p>
     */
    inline ListFunctionUrlConfigsResult& WithFunctionUrlConfigs(Aws::Vector<FunctionUrlConfig>&& value) { SetFunctionUrlConfigs(std::move(value)); return *this;}

    /**
     * <p>A list of function URL configurations.</p>
     */
    inline ListFunctionUrlConfigsResult& AddFunctionUrlConfigs(const FunctionUrlConfig& value) { m_functionUrlConfigs.push_back(value); return *this; }

    /**
     * <p>A list of function URL configurations.</p>
     */
    inline ListFunctionUrlConfigsResult& AddFunctionUrlConfigs(FunctionUrlConfig&& value) { m_functionUrlConfigs.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token that's included if more results are available.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }

    /**
     * <p>The pagination token that's included if more results are available.</p>
     */
    inline void SetNextMarker(const Aws::String& value) { m_nextMarker = value; }

    /**
     * <p>The pagination token that's included if more results are available.</p>
     */
    inline void SetNextMarker(Aws::String&& value) { m_nextMarker = std::move(value); }

    /**
     * <p>The pagination token that's included if more results are available.</p>
     */
    inline void SetNextMarker(const char* value) { m_nextMarker.assign(value); }

    /**
     * <p>The pagination token that's included if more results are available.</p>
     */
    inline ListFunctionUrlConfigsResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}

    /**
     * <p>The pagination token that's included if more results are available.</p>
     */
    inline ListFunctionUrlConfigsResult& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}

    /**
     * <p>The pagination token that's included if more results are available.</p>
     */
    inline ListFunctionUrlConfigsResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}

  private:

    Aws::Vector<FunctionUrlConfig> m_functionUrlConfigs;

    Aws::String m_nextMarker;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws

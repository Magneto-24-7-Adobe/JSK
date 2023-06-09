﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage/MediaPackage_EXPORTS.h>
#include <aws/mediapackage/MediaPackageErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediapackage/model/ConfigureLogsResult.h>
#include <aws/mediapackage/model/CreateChannelResult.h>
#include <aws/mediapackage/model/CreateHarvestJobResult.h>
#include <aws/mediapackage/model/CreateOriginEndpointResult.h>
#include <aws/mediapackage/model/DeleteChannelResult.h>
#include <aws/mediapackage/model/DeleteOriginEndpointResult.h>
#include <aws/mediapackage/model/DescribeChannelResult.h>
#include <aws/mediapackage/model/DescribeHarvestJobResult.h>
#include <aws/mediapackage/model/DescribeOriginEndpointResult.h>
#include <aws/mediapackage/model/ListChannelsResult.h>
#include <aws/mediapackage/model/ListHarvestJobsResult.h>
#include <aws/mediapackage/model/ListOriginEndpointsResult.h>
#include <aws/mediapackage/model/ListTagsForResourceResult.h>
#include <aws/mediapackage/model/RotateIngestEndpointCredentialsResult.h>
#include <aws/mediapackage/model/UpdateChannelResult.h>
#include <aws/mediapackage/model/UpdateOriginEndpointResult.h>
#include <aws/core/NoResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

namespace Aws
{

namespace Http
{
  class HttpClient;
  class HttpClientFactory;
} // namespace Http

namespace Utils
{
  template< typename R, typename E> class Outcome;
namespace Threading
{
  class Executor;
} // namespace Threading
} // namespace Utils

namespace Auth
{
  class AWSCredentials;
  class AWSCredentialsProvider;
} // namespace Auth

namespace Client
{
  class RetryStrategy;
} // namespace Client

namespace MediaPackage
{

namespace Model
{
        class ConfigureLogsRequest;
        class CreateChannelRequest;
        class CreateHarvestJobRequest;
        class CreateOriginEndpointRequest;
        class DeleteChannelRequest;
        class DeleteOriginEndpointRequest;
        class DescribeChannelRequest;
        class DescribeHarvestJobRequest;
        class DescribeOriginEndpointRequest;
        class ListChannelsRequest;
        class ListHarvestJobsRequest;
        class ListOriginEndpointsRequest;
        class ListTagsForResourceRequest;
        class RotateIngestEndpointCredentialsRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateChannelRequest;
        class UpdateOriginEndpointRequest;

        typedef Aws::Utils::Outcome<ConfigureLogsResult, MediaPackageError> ConfigureLogsOutcome;
        typedef Aws::Utils::Outcome<CreateChannelResult, MediaPackageError> CreateChannelOutcome;
        typedef Aws::Utils::Outcome<CreateHarvestJobResult, MediaPackageError> CreateHarvestJobOutcome;
        typedef Aws::Utils::Outcome<CreateOriginEndpointResult, MediaPackageError> CreateOriginEndpointOutcome;
        typedef Aws::Utils::Outcome<DeleteChannelResult, MediaPackageError> DeleteChannelOutcome;
        typedef Aws::Utils::Outcome<DeleteOriginEndpointResult, MediaPackageError> DeleteOriginEndpointOutcome;
        typedef Aws::Utils::Outcome<DescribeChannelResult, MediaPackageError> DescribeChannelOutcome;
        typedef Aws::Utils::Outcome<DescribeHarvestJobResult, MediaPackageError> DescribeHarvestJobOutcome;
        typedef Aws::Utils::Outcome<DescribeOriginEndpointResult, MediaPackageError> DescribeOriginEndpointOutcome;
        typedef Aws::Utils::Outcome<ListChannelsResult, MediaPackageError> ListChannelsOutcome;
        typedef Aws::Utils::Outcome<ListHarvestJobsResult, MediaPackageError> ListHarvestJobsOutcome;
        typedef Aws::Utils::Outcome<ListOriginEndpointsResult, MediaPackageError> ListOriginEndpointsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, MediaPackageError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<RotateIngestEndpointCredentialsResult, MediaPackageError> RotateIngestEndpointCredentialsOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, MediaPackageError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, MediaPackageError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateChannelResult, MediaPackageError> UpdateChannelOutcome;
        typedef Aws::Utils::Outcome<UpdateOriginEndpointResult, MediaPackageError> UpdateOriginEndpointOutcome;

        typedef std::future<ConfigureLogsOutcome> ConfigureLogsOutcomeCallable;
        typedef std::future<CreateChannelOutcome> CreateChannelOutcomeCallable;
        typedef std::future<CreateHarvestJobOutcome> CreateHarvestJobOutcomeCallable;
        typedef std::future<CreateOriginEndpointOutcome> CreateOriginEndpointOutcomeCallable;
        typedef std::future<DeleteChannelOutcome> DeleteChannelOutcomeCallable;
        typedef std::future<DeleteOriginEndpointOutcome> DeleteOriginEndpointOutcomeCallable;
        typedef std::future<DescribeChannelOutcome> DescribeChannelOutcomeCallable;
        typedef std::future<DescribeHarvestJobOutcome> DescribeHarvestJobOutcomeCallable;
        typedef std::future<DescribeOriginEndpointOutcome> DescribeOriginEndpointOutcomeCallable;
        typedef std::future<ListChannelsOutcome> ListChannelsOutcomeCallable;
        typedef std::future<ListHarvestJobsOutcome> ListHarvestJobsOutcomeCallable;
        typedef std::future<ListOriginEndpointsOutcome> ListOriginEndpointsOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<RotateIngestEndpointCredentialsOutcome> RotateIngestEndpointCredentialsOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateChannelOutcome> UpdateChannelOutcomeCallable;
        typedef std::future<UpdateOriginEndpointOutcome> UpdateOriginEndpointOutcomeCallable;
} // namespace Model

  class MediaPackageClient;

    typedef std::function<void(const MediaPackageClient*, const Model::ConfigureLogsRequest&, const Model::ConfigureLogsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ConfigureLogsResponseReceivedHandler;
    typedef std::function<void(const MediaPackageClient*, const Model::CreateChannelRequest&, const Model::CreateChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateChannelResponseReceivedHandler;
    typedef std::function<void(const MediaPackageClient*, const Model::CreateHarvestJobRequest&, const Model::CreateHarvestJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateHarvestJobResponseReceivedHandler;
    typedef std::function<void(const MediaPackageClient*, const Model::CreateOriginEndpointRequest&, const Model::CreateOriginEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateOriginEndpointResponseReceivedHandler;
    typedef std::function<void(const MediaPackageClient*, const Model::DeleteChannelRequest&, const Model::DeleteChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteChannelResponseReceivedHandler;
    typedef std::function<void(const MediaPackageClient*, const Model::DeleteOriginEndpointRequest&, const Model::DeleteOriginEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteOriginEndpointResponseReceivedHandler;
    typedef std::function<void(const MediaPackageClient*, const Model::DescribeChannelRequest&, const Model::DescribeChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeChannelResponseReceivedHandler;
    typedef std::function<void(const MediaPackageClient*, const Model::DescribeHarvestJobRequest&, const Model::DescribeHarvestJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeHarvestJobResponseReceivedHandler;
    typedef std::function<void(const MediaPackageClient*, const Model::DescribeOriginEndpointRequest&, const Model::DescribeOriginEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeOriginEndpointResponseReceivedHandler;
    typedef std::function<void(const MediaPackageClient*, const Model::ListChannelsRequest&, const Model::ListChannelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListChannelsResponseReceivedHandler;
    typedef std::function<void(const MediaPackageClient*, const Model::ListHarvestJobsRequest&, const Model::ListHarvestJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListHarvestJobsResponseReceivedHandler;
    typedef std::function<void(const MediaPackageClient*, const Model::ListOriginEndpointsRequest&, const Model::ListOriginEndpointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListOriginEndpointsResponseReceivedHandler;
    typedef std::function<void(const MediaPackageClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const MediaPackageClient*, const Model::RotateIngestEndpointCredentialsRequest&, const Model::RotateIngestEndpointCredentialsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RotateIngestEndpointCredentialsResponseReceivedHandler;
    typedef std::function<void(const MediaPackageClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const MediaPackageClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const MediaPackageClient*, const Model::UpdateChannelRequest&, const Model::UpdateChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateChannelResponseReceivedHandler;
    typedef std::function<void(const MediaPackageClient*, const Model::UpdateOriginEndpointRequest&, const Model::UpdateOriginEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateOriginEndpointResponseReceivedHandler;

  /**
   * AWS Elemental MediaPackage
   */
  class AWS_MEDIAPACKAGE_API MediaPackageClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MediaPackageClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MediaPackageClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MediaPackageClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~MediaPackageClient();


        /**
         * Changes the Channel's properities to configure log subscription<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-2017-10-12/ConfigureLogs">AWS
         * API Reference</a></p>
         */
        virtual Model::ConfigureLogsOutcome ConfigureLogs(const Model::ConfigureLogsRequest& request) const;

        /**
         * A Callable wrapper for ConfigureLogs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ConfigureLogsOutcomeCallable ConfigureLogsCallable(const Model::ConfigureLogsRequest& request) const;

        /**
         * An Async wrapper for ConfigureLogs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ConfigureLogsAsync(const Model::ConfigureLogsRequest& request, const ConfigureLogsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Creates a new Channel.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-2017-10-12/CreateChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateChannelOutcome CreateChannel(const Model::CreateChannelRequest& request) const;

        /**
         * A Callable wrapper for CreateChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateChannelOutcomeCallable CreateChannelCallable(const Model::CreateChannelRequest& request) const;

        /**
         * An Async wrapper for CreateChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateChannelAsync(const Model::CreateChannelRequest& request, const CreateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Creates a new HarvestJob record.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-2017-10-12/CreateHarvestJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateHarvestJobOutcome CreateHarvestJob(const Model::CreateHarvestJobRequest& request) const;

        /**
         * A Callable wrapper for CreateHarvestJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateHarvestJobOutcomeCallable CreateHarvestJobCallable(const Model::CreateHarvestJobRequest& request) const;

        /**
         * An Async wrapper for CreateHarvestJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateHarvestJobAsync(const Model::CreateHarvestJobRequest& request, const CreateHarvestJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Creates a new OriginEndpoint record.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-2017-10-12/CreateOriginEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateOriginEndpointOutcome CreateOriginEndpoint(const Model::CreateOriginEndpointRequest& request) const;

        /**
         * A Callable wrapper for CreateOriginEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateOriginEndpointOutcomeCallable CreateOriginEndpointCallable(const Model::CreateOriginEndpointRequest& request) const;

        /**
         * An Async wrapper for CreateOriginEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateOriginEndpointAsync(const Model::CreateOriginEndpointRequest& request, const CreateOriginEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Deletes an existing Channel.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-2017-10-12/DeleteChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteChannelOutcome DeleteChannel(const Model::DeleteChannelRequest& request) const;

        /**
         * A Callable wrapper for DeleteChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteChannelOutcomeCallable DeleteChannelCallable(const Model::DeleteChannelRequest& request) const;

        /**
         * An Async wrapper for DeleteChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteChannelAsync(const Model::DeleteChannelRequest& request, const DeleteChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Deletes an existing OriginEndpoint.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-2017-10-12/DeleteOriginEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteOriginEndpointOutcome DeleteOriginEndpoint(const Model::DeleteOriginEndpointRequest& request) const;

        /**
         * A Callable wrapper for DeleteOriginEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteOriginEndpointOutcomeCallable DeleteOriginEndpointCallable(const Model::DeleteOriginEndpointRequest& request) const;

        /**
         * An Async wrapper for DeleteOriginEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteOriginEndpointAsync(const Model::DeleteOriginEndpointRequest& request, const DeleteOriginEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Gets details about a Channel.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-2017-10-12/DescribeChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeChannelOutcome DescribeChannel(const Model::DescribeChannelRequest& request) const;

        /**
         * A Callable wrapper for DescribeChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeChannelOutcomeCallable DescribeChannelCallable(const Model::DescribeChannelRequest& request) const;

        /**
         * An Async wrapper for DescribeChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeChannelAsync(const Model::DescribeChannelRequest& request, const DescribeChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Gets details about an existing HarvestJob.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-2017-10-12/DescribeHarvestJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeHarvestJobOutcome DescribeHarvestJob(const Model::DescribeHarvestJobRequest& request) const;

        /**
         * A Callable wrapper for DescribeHarvestJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeHarvestJobOutcomeCallable DescribeHarvestJobCallable(const Model::DescribeHarvestJobRequest& request) const;

        /**
         * An Async wrapper for DescribeHarvestJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeHarvestJobAsync(const Model::DescribeHarvestJobRequest& request, const DescribeHarvestJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Gets details about an existing OriginEndpoint.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-2017-10-12/DescribeOriginEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeOriginEndpointOutcome DescribeOriginEndpoint(const Model::DescribeOriginEndpointRequest& request) const;

        /**
         * A Callable wrapper for DescribeOriginEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeOriginEndpointOutcomeCallable DescribeOriginEndpointCallable(const Model::DescribeOriginEndpointRequest& request) const;

        /**
         * An Async wrapper for DescribeOriginEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeOriginEndpointAsync(const Model::DescribeOriginEndpointRequest& request, const DescribeOriginEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Returns a collection of Channels.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-2017-10-12/ListChannels">AWS
         * API Reference</a></p>
         */
        virtual Model::ListChannelsOutcome ListChannels(const Model::ListChannelsRequest& request) const;

        /**
         * A Callable wrapper for ListChannels that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListChannelsOutcomeCallable ListChannelsCallable(const Model::ListChannelsRequest& request) const;

        /**
         * An Async wrapper for ListChannels that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListChannelsAsync(const Model::ListChannelsRequest& request, const ListChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Returns a collection of HarvestJob records.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-2017-10-12/ListHarvestJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListHarvestJobsOutcome ListHarvestJobs(const Model::ListHarvestJobsRequest& request) const;

        /**
         * A Callable wrapper for ListHarvestJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListHarvestJobsOutcomeCallable ListHarvestJobsCallable(const Model::ListHarvestJobsRequest& request) const;

        /**
         * An Async wrapper for ListHarvestJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListHarvestJobsAsync(const Model::ListHarvestJobsRequest& request, const ListHarvestJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Returns a collection of OriginEndpoint records.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-2017-10-12/ListOriginEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOriginEndpointsOutcome ListOriginEndpoints(const Model::ListOriginEndpointsRequest& request) const;

        /**
         * A Callable wrapper for ListOriginEndpoints that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListOriginEndpointsOutcomeCallable ListOriginEndpointsCallable(const Model::ListOriginEndpointsRequest& request) const;

        /**
         * An Async wrapper for ListOriginEndpoints that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListOriginEndpointsAsync(const Model::ListOriginEndpointsRequest& request, const ListOriginEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Rotate the IngestEndpoint's username and password, as specified by the
         * IngestEndpoint's id.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-2017-10-12/RotateIngestEndpointCredentials">AWS
         * API Reference</a></p>
         */
        virtual Model::RotateIngestEndpointCredentialsOutcome RotateIngestEndpointCredentials(const Model::RotateIngestEndpointCredentialsRequest& request) const;

        /**
         * A Callable wrapper for RotateIngestEndpointCredentials that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RotateIngestEndpointCredentialsOutcomeCallable RotateIngestEndpointCredentialsCallable(const Model::RotateIngestEndpointCredentialsRequest& request) const;

        /**
         * An Async wrapper for RotateIngestEndpointCredentials that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RotateIngestEndpointCredentialsAsync(const Model::RotateIngestEndpointCredentialsRequest& request, const RotateIngestEndpointCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Updates an existing Channel.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-2017-10-12/UpdateChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateChannelOutcome UpdateChannel(const Model::UpdateChannelRequest& request) const;

        /**
         * A Callable wrapper for UpdateChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateChannelOutcomeCallable UpdateChannelCallable(const Model::UpdateChannelRequest& request) const;

        /**
         * An Async wrapper for UpdateChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateChannelAsync(const Model::UpdateChannelRequest& request, const UpdateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Updates an existing OriginEndpoint.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-2017-10-12/UpdateOriginEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateOriginEndpointOutcome UpdateOriginEndpoint(const Model::UpdateOriginEndpointRequest& request) const;

        /**
         * A Callable wrapper for UpdateOriginEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateOriginEndpointOutcomeCallable UpdateOriginEndpointCallable(const Model::UpdateOriginEndpointRequest& request) const;

        /**
         * An Async wrapper for UpdateOriginEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateOriginEndpointAsync(const Model::UpdateOriginEndpointRequest& request, const UpdateOriginEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void ConfigureLogsAsyncHelper(const Model::ConfigureLogsRequest& request, const ConfigureLogsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateChannelAsyncHelper(const Model::CreateChannelRequest& request, const CreateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateHarvestJobAsyncHelper(const Model::CreateHarvestJobRequest& request, const CreateHarvestJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateOriginEndpointAsyncHelper(const Model::CreateOriginEndpointRequest& request, const CreateOriginEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteChannelAsyncHelper(const Model::DeleteChannelRequest& request, const DeleteChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteOriginEndpointAsyncHelper(const Model::DeleteOriginEndpointRequest& request, const DeleteOriginEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeChannelAsyncHelper(const Model::DescribeChannelRequest& request, const DescribeChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeHarvestJobAsyncHelper(const Model::DescribeHarvestJobRequest& request, const DescribeHarvestJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeOriginEndpointAsyncHelper(const Model::DescribeOriginEndpointRequest& request, const DescribeOriginEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListChannelsAsyncHelper(const Model::ListChannelsRequest& request, const ListChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListHarvestJobsAsyncHelper(const Model::ListHarvestJobsRequest& request, const ListHarvestJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListOriginEndpointsAsyncHelper(const Model::ListOriginEndpointsRequest& request, const ListOriginEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RotateIngestEndpointCredentialsAsyncHelper(const Model::RotateIngestEndpointCredentialsRequest& request, const RotateIngestEndpointCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateChannelAsyncHelper(const Model::UpdateChannelRequest& request, const UpdateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateOriginEndpointAsyncHelper(const Model::UpdateOriginEndpointRequest& request, const UpdateOriginEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace MediaPackage
} // namespace Aws

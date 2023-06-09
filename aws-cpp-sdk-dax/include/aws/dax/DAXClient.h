﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dax/DAX_EXPORTS.h>
#include <aws/dax/DAXErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/dax/model/CreateClusterResult.h>
#include <aws/dax/model/CreateParameterGroupResult.h>
#include <aws/dax/model/CreateSubnetGroupResult.h>
#include <aws/dax/model/DecreaseReplicationFactorResult.h>
#include <aws/dax/model/DeleteClusterResult.h>
#include <aws/dax/model/DeleteParameterGroupResult.h>
#include <aws/dax/model/DeleteSubnetGroupResult.h>
#include <aws/dax/model/DescribeClustersResult.h>
#include <aws/dax/model/DescribeDefaultParametersResult.h>
#include <aws/dax/model/DescribeEventsResult.h>
#include <aws/dax/model/DescribeParameterGroupsResult.h>
#include <aws/dax/model/DescribeParametersResult.h>
#include <aws/dax/model/DescribeSubnetGroupsResult.h>
#include <aws/dax/model/IncreaseReplicationFactorResult.h>
#include <aws/dax/model/ListTagsResult.h>
#include <aws/dax/model/RebootNodeResult.h>
#include <aws/dax/model/TagResourceResult.h>
#include <aws/dax/model/UntagResourceResult.h>
#include <aws/dax/model/UpdateClusterResult.h>
#include <aws/dax/model/UpdateParameterGroupResult.h>
#include <aws/dax/model/UpdateSubnetGroupResult.h>
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

namespace DAX
{

namespace Model
{
        class CreateClusterRequest;
        class CreateParameterGroupRequest;
        class CreateSubnetGroupRequest;
        class DecreaseReplicationFactorRequest;
        class DeleteClusterRequest;
        class DeleteParameterGroupRequest;
        class DeleteSubnetGroupRequest;
        class DescribeClustersRequest;
        class DescribeDefaultParametersRequest;
        class DescribeEventsRequest;
        class DescribeParameterGroupsRequest;
        class DescribeParametersRequest;
        class DescribeSubnetGroupsRequest;
        class IncreaseReplicationFactorRequest;
        class ListTagsRequest;
        class RebootNodeRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateClusterRequest;
        class UpdateParameterGroupRequest;
        class UpdateSubnetGroupRequest;

        typedef Aws::Utils::Outcome<CreateClusterResult, DAXError> CreateClusterOutcome;
        typedef Aws::Utils::Outcome<CreateParameterGroupResult, DAXError> CreateParameterGroupOutcome;
        typedef Aws::Utils::Outcome<CreateSubnetGroupResult, DAXError> CreateSubnetGroupOutcome;
        typedef Aws::Utils::Outcome<DecreaseReplicationFactorResult, DAXError> DecreaseReplicationFactorOutcome;
        typedef Aws::Utils::Outcome<DeleteClusterResult, DAXError> DeleteClusterOutcome;
        typedef Aws::Utils::Outcome<DeleteParameterGroupResult, DAXError> DeleteParameterGroupOutcome;
        typedef Aws::Utils::Outcome<DeleteSubnetGroupResult, DAXError> DeleteSubnetGroupOutcome;
        typedef Aws::Utils::Outcome<DescribeClustersResult, DAXError> DescribeClustersOutcome;
        typedef Aws::Utils::Outcome<DescribeDefaultParametersResult, DAXError> DescribeDefaultParametersOutcome;
        typedef Aws::Utils::Outcome<DescribeEventsResult, DAXError> DescribeEventsOutcome;
        typedef Aws::Utils::Outcome<DescribeParameterGroupsResult, DAXError> DescribeParameterGroupsOutcome;
        typedef Aws::Utils::Outcome<DescribeParametersResult, DAXError> DescribeParametersOutcome;
        typedef Aws::Utils::Outcome<DescribeSubnetGroupsResult, DAXError> DescribeSubnetGroupsOutcome;
        typedef Aws::Utils::Outcome<IncreaseReplicationFactorResult, DAXError> IncreaseReplicationFactorOutcome;
        typedef Aws::Utils::Outcome<ListTagsResult, DAXError> ListTagsOutcome;
        typedef Aws::Utils::Outcome<RebootNodeResult, DAXError> RebootNodeOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, DAXError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, DAXError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateClusterResult, DAXError> UpdateClusterOutcome;
        typedef Aws::Utils::Outcome<UpdateParameterGroupResult, DAXError> UpdateParameterGroupOutcome;
        typedef Aws::Utils::Outcome<UpdateSubnetGroupResult, DAXError> UpdateSubnetGroupOutcome;

        typedef std::future<CreateClusterOutcome> CreateClusterOutcomeCallable;
        typedef std::future<CreateParameterGroupOutcome> CreateParameterGroupOutcomeCallable;
        typedef std::future<CreateSubnetGroupOutcome> CreateSubnetGroupOutcomeCallable;
        typedef std::future<DecreaseReplicationFactorOutcome> DecreaseReplicationFactorOutcomeCallable;
        typedef std::future<DeleteClusterOutcome> DeleteClusterOutcomeCallable;
        typedef std::future<DeleteParameterGroupOutcome> DeleteParameterGroupOutcomeCallable;
        typedef std::future<DeleteSubnetGroupOutcome> DeleteSubnetGroupOutcomeCallable;
        typedef std::future<DescribeClustersOutcome> DescribeClustersOutcomeCallable;
        typedef std::future<DescribeDefaultParametersOutcome> DescribeDefaultParametersOutcomeCallable;
        typedef std::future<DescribeEventsOutcome> DescribeEventsOutcomeCallable;
        typedef std::future<DescribeParameterGroupsOutcome> DescribeParameterGroupsOutcomeCallable;
        typedef std::future<DescribeParametersOutcome> DescribeParametersOutcomeCallable;
        typedef std::future<DescribeSubnetGroupsOutcome> DescribeSubnetGroupsOutcomeCallable;
        typedef std::future<IncreaseReplicationFactorOutcome> IncreaseReplicationFactorOutcomeCallable;
        typedef std::future<ListTagsOutcome> ListTagsOutcomeCallable;
        typedef std::future<RebootNodeOutcome> RebootNodeOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateClusterOutcome> UpdateClusterOutcomeCallable;
        typedef std::future<UpdateParameterGroupOutcome> UpdateParameterGroupOutcomeCallable;
        typedef std::future<UpdateSubnetGroupOutcome> UpdateSubnetGroupOutcomeCallable;
} // namespace Model

  class DAXClient;

    typedef std::function<void(const DAXClient*, const Model::CreateClusterRequest&, const Model::CreateClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateClusterResponseReceivedHandler;
    typedef std::function<void(const DAXClient*, const Model::CreateParameterGroupRequest&, const Model::CreateParameterGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateParameterGroupResponseReceivedHandler;
    typedef std::function<void(const DAXClient*, const Model::CreateSubnetGroupRequest&, const Model::CreateSubnetGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSubnetGroupResponseReceivedHandler;
    typedef std::function<void(const DAXClient*, const Model::DecreaseReplicationFactorRequest&, const Model::DecreaseReplicationFactorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DecreaseReplicationFactorResponseReceivedHandler;
    typedef std::function<void(const DAXClient*, const Model::DeleteClusterRequest&, const Model::DeleteClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteClusterResponseReceivedHandler;
    typedef std::function<void(const DAXClient*, const Model::DeleteParameterGroupRequest&, const Model::DeleteParameterGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteParameterGroupResponseReceivedHandler;
    typedef std::function<void(const DAXClient*, const Model::DeleteSubnetGroupRequest&, const Model::DeleteSubnetGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSubnetGroupResponseReceivedHandler;
    typedef std::function<void(const DAXClient*, const Model::DescribeClustersRequest&, const Model::DescribeClustersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeClustersResponseReceivedHandler;
    typedef std::function<void(const DAXClient*, const Model::DescribeDefaultParametersRequest&, const Model::DescribeDefaultParametersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDefaultParametersResponseReceivedHandler;
    typedef std::function<void(const DAXClient*, const Model::DescribeEventsRequest&, const Model::DescribeEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEventsResponseReceivedHandler;
    typedef std::function<void(const DAXClient*, const Model::DescribeParameterGroupsRequest&, const Model::DescribeParameterGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeParameterGroupsResponseReceivedHandler;
    typedef std::function<void(const DAXClient*, const Model::DescribeParametersRequest&, const Model::DescribeParametersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeParametersResponseReceivedHandler;
    typedef std::function<void(const DAXClient*, const Model::DescribeSubnetGroupsRequest&, const Model::DescribeSubnetGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSubnetGroupsResponseReceivedHandler;
    typedef std::function<void(const DAXClient*, const Model::IncreaseReplicationFactorRequest&, const Model::IncreaseReplicationFactorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > IncreaseReplicationFactorResponseReceivedHandler;
    typedef std::function<void(const DAXClient*, const Model::ListTagsRequest&, const Model::ListTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsResponseReceivedHandler;
    typedef std::function<void(const DAXClient*, const Model::RebootNodeRequest&, const Model::RebootNodeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RebootNodeResponseReceivedHandler;
    typedef std::function<void(const DAXClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const DAXClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const DAXClient*, const Model::UpdateClusterRequest&, const Model::UpdateClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateClusterResponseReceivedHandler;
    typedef std::function<void(const DAXClient*, const Model::UpdateParameterGroupRequest&, const Model::UpdateParameterGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateParameterGroupResponseReceivedHandler;
    typedef std::function<void(const DAXClient*, const Model::UpdateSubnetGroupRequest&, const Model::UpdateSubnetGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSubnetGroupResponseReceivedHandler;

  /**
   * <p>DAX is a managed caching service engineered for Amazon DynamoDB. DAX
   * dramatically speeds up database reads by caching frequently-accessed data from
   * DynamoDB, so applications can access that data with sub-millisecond latency. You
   * can create a DAX cluster easily, using the AWS Management Console. With a few
   * simple modifications to your code, your application can begin taking advantage
   * of the DAX cluster and realize significant improvements in read performance.</p>
   */
  class AWS_DAX_API DAXClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DAXClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DAXClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        DAXClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~DAXClient();


        /**
         * <p>Creates a DAX cluster. All nodes in the cluster run the same DAX caching
         * software.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dax-2017-04-19/CreateCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateClusterOutcome CreateCluster(const Model::CreateClusterRequest& request) const;

        /**
         * A Callable wrapper for CreateCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateClusterOutcomeCallable CreateClusterCallable(const Model::CreateClusterRequest& request) const;

        /**
         * An Async wrapper for CreateCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateClusterAsync(const Model::CreateClusterRequest& request, const CreateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new parameter group. A parameter group is a collection of
         * parameters that you apply to all of the nodes in a DAX cluster.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dax-2017-04-19/CreateParameterGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateParameterGroupOutcome CreateParameterGroup(const Model::CreateParameterGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateParameterGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateParameterGroupOutcomeCallable CreateParameterGroupCallable(const Model::CreateParameterGroupRequest& request) const;

        /**
         * An Async wrapper for CreateParameterGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateParameterGroupAsync(const Model::CreateParameterGroupRequest& request, const CreateParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new subnet group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dax-2017-04-19/CreateSubnetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSubnetGroupOutcome CreateSubnetGroup(const Model::CreateSubnetGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateSubnetGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSubnetGroupOutcomeCallable CreateSubnetGroupCallable(const Model::CreateSubnetGroupRequest& request) const;

        /**
         * An Async wrapper for CreateSubnetGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSubnetGroupAsync(const Model::CreateSubnetGroupRequest& request, const CreateSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes one or more nodes from a DAX cluster.</p>  <p>You cannot use
         * <code>DecreaseReplicationFactor</code> to remove the last node in a DAX cluster.
         * If you need to do this, use <code>DeleteCluster</code> instead.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dax-2017-04-19/DecreaseReplicationFactor">AWS
         * API Reference</a></p>
         */
        virtual Model::DecreaseReplicationFactorOutcome DecreaseReplicationFactor(const Model::DecreaseReplicationFactorRequest& request) const;

        /**
         * A Callable wrapper for DecreaseReplicationFactor that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DecreaseReplicationFactorOutcomeCallable DecreaseReplicationFactorCallable(const Model::DecreaseReplicationFactorRequest& request) const;

        /**
         * An Async wrapper for DecreaseReplicationFactor that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DecreaseReplicationFactorAsync(const Model::DecreaseReplicationFactorRequest& request, const DecreaseReplicationFactorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a previously provisioned DAX cluster. <i>DeleteCluster</i> deletes
         * all associated nodes, node endpoints and the DAX cluster itself. When you
         * receive a successful response from this action, DAX immediately begins deleting
         * the cluster; you cannot cancel or revert this action.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dax-2017-04-19/DeleteCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteClusterOutcome DeleteCluster(const Model::DeleteClusterRequest& request) const;

        /**
         * A Callable wrapper for DeleteCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteClusterOutcomeCallable DeleteClusterCallable(const Model::DeleteClusterRequest& request) const;

        /**
         * An Async wrapper for DeleteCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteClusterAsync(const Model::DeleteClusterRequest& request, const DeleteClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified parameter group. You cannot delete a parameter group if
         * it is associated with any DAX clusters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dax-2017-04-19/DeleteParameterGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteParameterGroupOutcome DeleteParameterGroup(const Model::DeleteParameterGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteParameterGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteParameterGroupOutcomeCallable DeleteParameterGroupCallable(const Model::DeleteParameterGroupRequest& request) const;

        /**
         * An Async wrapper for DeleteParameterGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteParameterGroupAsync(const Model::DeleteParameterGroupRequest& request, const DeleteParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a subnet group.</p>  <p>You cannot delete a subnet group if it
         * is associated with any DAX clusters.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dax-2017-04-19/DeleteSubnetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSubnetGroupOutcome DeleteSubnetGroup(const Model::DeleteSubnetGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteSubnetGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSubnetGroupOutcomeCallable DeleteSubnetGroupCallable(const Model::DeleteSubnetGroupRequest& request) const;

        /**
         * An Async wrapper for DeleteSubnetGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSubnetGroupAsync(const Model::DeleteSubnetGroupRequest& request, const DeleteSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about all provisioned DAX clusters if no cluster
         * identifier is specified, or about a specific DAX cluster if a cluster identifier
         * is supplied.</p> <p>If the cluster is in the CREATING state, only cluster level
         * information will be displayed until all of the nodes are successfully
         * provisioned.</p> <p>If the cluster is in the DELETING state, only cluster level
         * information will be displayed.</p> <p>If nodes are currently being added to the
         * DAX cluster, node endpoint information and creation time for the additional
         * nodes will not be displayed until they are completely provisioned. When the DAX
         * cluster state is <i>available</i>, the cluster is ready for use.</p> <p>If nodes
         * are currently being removed from the DAX cluster, no endpoint information for
         * the removed nodes is displayed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dax-2017-04-19/DescribeClusters">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeClustersOutcome DescribeClusters(const Model::DescribeClustersRequest& request) const;

        /**
         * A Callable wrapper for DescribeClusters that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeClustersOutcomeCallable DescribeClustersCallable(const Model::DescribeClustersRequest& request) const;

        /**
         * An Async wrapper for DescribeClusters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeClustersAsync(const Model::DescribeClustersRequest& request, const DescribeClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the default system parameter information for the DAX caching
         * software.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dax-2017-04-19/DescribeDefaultParameters">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDefaultParametersOutcome DescribeDefaultParameters(const Model::DescribeDefaultParametersRequest& request) const;

        /**
         * A Callable wrapper for DescribeDefaultParameters that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDefaultParametersOutcomeCallable DescribeDefaultParametersCallable(const Model::DescribeDefaultParametersRequest& request) const;

        /**
         * An Async wrapper for DescribeDefaultParameters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDefaultParametersAsync(const Model::DescribeDefaultParametersRequest& request, const DescribeDefaultParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns events related to DAX clusters and parameter groups. You can obtain
         * events specific to a particular DAX cluster or parameter group by providing the
         * name as a parameter.</p> <p>By default, only the events occurring within the
         * last 24 hours are returned; however, you can retrieve up to 14 days' worth of
         * events if necessary.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dax-2017-04-19/DescribeEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEventsOutcome DescribeEvents(const Model::DescribeEventsRequest& request) const;

        /**
         * A Callable wrapper for DescribeEvents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEventsOutcomeCallable DescribeEventsCallable(const Model::DescribeEventsRequest& request) const;

        /**
         * An Async wrapper for DescribeEvents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEventsAsync(const Model::DescribeEventsRequest& request, const DescribeEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of parameter group descriptions. If a parameter group name is
         * specified, the list will contain only the descriptions for that
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dax-2017-04-19/DescribeParameterGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeParameterGroupsOutcome DescribeParameterGroups(const Model::DescribeParameterGroupsRequest& request) const;

        /**
         * A Callable wrapper for DescribeParameterGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeParameterGroupsOutcomeCallable DescribeParameterGroupsCallable(const Model::DescribeParameterGroupsRequest& request) const;

        /**
         * An Async wrapper for DescribeParameterGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeParameterGroupsAsync(const Model::DescribeParameterGroupsRequest& request, const DescribeParameterGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the detailed parameter list for a particular parameter
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dax-2017-04-19/DescribeParameters">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeParametersOutcome DescribeParameters(const Model::DescribeParametersRequest& request) const;

        /**
         * A Callable wrapper for DescribeParameters that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeParametersOutcomeCallable DescribeParametersCallable(const Model::DescribeParametersRequest& request) const;

        /**
         * An Async wrapper for DescribeParameters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeParametersAsync(const Model::DescribeParametersRequest& request, const DescribeParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of subnet group descriptions. If a subnet group name is
         * specified, the list will contain only the description of that
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dax-2017-04-19/DescribeSubnetGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSubnetGroupsOutcome DescribeSubnetGroups(const Model::DescribeSubnetGroupsRequest& request) const;

        /**
         * A Callable wrapper for DescribeSubnetGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSubnetGroupsOutcomeCallable DescribeSubnetGroupsCallable(const Model::DescribeSubnetGroupsRequest& request) const;

        /**
         * An Async wrapper for DescribeSubnetGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSubnetGroupsAsync(const Model::DescribeSubnetGroupsRequest& request, const DescribeSubnetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds one or more nodes to a DAX cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dax-2017-04-19/IncreaseReplicationFactor">AWS
         * API Reference</a></p>
         */
        virtual Model::IncreaseReplicationFactorOutcome IncreaseReplicationFactor(const Model::IncreaseReplicationFactorRequest& request) const;

        /**
         * A Callable wrapper for IncreaseReplicationFactor that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::IncreaseReplicationFactorOutcomeCallable IncreaseReplicationFactorCallable(const Model::IncreaseReplicationFactorRequest& request) const;

        /**
         * An Async wrapper for IncreaseReplicationFactor that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void IncreaseReplicationFactorAsync(const Model::IncreaseReplicationFactorRequest& request, const IncreaseReplicationFactorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List all of the tags for a DAX cluster. You can call <code>ListTags</code> up
         * to 10 times per second, per account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dax-2017-04-19/ListTags">AWS API
         * Reference</a></p>
         */
        virtual Model::ListTagsOutcome ListTags(const Model::ListTagsRequest& request) const;

        /**
         * A Callable wrapper for ListTags that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsOutcomeCallable ListTagsCallable(const Model::ListTagsRequest& request) const;

        /**
         * An Async wrapper for ListTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsAsync(const Model::ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Reboots a single node of a DAX cluster. The reboot action takes place as soon
         * as possible. During the reboot, the node status is set to REBOOTING.</p> 
         * <p> <code>RebootNode</code> restarts the DAX engine process and does not remove
         * the contents of the cache. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dax-2017-04-19/RebootNode">AWS API
         * Reference</a></p>
         */
        virtual Model::RebootNodeOutcome RebootNode(const Model::RebootNodeRequest& request) const;

        /**
         * A Callable wrapper for RebootNode that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RebootNodeOutcomeCallable RebootNodeCallable(const Model::RebootNodeRequest& request) const;

        /**
         * An Async wrapper for RebootNode that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RebootNodeAsync(const Model::RebootNodeRequest& request, const RebootNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates a set of tags with a DAX resource. You can call
         * <code>TagResource</code> up to 5 times per second, per account. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dax-2017-04-19/TagResource">AWS API
         * Reference</a></p>
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
         * <p>Removes the association of tags from a DAX resource. You can call
         * <code>UntagResource</code> up to 5 times per second, per account. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dax-2017-04-19/UntagResource">AWS
         * API Reference</a></p>
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
         * <p>Modifies the settings for a DAX cluster. You can use this action to change
         * one or more cluster configuration parameters by specifying the parameters and
         * the new values.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dax-2017-04-19/UpdateCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateClusterOutcome UpdateCluster(const Model::UpdateClusterRequest& request) const;

        /**
         * A Callable wrapper for UpdateCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateClusterOutcomeCallable UpdateClusterCallable(const Model::UpdateClusterRequest& request) const;

        /**
         * An Async wrapper for UpdateCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateClusterAsync(const Model::UpdateClusterRequest& request, const UpdateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the parameters of a parameter group. You can modify up to 20
         * parameters in a single request by submitting a list parameter name and value
         * pairs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dax-2017-04-19/UpdateParameterGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateParameterGroupOutcome UpdateParameterGroup(const Model::UpdateParameterGroupRequest& request) const;

        /**
         * A Callable wrapper for UpdateParameterGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateParameterGroupOutcomeCallable UpdateParameterGroupCallable(const Model::UpdateParameterGroupRequest& request) const;

        /**
         * An Async wrapper for UpdateParameterGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateParameterGroupAsync(const Model::UpdateParameterGroupRequest& request, const UpdateParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies an existing subnet group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dax-2017-04-19/UpdateSubnetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSubnetGroupOutcome UpdateSubnetGroup(const Model::UpdateSubnetGroupRequest& request) const;

        /**
         * A Callable wrapper for UpdateSubnetGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSubnetGroupOutcomeCallable UpdateSubnetGroupCallable(const Model::UpdateSubnetGroupRequest& request) const;

        /**
         * An Async wrapper for UpdateSubnetGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSubnetGroupAsync(const Model::UpdateSubnetGroupRequest& request, const UpdateSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CreateClusterAsyncHelper(const Model::CreateClusterRequest& request, const CreateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateParameterGroupAsyncHelper(const Model::CreateParameterGroupRequest& request, const CreateParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateSubnetGroupAsyncHelper(const Model::CreateSubnetGroupRequest& request, const CreateSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DecreaseReplicationFactorAsyncHelper(const Model::DecreaseReplicationFactorRequest& request, const DecreaseReplicationFactorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteClusterAsyncHelper(const Model::DeleteClusterRequest& request, const DeleteClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteParameterGroupAsyncHelper(const Model::DeleteParameterGroupRequest& request, const DeleteParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteSubnetGroupAsyncHelper(const Model::DeleteSubnetGroupRequest& request, const DeleteSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeClustersAsyncHelper(const Model::DescribeClustersRequest& request, const DescribeClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDefaultParametersAsyncHelper(const Model::DescribeDefaultParametersRequest& request, const DescribeDefaultParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEventsAsyncHelper(const Model::DescribeEventsRequest& request, const DescribeEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeParameterGroupsAsyncHelper(const Model::DescribeParameterGroupsRequest& request, const DescribeParameterGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeParametersAsyncHelper(const Model::DescribeParametersRequest& request, const DescribeParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeSubnetGroupsAsyncHelper(const Model::DescribeSubnetGroupsRequest& request, const DescribeSubnetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void IncreaseReplicationFactorAsyncHelper(const Model::IncreaseReplicationFactorRequest& request, const IncreaseReplicationFactorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsAsyncHelper(const Model::ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RebootNodeAsyncHelper(const Model::RebootNodeRequest& request, const RebootNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateClusterAsyncHelper(const Model::UpdateClusterRequest& request, const UpdateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateParameterGroupAsyncHelper(const Model::UpdateParameterGroupRequest& request, const UpdateParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateSubnetGroupAsyncHelper(const Model::UpdateSubnetGroupRequest& request, const UpdateSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace DAX
} // namespace Aws

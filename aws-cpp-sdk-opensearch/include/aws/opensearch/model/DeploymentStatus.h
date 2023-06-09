﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace OpenSearchService
{
namespace Model
{
  enum class DeploymentStatus
  {
    NOT_SET,
    PENDING_UPDATE,
    IN_PROGRESS,
    COMPLETED,
    NOT_ELIGIBLE,
    ELIGIBLE
  };

namespace DeploymentStatusMapper
{
AWS_OPENSEARCHSERVICE_API DeploymentStatus GetDeploymentStatusForName(const Aws::String& name);

AWS_OPENSEARCHSERVICE_API Aws::String GetNameForDeploymentStatus(DeploymentStatus value);
} // namespace DeploymentStatusMapper
} // namespace Model
} // namespace OpenSearchService
} // namespace Aws

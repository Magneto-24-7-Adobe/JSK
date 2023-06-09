﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-identity/ChimeSDKIdentity_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace ChimeSDKIdentity
{
namespace ChimeSDKIdentityEndpoint
{
AWS_CHIMESDKIDENTITY_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace ChimeSDKIdentityEndpoint
} // namespace ChimeSDKIdentity
} // namespace Aws

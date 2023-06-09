﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace MainframeModernization
{
namespace MainframeModernizationEndpoint
{
AWS_MAINFRAMEMODERNIZATION_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace MainframeModernizationEndpoint
} // namespace MainframeModernization
} // namespace Aws

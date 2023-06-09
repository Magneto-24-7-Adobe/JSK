﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-insights/ApplicationInsights_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ApplicationInsights
{
namespace Model
{
  enum class GroupingType
  {
    NOT_SET,
    ACCOUNT_BASED
  };

namespace GroupingTypeMapper
{
AWS_APPLICATIONINSIGHTS_API GroupingType GetGroupingTypeForName(const Aws::String& name);

AWS_APPLICATIONINSIGHTS_API Aws::String GetNameForGroupingType(GroupingType value);
} // namespace GroupingTypeMapper
} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws

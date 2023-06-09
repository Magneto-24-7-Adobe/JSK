﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Connect
{
namespace Model
{
  enum class ContactFlowModuleStatus
  {
    NOT_SET,
    PUBLISHED,
    SAVED
  };

namespace ContactFlowModuleStatusMapper
{
AWS_CONNECT_API ContactFlowModuleStatus GetContactFlowModuleStatusForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForContactFlowModuleStatus(ContactFlowModuleStatus value);
} // namespace ContactFlowModuleStatusMapper
} // namespace Model
} // namespace Connect
} // namespace Aws

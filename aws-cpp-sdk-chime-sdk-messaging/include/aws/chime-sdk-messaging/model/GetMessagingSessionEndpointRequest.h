﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/chime-sdk-messaging/ChimeSDKMessagingRequest.h>

namespace Aws
{
namespace ChimeSDKMessaging
{
namespace Model
{

  /**
   */
  class AWS_CHIMESDKMESSAGING_API GetMessagingSessionEndpointRequest : public ChimeSDKMessagingRequest
  {
  public:
    GetMessagingSessionEndpointRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetMessagingSessionEndpoint"; }

    Aws::String SerializePayload() const override;

  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws

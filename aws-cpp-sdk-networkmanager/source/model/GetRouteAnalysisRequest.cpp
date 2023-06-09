﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/GetRouteAnalysisRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::NetworkManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetRouteAnalysisRequest::GetRouteAnalysisRequest() : 
    m_globalNetworkIdHasBeenSet(false),
    m_routeAnalysisIdHasBeenSet(false)
{
}

Aws::String GetRouteAnalysisRequest::SerializePayload() const
{
  return {};
}





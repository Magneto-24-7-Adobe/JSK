﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/GetInAppMessagesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Pinpoint::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetInAppMessagesResult::GetInAppMessagesResult()
{
}

GetInAppMessagesResult::GetInAppMessagesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetInAppMessagesResult& GetInAppMessagesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  m_inAppMessagesResponse = jsonValue;


  return *this;
}

﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/GetRecommendationReportDetailsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MigrationHubStrategyRecommendations::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetRecommendationReportDetailsResult::GetRecommendationReportDetailsResult()
{
}

GetRecommendationReportDetailsResult::GetRecommendationReportDetailsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetRecommendationReportDetailsResult& GetRecommendationReportDetailsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

  }

  if(jsonValue.ValueExists("recommendationReportDetails"))
  {
    m_recommendationReportDetails = jsonValue.GetObject("recommendationReportDetails");

  }



  return *this;
}

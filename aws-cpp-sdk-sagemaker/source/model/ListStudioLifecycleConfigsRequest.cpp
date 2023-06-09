﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ListStudioLifecycleConfigsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListStudioLifecycleConfigsRequest::ListStudioLifecycleConfigsRequest() : 
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_nameContainsHasBeenSet(false),
    m_appTypeEquals(StudioLifecycleConfigAppType::NOT_SET),
    m_appTypeEqualsHasBeenSet(false),
    m_creationTimeBeforeHasBeenSet(false),
    m_creationTimeAfterHasBeenSet(false),
    m_modifiedTimeBeforeHasBeenSet(false),
    m_modifiedTimeAfterHasBeenSet(false),
    m_sortBy(StudioLifecycleConfigSortKey::NOT_SET),
    m_sortByHasBeenSet(false),
    m_sortOrder(SortOrder::NOT_SET),
    m_sortOrderHasBeenSet(false)
{
}

Aws::String ListStudioLifecycleConfigsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_nameContainsHasBeenSet)
  {
   payload.WithString("NameContains", m_nameContains);

  }

  if(m_appTypeEqualsHasBeenSet)
  {
   payload.WithString("AppTypeEquals", StudioLifecycleConfigAppTypeMapper::GetNameForStudioLifecycleConfigAppType(m_appTypeEquals));
  }

  if(m_creationTimeBeforeHasBeenSet)
  {
   payload.WithDouble("CreationTimeBefore", m_creationTimeBefore.SecondsWithMSPrecision());
  }

  if(m_creationTimeAfterHasBeenSet)
  {
   payload.WithDouble("CreationTimeAfter", m_creationTimeAfter.SecondsWithMSPrecision());
  }

  if(m_modifiedTimeBeforeHasBeenSet)
  {
   payload.WithDouble("ModifiedTimeBefore", m_modifiedTimeBefore.SecondsWithMSPrecision());
  }

  if(m_modifiedTimeAfterHasBeenSet)
  {
   payload.WithDouble("ModifiedTimeAfter", m_modifiedTimeAfter.SecondsWithMSPrecision());
  }

  if(m_sortByHasBeenSet)
  {
   payload.WithString("SortBy", StudioLifecycleConfigSortKeyMapper::GetNameForStudioLifecycleConfigSortKey(m_sortBy));
  }

  if(m_sortOrderHasBeenSet)
  {
   payload.WithString("SortOrder", SortOrderMapper::GetNameForSortOrder(m_sortOrder));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListStudioLifecycleConfigsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.ListStudioLifecycleConfigs"));
  return headers;

}





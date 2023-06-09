﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/DeleteBackupVaultLockConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteBackupVaultLockConfigurationRequest::DeleteBackupVaultLockConfigurationRequest() : 
    m_backupVaultNameHasBeenSet(false)
{
}

Aws::String DeleteBackupVaultLockConfigurationRequest::SerializePayload() const
{
  return {};
}





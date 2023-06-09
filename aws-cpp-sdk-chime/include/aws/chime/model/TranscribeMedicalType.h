﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Chime
{
namespace Model
{
  enum class TranscribeMedicalType
  {
    NOT_SET,
    CONVERSATION,
    DICTATION
  };

namespace TranscribeMedicalTypeMapper
{
AWS_CHIME_API TranscribeMedicalType GetTranscribeMedicalTypeForName(const Aws::String& name);

AWS_CHIME_API Aws::String GetNameForTranscribeMedicalType(TranscribeMedicalType value);
} // namespace TranscribeMedicalTypeMapper
} // namespace Model
} // namespace Chime
} // namespace Aws

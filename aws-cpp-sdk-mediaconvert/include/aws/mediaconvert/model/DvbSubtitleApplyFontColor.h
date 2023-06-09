﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaConvert
{
namespace Model
{
  enum class DvbSubtitleApplyFontColor
  {
    NOT_SET,
    WHITE_TEXT_ONLY,
    ALL_TEXT
  };

namespace DvbSubtitleApplyFontColorMapper
{
AWS_MEDIACONVERT_API DvbSubtitleApplyFontColor GetDvbSubtitleApplyFontColorForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForDvbSubtitleApplyFontColor(DvbSubtitleApplyFontColor value);
} // namespace DvbSubtitleApplyFontColorMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws

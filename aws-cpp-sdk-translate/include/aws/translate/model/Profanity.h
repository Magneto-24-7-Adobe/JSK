﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/translate/Translate_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Translate
{
namespace Model
{
  enum class Profanity
  {
    NOT_SET,
    MASK
  };

namespace ProfanityMapper
{
AWS_TRANSLATE_API Profanity GetProfanityForName(const Aws::String& name);

AWS_TRANSLATE_API Aws::String GetNameForProfanity(Profanity value);
} // namespace ProfanityMapper
} // namespace Model
} // namespace Translate
} // namespace Aws

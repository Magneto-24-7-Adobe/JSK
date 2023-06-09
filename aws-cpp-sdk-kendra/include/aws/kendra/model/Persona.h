﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace kendra
{
namespace Model
{
  enum class Persona
  {
    NOT_SET,
    OWNER,
    VIEWER
  };

namespace PersonaMapper
{
AWS_KENDRA_API Persona GetPersonaForName(const Aws::String& name);

AWS_KENDRA_API Aws::String GetNameForPersona(Persona value);
} // namespace PersonaMapper
} // namespace Model
} // namespace kendra
} // namespace Aws

﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53domains/Route53Domains_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Route53Domains
{
namespace Model
{
  enum class Operator
  {
    NOT_SET,
    LE,
    GE,
    BEGINS_WITH
  };

namespace OperatorMapper
{
AWS_ROUTE53DOMAINS_API Operator GetOperatorForName(const Aws::String& name);

AWS_ROUTE53DOMAINS_API Aws::String GetNameForOperator(Operator value);
} // namespace OperatorMapper
} // namespace Model
} // namespace Route53Domains
} // namespace Aws

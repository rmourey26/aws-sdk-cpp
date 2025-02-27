﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/DescribeAggregationAuthorizationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeAggregationAuthorizationsResult::DescribeAggregationAuthorizationsResult()
{
}

DescribeAggregationAuthorizationsResult::DescribeAggregationAuthorizationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeAggregationAuthorizationsResult& DescribeAggregationAuthorizationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AggregationAuthorizations"))
  {
    Aws::Utils::Array<JsonView> aggregationAuthorizationsJsonList = jsonValue.GetArray("AggregationAuthorizations");
    for(unsigned aggregationAuthorizationsIndex = 0; aggregationAuthorizationsIndex < aggregationAuthorizationsJsonList.GetLength(); ++aggregationAuthorizationsIndex)
    {
      m_aggregationAuthorizations.push_back(aggregationAuthorizationsJsonList[aggregationAuthorizationsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}

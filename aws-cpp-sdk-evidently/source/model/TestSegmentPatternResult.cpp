﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evidently/model/TestSegmentPatternResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CloudWatchEvidently::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

TestSegmentPatternResult::TestSegmentPatternResult() : 
    m_match(false)
{
}

TestSegmentPatternResult::TestSegmentPatternResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_match(false)
{
  *this = result;
}

TestSegmentPatternResult& TestSegmentPatternResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("match"))
  {
    m_match = jsonValue.GetBool("match");

  }



  return *this;
}

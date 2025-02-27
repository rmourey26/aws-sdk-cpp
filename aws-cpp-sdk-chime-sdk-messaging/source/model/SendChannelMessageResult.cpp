﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-messaging/model/SendChannelMessageResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ChimeSDKMessaging::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

SendChannelMessageResult::SendChannelMessageResult()
{
}

SendChannelMessageResult::SendChannelMessageResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

SendChannelMessageResult& SendChannelMessageResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ChannelArn"))
  {
    m_channelArn = jsonValue.GetString("ChannelArn");

  }

  if(jsonValue.ValueExists("MessageId"))
  {
    m_messageId = jsonValue.GetString("MessageId");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetObject("Status");

  }

  if(jsonValue.ValueExists("SubChannelId"))
  {
    m_subChannelId = jsonValue.GetString("SubChannelId");

  }



  return *this;
}

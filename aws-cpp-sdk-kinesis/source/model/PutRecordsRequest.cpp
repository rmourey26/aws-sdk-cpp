﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesis/model/PutRecordsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Kinesis::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutRecordsRequest::PutRecordsRequest() : 
    m_recordsHasBeenSet(false),
    m_streamNameHasBeenSet(false)
{
}

Aws::String PutRecordsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_recordsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> recordsJsonList(m_records.size());
   for(unsigned recordsIndex = 0; recordsIndex < recordsJsonList.GetLength(); ++recordsIndex)
   {
     recordsJsonList[recordsIndex].AsObject(m_records[recordsIndex].Jsonize());
   }
   payload.WithArray("Records", std::move(recordsJsonList));

  }

  if(m_streamNameHasBeenSet)
  {
   payload.WithString("StreamName", m_streamName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutRecordsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Kinesis_20131202.PutRecords"));
  return headers;

}





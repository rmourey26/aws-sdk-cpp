﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/DeleteAccessPointForObjectLambdaRequest.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::S3Control::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

DeleteAccessPointForObjectLambdaRequest::DeleteAccessPointForObjectLambdaRequest() : 
    m_accountIdHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

Aws::String DeleteAccessPointForObjectLambdaRequest::SerializePayload() const
{
  return {};
}


Aws::Http::HeaderValueCollection DeleteAccessPointForObjectLambdaRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_accountIdHasBeenSet)
  {
    ss << m_accountId;
    headers.emplace("x-amz-account-id",  ss.str());
    ss.str("");
  }

  return headers;
}

﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/S3ControlRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace S3Control
{
namespace Model
{

  /**
   */
  class AWS_S3CONTROL_API DeleteBucketRequest : public S3ControlRequest
  {
  public:
    DeleteBucketRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteBucket"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    EndpointParameters GetEndpointContextParams() const override
    {
        EndpointParameters parameters;
        if (AccountIdHasBeenSet()) {
            parameters.emplace_back(Aws::String("AccountId"), this->GetAccountId(), Aws::Endpoint::EndpointParameter::ParameterOrigin::OPERATION_CONTEXT);
        }
        if (BucketHasBeenSet()) {
            parameters.emplace_back(Aws::String("Bucket"), this->GetBucket(), Aws::Endpoint::EndpointParameter::ParameterOrigin::OPERATION_CONTEXT);
        }

        return parameters;
    }


    /**
     * <p>The account ID that owns the Outposts bucket.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The account ID that owns the Outposts bucket.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The account ID that owns the Outposts bucket.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The account ID that owns the Outposts bucket.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The account ID that owns the Outposts bucket.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The account ID that owns the Outposts bucket.</p>
     */
    inline DeleteBucketRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The account ID that owns the Outposts bucket.</p>
     */
    inline DeleteBucketRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The account ID that owns the Outposts bucket.</p>
     */
    inline DeleteBucketRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>Specifies the bucket being deleted.</p> <p>For using this parameter with
     * Amazon S3 on Outposts with the REST API, you must specify the name and the
     * x-amz-outpost-id as well.</p> <p>For using this parameter with S3 on Outposts
     * with the Amazon Web Services SDK and CLI, you must specify the ARN of the bucket
     * accessed in the format
     * <code>arn:aws:s3-outposts:&lt;Region&gt;:&lt;account-id&gt;:outpost/&lt;outpost-id&gt;/bucket/&lt;my-bucket-name&gt;</code>.
     * For example, to access the bucket <code>reports</code> through outpost
     * <code>my-outpost</code> owned by account <code>123456789012</code> in Region
     * <code>us-west-2</code>, use the URL encoding of
     * <code>arn:aws:s3-outposts:us-west-2:123456789012:outpost/my-outpost/bucket/reports</code>.
     * The value must be URL encoded. </p>
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }

    /**
     * <p>Specifies the bucket being deleted.</p> <p>For using this parameter with
     * Amazon S3 on Outposts with the REST API, you must specify the name and the
     * x-amz-outpost-id as well.</p> <p>For using this parameter with S3 on Outposts
     * with the Amazon Web Services SDK and CLI, you must specify the ARN of the bucket
     * accessed in the format
     * <code>arn:aws:s3-outposts:&lt;Region&gt;:&lt;account-id&gt;:outpost/&lt;outpost-id&gt;/bucket/&lt;my-bucket-name&gt;</code>.
     * For example, to access the bucket <code>reports</code> through outpost
     * <code>my-outpost</code> owned by account <code>123456789012</code> in Region
     * <code>us-west-2</code>, use the URL encoding of
     * <code>arn:aws:s3-outposts:us-west-2:123456789012:outpost/my-outpost/bucket/reports</code>.
     * The value must be URL encoded. </p>
     */
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }

    /**
     * <p>Specifies the bucket being deleted.</p> <p>For using this parameter with
     * Amazon S3 on Outposts with the REST API, you must specify the name and the
     * x-amz-outpost-id as well.</p> <p>For using this parameter with S3 on Outposts
     * with the Amazon Web Services SDK and CLI, you must specify the ARN of the bucket
     * accessed in the format
     * <code>arn:aws:s3-outposts:&lt;Region&gt;:&lt;account-id&gt;:outpost/&lt;outpost-id&gt;/bucket/&lt;my-bucket-name&gt;</code>.
     * For example, to access the bucket <code>reports</code> through outpost
     * <code>my-outpost</code> owned by account <code>123456789012</code> in Region
     * <code>us-west-2</code>, use the URL encoding of
     * <code>arn:aws:s3-outposts:us-west-2:123456789012:outpost/my-outpost/bucket/reports</code>.
     * The value must be URL encoded. </p>
     */
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }

    /**
     * <p>Specifies the bucket being deleted.</p> <p>For using this parameter with
     * Amazon S3 on Outposts with the REST API, you must specify the name and the
     * x-amz-outpost-id as well.</p> <p>For using this parameter with S3 on Outposts
     * with the Amazon Web Services SDK and CLI, you must specify the ARN of the bucket
     * accessed in the format
     * <code>arn:aws:s3-outposts:&lt;Region&gt;:&lt;account-id&gt;:outpost/&lt;outpost-id&gt;/bucket/&lt;my-bucket-name&gt;</code>.
     * For example, to access the bucket <code>reports</code> through outpost
     * <code>my-outpost</code> owned by account <code>123456789012</code> in Region
     * <code>us-west-2</code>, use the URL encoding of
     * <code>arn:aws:s3-outposts:us-west-2:123456789012:outpost/my-outpost/bucket/reports</code>.
     * The value must be URL encoded. </p>
     */
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = std::move(value); }

    /**
     * <p>Specifies the bucket being deleted.</p> <p>For using this parameter with
     * Amazon S3 on Outposts with the REST API, you must specify the name and the
     * x-amz-outpost-id as well.</p> <p>For using this parameter with S3 on Outposts
     * with the Amazon Web Services SDK and CLI, you must specify the ARN of the bucket
     * accessed in the format
     * <code>arn:aws:s3-outposts:&lt;Region&gt;:&lt;account-id&gt;:outpost/&lt;outpost-id&gt;/bucket/&lt;my-bucket-name&gt;</code>.
     * For example, to access the bucket <code>reports</code> through outpost
     * <code>my-outpost</code> owned by account <code>123456789012</code> in Region
     * <code>us-west-2</code>, use the URL encoding of
     * <code>arn:aws:s3-outposts:us-west-2:123456789012:outpost/my-outpost/bucket/reports</code>.
     * The value must be URL encoded. </p>
     */
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }

    /**
     * <p>Specifies the bucket being deleted.</p> <p>For using this parameter with
     * Amazon S3 on Outposts with the REST API, you must specify the name and the
     * x-amz-outpost-id as well.</p> <p>For using this parameter with S3 on Outposts
     * with the Amazon Web Services SDK and CLI, you must specify the ARN of the bucket
     * accessed in the format
     * <code>arn:aws:s3-outposts:&lt;Region&gt;:&lt;account-id&gt;:outpost/&lt;outpost-id&gt;/bucket/&lt;my-bucket-name&gt;</code>.
     * For example, to access the bucket <code>reports</code> through outpost
     * <code>my-outpost</code> owned by account <code>123456789012</code> in Region
     * <code>us-west-2</code>, use the URL encoding of
     * <code>arn:aws:s3-outposts:us-west-2:123456789012:outpost/my-outpost/bucket/reports</code>.
     * The value must be URL encoded. </p>
     */
    inline DeleteBucketRequest& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}

    /**
     * <p>Specifies the bucket being deleted.</p> <p>For using this parameter with
     * Amazon S3 on Outposts with the REST API, you must specify the name and the
     * x-amz-outpost-id as well.</p> <p>For using this parameter with S3 on Outposts
     * with the Amazon Web Services SDK and CLI, you must specify the ARN of the bucket
     * accessed in the format
     * <code>arn:aws:s3-outposts:&lt;Region&gt;:&lt;account-id&gt;:outpost/&lt;outpost-id&gt;/bucket/&lt;my-bucket-name&gt;</code>.
     * For example, to access the bucket <code>reports</code> through outpost
     * <code>my-outpost</code> owned by account <code>123456789012</code> in Region
     * <code>us-west-2</code>, use the URL encoding of
     * <code>arn:aws:s3-outposts:us-west-2:123456789012:outpost/my-outpost/bucket/reports</code>.
     * The value must be URL encoded. </p>
     */
    inline DeleteBucketRequest& WithBucket(Aws::String&& value) { SetBucket(std::move(value)); return *this;}

    /**
     * <p>Specifies the bucket being deleted.</p> <p>For using this parameter with
     * Amazon S3 on Outposts with the REST API, you must specify the name and the
     * x-amz-outpost-id as well.</p> <p>For using this parameter with S3 on Outposts
     * with the Amazon Web Services SDK and CLI, you must specify the ARN of the bucket
     * accessed in the format
     * <code>arn:aws:s3-outposts:&lt;Region&gt;:&lt;account-id&gt;:outpost/&lt;outpost-id&gt;/bucket/&lt;my-bucket-name&gt;</code>.
     * For example, to access the bucket <code>reports</code> through outpost
     * <code>my-outpost</code> owned by account <code>123456789012</code> in Region
     * <code>us-west-2</code>, use the URL encoding of
     * <code>arn:aws:s3-outposts:us-west-2:123456789012:outpost/my-outpost/bucket/reports</code>.
     * The value must be URL encoded. </p>
     */
    inline DeleteBucketRequest& WithBucket(const char* value) { SetBucket(value); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws

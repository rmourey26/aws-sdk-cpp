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
  class AWS_S3CONTROL_API GetMultiRegionAccessPointPolicyStatusRequest : public S3ControlRequest
  {
  public:
    GetMultiRegionAccessPointPolicyStatusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetMultiRegionAccessPointPolicyStatus"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    inline bool ShouldComputeContentMd5() const override { return true; }


    EndpointParameters GetEndpointContextParams() const override
    {
        EndpointParameters parameters;
        if (AccountIdHasBeenSet()) {
            parameters.emplace_back(Aws::String("AccountId"), this->GetAccountId(), Aws::Endpoint::EndpointParameter::ParameterOrigin::OPERATION_CONTEXT);
        }

        return parameters;
    }


    /**
     * <p>The Amazon Web Services account ID for the owner of the Multi-Region Access
     * Point.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The Amazon Web Services account ID for the owner of the Multi-Region Access
     * Point.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID for the owner of the Multi-Region Access
     * Point.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The Amazon Web Services account ID for the owner of the Multi-Region Access
     * Point.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID for the owner of the Multi-Region Access
     * Point.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID for the owner of the Multi-Region Access
     * Point.</p>
     */
    inline GetMultiRegionAccessPointPolicyStatusRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID for the owner of the Multi-Region Access
     * Point.</p>
     */
    inline GetMultiRegionAccessPointPolicyStatusRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID for the owner of the Multi-Region Access
     * Point.</p>
     */
    inline GetMultiRegionAccessPointPolicyStatusRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>Specifies the Multi-Region Access Point. The name of the Multi-Region Access
     * Point is different from the alias. For more information about the distinction
     * between the name and the alias of an Multi-Region Access Point, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/CreatingMultiRegionAccessPoints.html#multi-region-access-point-naming">Managing
     * Multi-Region Access Points</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Specifies the Multi-Region Access Point. The name of the Multi-Region Access
     * Point is different from the alias. For more information about the distinction
     * between the name and the alias of an Multi-Region Access Point, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/CreatingMultiRegionAccessPoints.html#multi-region-access-point-naming">Managing
     * Multi-Region Access Points</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Specifies the Multi-Region Access Point. The name of the Multi-Region Access
     * Point is different from the alias. For more information about the distinction
     * between the name and the alias of an Multi-Region Access Point, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/CreatingMultiRegionAccessPoints.html#multi-region-access-point-naming">Managing
     * Multi-Region Access Points</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Specifies the Multi-Region Access Point. The name of the Multi-Region Access
     * Point is different from the alias. For more information about the distinction
     * between the name and the alias of an Multi-Region Access Point, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/CreatingMultiRegionAccessPoints.html#multi-region-access-point-naming">Managing
     * Multi-Region Access Points</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Specifies the Multi-Region Access Point. The name of the Multi-Region Access
     * Point is different from the alias. For more information about the distinction
     * between the name and the alias of an Multi-Region Access Point, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/CreatingMultiRegionAccessPoints.html#multi-region-access-point-naming">Managing
     * Multi-Region Access Points</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Specifies the Multi-Region Access Point. The name of the Multi-Region Access
     * Point is different from the alias. For more information about the distinction
     * between the name and the alias of an Multi-Region Access Point, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/CreatingMultiRegionAccessPoints.html#multi-region-access-point-naming">Managing
     * Multi-Region Access Points</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline GetMultiRegionAccessPointPolicyStatusRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Specifies the Multi-Region Access Point. The name of the Multi-Region Access
     * Point is different from the alias. For more information about the distinction
     * between the name and the alias of an Multi-Region Access Point, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/CreatingMultiRegionAccessPoints.html#multi-region-access-point-naming">Managing
     * Multi-Region Access Points</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline GetMultiRegionAccessPointPolicyStatusRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Specifies the Multi-Region Access Point. The name of the Multi-Region Access
     * Point is different from the alias. For more information about the distinction
     * between the name and the alias of an Multi-Region Access Point, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/CreatingMultiRegionAccessPoints.html#multi-region-access-point-naming">Managing
     * Multi-Region Access Points</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline GetMultiRegionAccessPointPolicyStatusRequest& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws

﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediastore/MediaStore_EXPORTS.h>
#include <aws/mediastore/MediaStoreRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediastore/model/CorsRule.h>
#include <utility>

namespace Aws
{
namespace MediaStore
{
namespace Model
{

  /**
   */
  class AWS_MEDIASTORE_API PutCorsPolicyRequest : public MediaStoreRequest
  {
  public:
    PutCorsPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutCorsPolicy"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the container that you want to assign the CORS policy to.</p>
     */
    inline const Aws::String& GetContainerName() const{ return m_containerName; }

    /**
     * <p>The name of the container that you want to assign the CORS policy to.</p>
     */
    inline bool ContainerNameHasBeenSet() const { return m_containerNameHasBeenSet; }

    /**
     * <p>The name of the container that you want to assign the CORS policy to.</p>
     */
    inline void SetContainerName(const Aws::String& value) { m_containerNameHasBeenSet = true; m_containerName = value; }

    /**
     * <p>The name of the container that you want to assign the CORS policy to.</p>
     */
    inline void SetContainerName(Aws::String&& value) { m_containerNameHasBeenSet = true; m_containerName = std::move(value); }

    /**
     * <p>The name of the container that you want to assign the CORS policy to.</p>
     */
    inline void SetContainerName(const char* value) { m_containerNameHasBeenSet = true; m_containerName.assign(value); }

    /**
     * <p>The name of the container that you want to assign the CORS policy to.</p>
     */
    inline PutCorsPolicyRequest& WithContainerName(const Aws::String& value) { SetContainerName(value); return *this;}

    /**
     * <p>The name of the container that you want to assign the CORS policy to.</p>
     */
    inline PutCorsPolicyRequest& WithContainerName(Aws::String&& value) { SetContainerName(std::move(value)); return *this;}

    /**
     * <p>The name of the container that you want to assign the CORS policy to.</p>
     */
    inline PutCorsPolicyRequest& WithContainerName(const char* value) { SetContainerName(value); return *this;}


    /**
     * <p>The CORS policy to apply to the container. </p>
     */
    inline const Aws::Vector<CorsRule>& GetCorsPolicy() const{ return m_corsPolicy; }

    /**
     * <p>The CORS policy to apply to the container. </p>
     */
    inline bool CorsPolicyHasBeenSet() const { return m_corsPolicyHasBeenSet; }

    /**
     * <p>The CORS policy to apply to the container. </p>
     */
    inline void SetCorsPolicy(const Aws::Vector<CorsRule>& value) { m_corsPolicyHasBeenSet = true; m_corsPolicy = value; }

    /**
     * <p>The CORS policy to apply to the container. </p>
     */
    inline void SetCorsPolicy(Aws::Vector<CorsRule>&& value) { m_corsPolicyHasBeenSet = true; m_corsPolicy = std::move(value); }

    /**
     * <p>The CORS policy to apply to the container. </p>
     */
    inline PutCorsPolicyRequest& WithCorsPolicy(const Aws::Vector<CorsRule>& value) { SetCorsPolicy(value); return *this;}

    /**
     * <p>The CORS policy to apply to the container. </p>
     */
    inline PutCorsPolicyRequest& WithCorsPolicy(Aws::Vector<CorsRule>&& value) { SetCorsPolicy(std::move(value)); return *this;}

    /**
     * <p>The CORS policy to apply to the container. </p>
     */
    inline PutCorsPolicyRequest& AddCorsPolicy(const CorsRule& value) { m_corsPolicyHasBeenSet = true; m_corsPolicy.push_back(value); return *this; }

    /**
     * <p>The CORS policy to apply to the container. </p>
     */
    inline PutCorsPolicyRequest& AddCorsPolicy(CorsRule&& value) { m_corsPolicyHasBeenSet = true; m_corsPolicy.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_containerName;
    bool m_containerNameHasBeenSet = false;

    Aws::Vector<CorsRule> m_corsPolicy;
    bool m_corsPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaStore
} // namespace Aws

﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/identitystore/IdentityStore_EXPORTS.h>
#include <aws/identitystore/IdentityStoreRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/identitystore/model/AttributeOperation.h>
#include <utility>

namespace Aws
{
namespace IdentityStore
{
namespace Model
{

  /**
   */
  class AWS_IDENTITYSTORE_API UpdateUserRequest : public IdentityStoreRequest
  {
  public:
    UpdateUserRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateUser"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The globally unique identifier for the identity store.</p>
     */
    inline const Aws::String& GetIdentityStoreId() const{ return m_identityStoreId; }

    /**
     * <p>The globally unique identifier for the identity store.</p>
     */
    inline bool IdentityStoreIdHasBeenSet() const { return m_identityStoreIdHasBeenSet; }

    /**
     * <p>The globally unique identifier for the identity store.</p>
     */
    inline void SetIdentityStoreId(const Aws::String& value) { m_identityStoreIdHasBeenSet = true; m_identityStoreId = value; }

    /**
     * <p>The globally unique identifier for the identity store.</p>
     */
    inline void SetIdentityStoreId(Aws::String&& value) { m_identityStoreIdHasBeenSet = true; m_identityStoreId = std::move(value); }

    /**
     * <p>The globally unique identifier for the identity store.</p>
     */
    inline void SetIdentityStoreId(const char* value) { m_identityStoreIdHasBeenSet = true; m_identityStoreId.assign(value); }

    /**
     * <p>The globally unique identifier for the identity store.</p>
     */
    inline UpdateUserRequest& WithIdentityStoreId(const Aws::String& value) { SetIdentityStoreId(value); return *this;}

    /**
     * <p>The globally unique identifier for the identity store.</p>
     */
    inline UpdateUserRequest& WithIdentityStoreId(Aws::String&& value) { SetIdentityStoreId(std::move(value)); return *this;}

    /**
     * <p>The globally unique identifier for the identity store.</p>
     */
    inline UpdateUserRequest& WithIdentityStoreId(const char* value) { SetIdentityStoreId(value); return *this;}


    /**
     * <p>The identifier for a user in the identity store.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>The identifier for a user in the identity store.</p>
     */
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }

    /**
     * <p>The identifier for a user in the identity store.</p>
     */
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * <p>The identifier for a user in the identity store.</p>
     */
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }

    /**
     * <p>The identifier for a user in the identity store.</p>
     */
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }

    /**
     * <p>The identifier for a user in the identity store.</p>
     */
    inline UpdateUserRequest& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>The identifier for a user in the identity store.</p>
     */
    inline UpdateUserRequest& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>The identifier for a user in the identity store.</p>
     */
    inline UpdateUserRequest& WithUserId(const char* value) { SetUserId(value); return *this;}


    /**
     * <p>A list of <code>AttributeOperation</code> objects to apply to the requested
     * user. These operations might add, replace, or remove an attribute.</p>
     */
    inline const Aws::Vector<AttributeOperation>& GetOperations() const{ return m_operations; }

    /**
     * <p>A list of <code>AttributeOperation</code> objects to apply to the requested
     * user. These operations might add, replace, or remove an attribute.</p>
     */
    inline bool OperationsHasBeenSet() const { return m_operationsHasBeenSet; }

    /**
     * <p>A list of <code>AttributeOperation</code> objects to apply to the requested
     * user. These operations might add, replace, or remove an attribute.</p>
     */
    inline void SetOperations(const Aws::Vector<AttributeOperation>& value) { m_operationsHasBeenSet = true; m_operations = value; }

    /**
     * <p>A list of <code>AttributeOperation</code> objects to apply to the requested
     * user. These operations might add, replace, or remove an attribute.</p>
     */
    inline void SetOperations(Aws::Vector<AttributeOperation>&& value) { m_operationsHasBeenSet = true; m_operations = std::move(value); }

    /**
     * <p>A list of <code>AttributeOperation</code> objects to apply to the requested
     * user. These operations might add, replace, or remove an attribute.</p>
     */
    inline UpdateUserRequest& WithOperations(const Aws::Vector<AttributeOperation>& value) { SetOperations(value); return *this;}

    /**
     * <p>A list of <code>AttributeOperation</code> objects to apply to the requested
     * user. These operations might add, replace, or remove an attribute.</p>
     */
    inline UpdateUserRequest& WithOperations(Aws::Vector<AttributeOperation>&& value) { SetOperations(std::move(value)); return *this;}

    /**
     * <p>A list of <code>AttributeOperation</code> objects to apply to the requested
     * user. These operations might add, replace, or remove an attribute.</p>
     */
    inline UpdateUserRequest& AddOperations(const AttributeOperation& value) { m_operationsHasBeenSet = true; m_operations.push_back(value); return *this; }

    /**
     * <p>A list of <code>AttributeOperation</code> objects to apply to the requested
     * user. These operations might add, replace, or remove an attribute.</p>
     */
    inline UpdateUserRequest& AddOperations(AttributeOperation&& value) { m_operationsHasBeenSet = true; m_operations.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_identityStoreId;
    bool m_identityStoreIdHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    Aws::Vector<AttributeOperation> m_operations;
    bool m_operationsHasBeenSet = false;
  };

} // namespace Model
} // namespace IdentityStore
} // namespace Aws

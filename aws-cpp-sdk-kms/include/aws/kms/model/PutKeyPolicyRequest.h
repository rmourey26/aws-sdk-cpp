﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/kms/KMSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace KMS
{
namespace Model
{

  /**
   */
  class AWS_KMS_API PutKeyPolicyRequest : public KMSRequest
  {
  public:
    PutKeyPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutKeyPolicy"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Sets the key policy on the specified KMS key.</p> <p>Specify the key ID or
     * key ARN of the KMS key.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }

    /**
     * <p>Sets the key policy on the specified KMS key.</p> <p>Specify the key ID or
     * key ARN of the KMS key.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline bool KeyIdHasBeenSet() const { return m_keyIdHasBeenSet; }

    /**
     * <p>Sets the key policy on the specified KMS key.</p> <p>Specify the key ID or
     * key ARN of the KMS key.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline void SetKeyId(const Aws::String& value) { m_keyIdHasBeenSet = true; m_keyId = value; }

    /**
     * <p>Sets the key policy on the specified KMS key.</p> <p>Specify the key ID or
     * key ARN of the KMS key.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline void SetKeyId(Aws::String&& value) { m_keyIdHasBeenSet = true; m_keyId = std::move(value); }

    /**
     * <p>Sets the key policy on the specified KMS key.</p> <p>Specify the key ID or
     * key ARN of the KMS key.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline void SetKeyId(const char* value) { m_keyIdHasBeenSet = true; m_keyId.assign(value); }

    /**
     * <p>Sets the key policy on the specified KMS key.</p> <p>Specify the key ID or
     * key ARN of the KMS key.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline PutKeyPolicyRequest& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>Sets the key policy on the specified KMS key.</p> <p>Specify the key ID or
     * key ARN of the KMS key.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline PutKeyPolicyRequest& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}

    /**
     * <p>Sets the key policy on the specified KMS key.</p> <p>Specify the key ID or
     * key ARN of the KMS key.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline PutKeyPolicyRequest& WithKeyId(const char* value) { SetKeyId(value); return *this;}


    /**
     * <p>The name of the key policy. The only valid value is <code>default</code>.</p>
     */
    inline const Aws::String& GetPolicyName() const{ return m_policyName; }

    /**
     * <p>The name of the key policy. The only valid value is <code>default</code>.</p>
     */
    inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }

    /**
     * <p>The name of the key policy. The only valid value is <code>default</code>.</p>
     */
    inline void SetPolicyName(const Aws::String& value) { m_policyNameHasBeenSet = true; m_policyName = value; }

    /**
     * <p>The name of the key policy. The only valid value is <code>default</code>.</p>
     */
    inline void SetPolicyName(Aws::String&& value) { m_policyNameHasBeenSet = true; m_policyName = std::move(value); }

    /**
     * <p>The name of the key policy. The only valid value is <code>default</code>.</p>
     */
    inline void SetPolicyName(const char* value) { m_policyNameHasBeenSet = true; m_policyName.assign(value); }

    /**
     * <p>The name of the key policy. The only valid value is <code>default</code>.</p>
     */
    inline PutKeyPolicyRequest& WithPolicyName(const Aws::String& value) { SetPolicyName(value); return *this;}

    /**
     * <p>The name of the key policy. The only valid value is <code>default</code>.</p>
     */
    inline PutKeyPolicyRequest& WithPolicyName(Aws::String&& value) { SetPolicyName(std::move(value)); return *this;}

    /**
     * <p>The name of the key policy. The only valid value is <code>default</code>.</p>
     */
    inline PutKeyPolicyRequest& WithPolicyName(const char* value) { SetPolicyName(value); return *this;}


    /**
     * <p>The key policy to attach to the KMS key.</p> <p>The key policy must meet the
     * following criteria:</p> <ul> <li> <p>If you don't set
     * <code>BypassPolicyLockoutSafetyCheck</code> to true, the key policy must allow
     * the principal that is making the <code>PutKeyPolicy</code> request to make a
     * subsequent <code>PutKeyPolicy</code> request on the KMS key. This reduces the
     * risk that the KMS key becomes unmanageable. For more information, refer to the
     * scenario in the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default-allow-root-enable-iam">Default
     * Key Policy</a> section of the <i>Key Management Service Developer Guide</i>.</p>
     * </li> <li> <p>Each statement in the key policy must contain one or more
     * principals. The principals in the key policy must exist and be visible to KMS.
     * When you create a new Amazon Web Services principal (for example, an IAM user or
     * role), you might need to enforce a delay before including the new principal in a
     * key policy because the new principal might not be immediately visible to KMS.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/troubleshoot_general.html#troubleshoot_general_eventual-consistency">Changes
     * that I make are not always immediately visible</a> in the <i>Amazon Web Services
     * Identity and Access Management User Guide</i>.</p> </li> </ul> <p>A key policy
     * document can include only the following characters:</p> <ul> <li> <p>Printable
     * ASCII characters from the space character (<code>\u0020</code>) through the end
     * of the ASCII character range.</p> </li> <li> <p>Printable characters in the
     * Basic Latin and Latin-1 Supplement character set (through
     * <code>\u00FF</code>).</p> </li> <li> <p>The tab (<code>\u0009</code>), line feed
     * (<code>\u000A</code>), and carriage return (<code>\u000D</code>) special
     * characters</p> </li> </ul> <p>For information about key policies, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">Key
     * policies in KMS</a> in the <i>Key Management Service Developer Guide</i>. For
     * help writing and formatting a JSON policy document, see the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies.html">IAM
     * JSON Policy Reference</a> in the <i> <i>Identity and Access Management User
     * Guide</i> </i>.</p>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }

    /**
     * <p>The key policy to attach to the KMS key.</p> <p>The key policy must meet the
     * following criteria:</p> <ul> <li> <p>If you don't set
     * <code>BypassPolicyLockoutSafetyCheck</code> to true, the key policy must allow
     * the principal that is making the <code>PutKeyPolicy</code> request to make a
     * subsequent <code>PutKeyPolicy</code> request on the KMS key. This reduces the
     * risk that the KMS key becomes unmanageable. For more information, refer to the
     * scenario in the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default-allow-root-enable-iam">Default
     * Key Policy</a> section of the <i>Key Management Service Developer Guide</i>.</p>
     * </li> <li> <p>Each statement in the key policy must contain one or more
     * principals. The principals in the key policy must exist and be visible to KMS.
     * When you create a new Amazon Web Services principal (for example, an IAM user or
     * role), you might need to enforce a delay before including the new principal in a
     * key policy because the new principal might not be immediately visible to KMS.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/troubleshoot_general.html#troubleshoot_general_eventual-consistency">Changes
     * that I make are not always immediately visible</a> in the <i>Amazon Web Services
     * Identity and Access Management User Guide</i>.</p> </li> </ul> <p>A key policy
     * document can include only the following characters:</p> <ul> <li> <p>Printable
     * ASCII characters from the space character (<code>\u0020</code>) through the end
     * of the ASCII character range.</p> </li> <li> <p>Printable characters in the
     * Basic Latin and Latin-1 Supplement character set (through
     * <code>\u00FF</code>).</p> </li> <li> <p>The tab (<code>\u0009</code>), line feed
     * (<code>\u000A</code>), and carriage return (<code>\u000D</code>) special
     * characters</p> </li> </ul> <p>For information about key policies, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">Key
     * policies in KMS</a> in the <i>Key Management Service Developer Guide</i>. For
     * help writing and formatting a JSON policy document, see the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies.html">IAM
     * JSON Policy Reference</a> in the <i> <i>Identity and Access Management User
     * Guide</i> </i>.</p>
     */
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }

    /**
     * <p>The key policy to attach to the KMS key.</p> <p>The key policy must meet the
     * following criteria:</p> <ul> <li> <p>If you don't set
     * <code>BypassPolicyLockoutSafetyCheck</code> to true, the key policy must allow
     * the principal that is making the <code>PutKeyPolicy</code> request to make a
     * subsequent <code>PutKeyPolicy</code> request on the KMS key. This reduces the
     * risk that the KMS key becomes unmanageable. For more information, refer to the
     * scenario in the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default-allow-root-enable-iam">Default
     * Key Policy</a> section of the <i>Key Management Service Developer Guide</i>.</p>
     * </li> <li> <p>Each statement in the key policy must contain one or more
     * principals. The principals in the key policy must exist and be visible to KMS.
     * When you create a new Amazon Web Services principal (for example, an IAM user or
     * role), you might need to enforce a delay before including the new principal in a
     * key policy because the new principal might not be immediately visible to KMS.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/troubleshoot_general.html#troubleshoot_general_eventual-consistency">Changes
     * that I make are not always immediately visible</a> in the <i>Amazon Web Services
     * Identity and Access Management User Guide</i>.</p> </li> </ul> <p>A key policy
     * document can include only the following characters:</p> <ul> <li> <p>Printable
     * ASCII characters from the space character (<code>\u0020</code>) through the end
     * of the ASCII character range.</p> </li> <li> <p>Printable characters in the
     * Basic Latin and Latin-1 Supplement character set (through
     * <code>\u00FF</code>).</p> </li> <li> <p>The tab (<code>\u0009</code>), line feed
     * (<code>\u000A</code>), and carriage return (<code>\u000D</code>) special
     * characters</p> </li> </ul> <p>For information about key policies, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">Key
     * policies in KMS</a> in the <i>Key Management Service Developer Guide</i>. For
     * help writing and formatting a JSON policy document, see the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies.html">IAM
     * JSON Policy Reference</a> in the <i> <i>Identity and Access Management User
     * Guide</i> </i>.</p>
     */
    inline void SetPolicy(const Aws::String& value) { m_policyHasBeenSet = true; m_policy = value; }

    /**
     * <p>The key policy to attach to the KMS key.</p> <p>The key policy must meet the
     * following criteria:</p> <ul> <li> <p>If you don't set
     * <code>BypassPolicyLockoutSafetyCheck</code> to true, the key policy must allow
     * the principal that is making the <code>PutKeyPolicy</code> request to make a
     * subsequent <code>PutKeyPolicy</code> request on the KMS key. This reduces the
     * risk that the KMS key becomes unmanageable. For more information, refer to the
     * scenario in the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default-allow-root-enable-iam">Default
     * Key Policy</a> section of the <i>Key Management Service Developer Guide</i>.</p>
     * </li> <li> <p>Each statement in the key policy must contain one or more
     * principals. The principals in the key policy must exist and be visible to KMS.
     * When you create a new Amazon Web Services principal (for example, an IAM user or
     * role), you might need to enforce a delay before including the new principal in a
     * key policy because the new principal might not be immediately visible to KMS.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/troubleshoot_general.html#troubleshoot_general_eventual-consistency">Changes
     * that I make are not always immediately visible</a> in the <i>Amazon Web Services
     * Identity and Access Management User Guide</i>.</p> </li> </ul> <p>A key policy
     * document can include only the following characters:</p> <ul> <li> <p>Printable
     * ASCII characters from the space character (<code>\u0020</code>) through the end
     * of the ASCII character range.</p> </li> <li> <p>Printable characters in the
     * Basic Latin and Latin-1 Supplement character set (through
     * <code>\u00FF</code>).</p> </li> <li> <p>The tab (<code>\u0009</code>), line feed
     * (<code>\u000A</code>), and carriage return (<code>\u000D</code>) special
     * characters</p> </li> </ul> <p>For information about key policies, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">Key
     * policies in KMS</a> in the <i>Key Management Service Developer Guide</i>. For
     * help writing and formatting a JSON policy document, see the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies.html">IAM
     * JSON Policy Reference</a> in the <i> <i>Identity and Access Management User
     * Guide</i> </i>.</p>
     */
    inline void SetPolicy(Aws::String&& value) { m_policyHasBeenSet = true; m_policy = std::move(value); }

    /**
     * <p>The key policy to attach to the KMS key.</p> <p>The key policy must meet the
     * following criteria:</p> <ul> <li> <p>If you don't set
     * <code>BypassPolicyLockoutSafetyCheck</code> to true, the key policy must allow
     * the principal that is making the <code>PutKeyPolicy</code> request to make a
     * subsequent <code>PutKeyPolicy</code> request on the KMS key. This reduces the
     * risk that the KMS key becomes unmanageable. For more information, refer to the
     * scenario in the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default-allow-root-enable-iam">Default
     * Key Policy</a> section of the <i>Key Management Service Developer Guide</i>.</p>
     * </li> <li> <p>Each statement in the key policy must contain one or more
     * principals. The principals in the key policy must exist and be visible to KMS.
     * When you create a new Amazon Web Services principal (for example, an IAM user or
     * role), you might need to enforce a delay before including the new principal in a
     * key policy because the new principal might not be immediately visible to KMS.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/troubleshoot_general.html#troubleshoot_general_eventual-consistency">Changes
     * that I make are not always immediately visible</a> in the <i>Amazon Web Services
     * Identity and Access Management User Guide</i>.</p> </li> </ul> <p>A key policy
     * document can include only the following characters:</p> <ul> <li> <p>Printable
     * ASCII characters from the space character (<code>\u0020</code>) through the end
     * of the ASCII character range.</p> </li> <li> <p>Printable characters in the
     * Basic Latin and Latin-1 Supplement character set (through
     * <code>\u00FF</code>).</p> </li> <li> <p>The tab (<code>\u0009</code>), line feed
     * (<code>\u000A</code>), and carriage return (<code>\u000D</code>) special
     * characters</p> </li> </ul> <p>For information about key policies, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">Key
     * policies in KMS</a> in the <i>Key Management Service Developer Guide</i>. For
     * help writing and formatting a JSON policy document, see the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies.html">IAM
     * JSON Policy Reference</a> in the <i> <i>Identity and Access Management User
     * Guide</i> </i>.</p>
     */
    inline void SetPolicy(const char* value) { m_policyHasBeenSet = true; m_policy.assign(value); }

    /**
     * <p>The key policy to attach to the KMS key.</p> <p>The key policy must meet the
     * following criteria:</p> <ul> <li> <p>If you don't set
     * <code>BypassPolicyLockoutSafetyCheck</code> to true, the key policy must allow
     * the principal that is making the <code>PutKeyPolicy</code> request to make a
     * subsequent <code>PutKeyPolicy</code> request on the KMS key. This reduces the
     * risk that the KMS key becomes unmanageable. For more information, refer to the
     * scenario in the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default-allow-root-enable-iam">Default
     * Key Policy</a> section of the <i>Key Management Service Developer Guide</i>.</p>
     * </li> <li> <p>Each statement in the key policy must contain one or more
     * principals. The principals in the key policy must exist and be visible to KMS.
     * When you create a new Amazon Web Services principal (for example, an IAM user or
     * role), you might need to enforce a delay before including the new principal in a
     * key policy because the new principal might not be immediately visible to KMS.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/troubleshoot_general.html#troubleshoot_general_eventual-consistency">Changes
     * that I make are not always immediately visible</a> in the <i>Amazon Web Services
     * Identity and Access Management User Guide</i>.</p> </li> </ul> <p>A key policy
     * document can include only the following characters:</p> <ul> <li> <p>Printable
     * ASCII characters from the space character (<code>\u0020</code>) through the end
     * of the ASCII character range.</p> </li> <li> <p>Printable characters in the
     * Basic Latin and Latin-1 Supplement character set (through
     * <code>\u00FF</code>).</p> </li> <li> <p>The tab (<code>\u0009</code>), line feed
     * (<code>\u000A</code>), and carriage return (<code>\u000D</code>) special
     * characters</p> </li> </ul> <p>For information about key policies, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">Key
     * policies in KMS</a> in the <i>Key Management Service Developer Guide</i>. For
     * help writing and formatting a JSON policy document, see the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies.html">IAM
     * JSON Policy Reference</a> in the <i> <i>Identity and Access Management User
     * Guide</i> </i>.</p>
     */
    inline PutKeyPolicyRequest& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}

    /**
     * <p>The key policy to attach to the KMS key.</p> <p>The key policy must meet the
     * following criteria:</p> <ul> <li> <p>If you don't set
     * <code>BypassPolicyLockoutSafetyCheck</code> to true, the key policy must allow
     * the principal that is making the <code>PutKeyPolicy</code> request to make a
     * subsequent <code>PutKeyPolicy</code> request on the KMS key. This reduces the
     * risk that the KMS key becomes unmanageable. For more information, refer to the
     * scenario in the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default-allow-root-enable-iam">Default
     * Key Policy</a> section of the <i>Key Management Service Developer Guide</i>.</p>
     * </li> <li> <p>Each statement in the key policy must contain one or more
     * principals. The principals in the key policy must exist and be visible to KMS.
     * When you create a new Amazon Web Services principal (for example, an IAM user or
     * role), you might need to enforce a delay before including the new principal in a
     * key policy because the new principal might not be immediately visible to KMS.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/troubleshoot_general.html#troubleshoot_general_eventual-consistency">Changes
     * that I make are not always immediately visible</a> in the <i>Amazon Web Services
     * Identity and Access Management User Guide</i>.</p> </li> </ul> <p>A key policy
     * document can include only the following characters:</p> <ul> <li> <p>Printable
     * ASCII characters from the space character (<code>\u0020</code>) through the end
     * of the ASCII character range.</p> </li> <li> <p>Printable characters in the
     * Basic Latin and Latin-1 Supplement character set (through
     * <code>\u00FF</code>).</p> </li> <li> <p>The tab (<code>\u0009</code>), line feed
     * (<code>\u000A</code>), and carriage return (<code>\u000D</code>) special
     * characters</p> </li> </ul> <p>For information about key policies, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">Key
     * policies in KMS</a> in the <i>Key Management Service Developer Guide</i>. For
     * help writing and formatting a JSON policy document, see the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies.html">IAM
     * JSON Policy Reference</a> in the <i> <i>Identity and Access Management User
     * Guide</i> </i>.</p>
     */
    inline PutKeyPolicyRequest& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}

    /**
     * <p>The key policy to attach to the KMS key.</p> <p>The key policy must meet the
     * following criteria:</p> <ul> <li> <p>If you don't set
     * <code>BypassPolicyLockoutSafetyCheck</code> to true, the key policy must allow
     * the principal that is making the <code>PutKeyPolicy</code> request to make a
     * subsequent <code>PutKeyPolicy</code> request on the KMS key. This reduces the
     * risk that the KMS key becomes unmanageable. For more information, refer to the
     * scenario in the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default-allow-root-enable-iam">Default
     * Key Policy</a> section of the <i>Key Management Service Developer Guide</i>.</p>
     * </li> <li> <p>Each statement in the key policy must contain one or more
     * principals. The principals in the key policy must exist and be visible to KMS.
     * When you create a new Amazon Web Services principal (for example, an IAM user or
     * role), you might need to enforce a delay before including the new principal in a
     * key policy because the new principal might not be immediately visible to KMS.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/troubleshoot_general.html#troubleshoot_general_eventual-consistency">Changes
     * that I make are not always immediately visible</a> in the <i>Amazon Web Services
     * Identity and Access Management User Guide</i>.</p> </li> </ul> <p>A key policy
     * document can include only the following characters:</p> <ul> <li> <p>Printable
     * ASCII characters from the space character (<code>\u0020</code>) through the end
     * of the ASCII character range.</p> </li> <li> <p>Printable characters in the
     * Basic Latin and Latin-1 Supplement character set (through
     * <code>\u00FF</code>).</p> </li> <li> <p>The tab (<code>\u0009</code>), line feed
     * (<code>\u000A</code>), and carriage return (<code>\u000D</code>) special
     * characters</p> </li> </ul> <p>For information about key policies, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">Key
     * policies in KMS</a> in the <i>Key Management Service Developer Guide</i>. For
     * help writing and formatting a JSON policy document, see the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies.html">IAM
     * JSON Policy Reference</a> in the <i> <i>Identity and Access Management User
     * Guide</i> </i>.</p>
     */
    inline PutKeyPolicyRequest& WithPolicy(const char* value) { SetPolicy(value); return *this;}


    /**
     * <p>A flag to indicate whether to bypass the key policy lockout safety check.</p>
     *  <p>Setting this value to true increases the risk that the KMS key
     * becomes unmanageable. Do not set this value to true indiscriminately.</p> <p>For
     * more information, refer to the scenario in the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default-allow-root-enable-iam">Default
     * Key Policy</a> section in the <i>Key Management Service Developer Guide</i>.</p>
     *  <p>Use this parameter only when you intend to prevent the principal
     * that is making the request from making a subsequent <code>PutKeyPolicy</code>
     * request on the KMS key.</p> <p>The default value is false.</p>
     */
    inline bool GetBypassPolicyLockoutSafetyCheck() const{ return m_bypassPolicyLockoutSafetyCheck; }

    /**
     * <p>A flag to indicate whether to bypass the key policy lockout safety check.</p>
     *  <p>Setting this value to true increases the risk that the KMS key
     * becomes unmanageable. Do not set this value to true indiscriminately.</p> <p>For
     * more information, refer to the scenario in the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default-allow-root-enable-iam">Default
     * Key Policy</a> section in the <i>Key Management Service Developer Guide</i>.</p>
     *  <p>Use this parameter only when you intend to prevent the principal
     * that is making the request from making a subsequent <code>PutKeyPolicy</code>
     * request on the KMS key.</p> <p>The default value is false.</p>
     */
    inline bool BypassPolicyLockoutSafetyCheckHasBeenSet() const { return m_bypassPolicyLockoutSafetyCheckHasBeenSet; }

    /**
     * <p>A flag to indicate whether to bypass the key policy lockout safety check.</p>
     *  <p>Setting this value to true increases the risk that the KMS key
     * becomes unmanageable. Do not set this value to true indiscriminately.</p> <p>For
     * more information, refer to the scenario in the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default-allow-root-enable-iam">Default
     * Key Policy</a> section in the <i>Key Management Service Developer Guide</i>.</p>
     *  <p>Use this parameter only when you intend to prevent the principal
     * that is making the request from making a subsequent <code>PutKeyPolicy</code>
     * request on the KMS key.</p> <p>The default value is false.</p>
     */
    inline void SetBypassPolicyLockoutSafetyCheck(bool value) { m_bypassPolicyLockoutSafetyCheckHasBeenSet = true; m_bypassPolicyLockoutSafetyCheck = value; }

    /**
     * <p>A flag to indicate whether to bypass the key policy lockout safety check.</p>
     *  <p>Setting this value to true increases the risk that the KMS key
     * becomes unmanageable. Do not set this value to true indiscriminately.</p> <p>For
     * more information, refer to the scenario in the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default-allow-root-enable-iam">Default
     * Key Policy</a> section in the <i>Key Management Service Developer Guide</i>.</p>
     *  <p>Use this parameter only when you intend to prevent the principal
     * that is making the request from making a subsequent <code>PutKeyPolicy</code>
     * request on the KMS key.</p> <p>The default value is false.</p>
     */
    inline PutKeyPolicyRequest& WithBypassPolicyLockoutSafetyCheck(bool value) { SetBypassPolicyLockoutSafetyCheck(value); return *this;}

  private:

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet = false;

    Aws::String m_policyName;
    bool m_policyNameHasBeenSet = false;

    Aws::String m_policy;
    bool m_policyHasBeenSet = false;

    bool m_bypassPolicyLockoutSafetyCheck;
    bool m_bypassPolicyLockoutSafetyCheckHasBeenSet = false;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws

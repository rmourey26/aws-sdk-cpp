﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Lambda
{
namespace Model
{

  /**
   * <p>Limits that are related to concurrency and storage. All file and storage
   * sizes are in bytes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/AccountLimit">AWS
   * API Reference</a></p>
   */
  class AWS_LAMBDA_API AccountLimit
  {
  public:
    AccountLimit();
    AccountLimit(Aws::Utils::Json::JsonView jsonValue);
    AccountLimit& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The amount of storage space that you can use for all deployment packages and
     * layer archives.</p>
     */
    inline long long GetTotalCodeSize() const{ return m_totalCodeSize; }

    /**
     * <p>The amount of storage space that you can use for all deployment packages and
     * layer archives.</p>
     */
    inline bool TotalCodeSizeHasBeenSet() const { return m_totalCodeSizeHasBeenSet; }

    /**
     * <p>The amount of storage space that you can use for all deployment packages and
     * layer archives.</p>
     */
    inline void SetTotalCodeSize(long long value) { m_totalCodeSizeHasBeenSet = true; m_totalCodeSize = value; }

    /**
     * <p>The amount of storage space that you can use for all deployment packages and
     * layer archives.</p>
     */
    inline AccountLimit& WithTotalCodeSize(long long value) { SetTotalCodeSize(value); return *this;}


    /**
     * <p>The maximum size of a function's deployment package and layers when they're
     * extracted.</p>
     */
    inline long long GetCodeSizeUnzipped() const{ return m_codeSizeUnzipped; }

    /**
     * <p>The maximum size of a function's deployment package and layers when they're
     * extracted.</p>
     */
    inline bool CodeSizeUnzippedHasBeenSet() const { return m_codeSizeUnzippedHasBeenSet; }

    /**
     * <p>The maximum size of a function's deployment package and layers when they're
     * extracted.</p>
     */
    inline void SetCodeSizeUnzipped(long long value) { m_codeSizeUnzippedHasBeenSet = true; m_codeSizeUnzipped = value; }

    /**
     * <p>The maximum size of a function's deployment package and layers when they're
     * extracted.</p>
     */
    inline AccountLimit& WithCodeSizeUnzipped(long long value) { SetCodeSizeUnzipped(value); return *this;}


    /**
     * <p>The maximum size of a deployment package when it's uploaded directly to
     * Lambda. Use Amazon S3 for larger files.</p>
     */
    inline long long GetCodeSizeZipped() const{ return m_codeSizeZipped; }

    /**
     * <p>The maximum size of a deployment package when it's uploaded directly to
     * Lambda. Use Amazon S3 for larger files.</p>
     */
    inline bool CodeSizeZippedHasBeenSet() const { return m_codeSizeZippedHasBeenSet; }

    /**
     * <p>The maximum size of a deployment package when it's uploaded directly to
     * Lambda. Use Amazon S3 for larger files.</p>
     */
    inline void SetCodeSizeZipped(long long value) { m_codeSizeZippedHasBeenSet = true; m_codeSizeZipped = value; }

    /**
     * <p>The maximum size of a deployment package when it's uploaded directly to
     * Lambda. Use Amazon S3 for larger files.</p>
     */
    inline AccountLimit& WithCodeSizeZipped(long long value) { SetCodeSizeZipped(value); return *this;}


    /**
     * <p>The maximum number of simultaneous function executions.</p>
     */
    inline int GetConcurrentExecutions() const{ return m_concurrentExecutions; }

    /**
     * <p>The maximum number of simultaneous function executions.</p>
     */
    inline bool ConcurrentExecutionsHasBeenSet() const { return m_concurrentExecutionsHasBeenSet; }

    /**
     * <p>The maximum number of simultaneous function executions.</p>
     */
    inline void SetConcurrentExecutions(int value) { m_concurrentExecutionsHasBeenSet = true; m_concurrentExecutions = value; }

    /**
     * <p>The maximum number of simultaneous function executions.</p>
     */
    inline AccountLimit& WithConcurrentExecutions(int value) { SetConcurrentExecutions(value); return *this;}


    /**
     * <p>The maximum number of simultaneous function executions, minus the capacity
     * that's reserved for individual functions with <a>PutFunctionConcurrency</a>.</p>
     */
    inline int GetUnreservedConcurrentExecutions() const{ return m_unreservedConcurrentExecutions; }

    /**
     * <p>The maximum number of simultaneous function executions, minus the capacity
     * that's reserved for individual functions with <a>PutFunctionConcurrency</a>.</p>
     */
    inline bool UnreservedConcurrentExecutionsHasBeenSet() const { return m_unreservedConcurrentExecutionsHasBeenSet; }

    /**
     * <p>The maximum number of simultaneous function executions, minus the capacity
     * that's reserved for individual functions with <a>PutFunctionConcurrency</a>.</p>
     */
    inline void SetUnreservedConcurrentExecutions(int value) { m_unreservedConcurrentExecutionsHasBeenSet = true; m_unreservedConcurrentExecutions = value; }

    /**
     * <p>The maximum number of simultaneous function executions, minus the capacity
     * that's reserved for individual functions with <a>PutFunctionConcurrency</a>.</p>
     */
    inline AccountLimit& WithUnreservedConcurrentExecutions(int value) { SetUnreservedConcurrentExecutions(value); return *this;}

  private:

    long long m_totalCodeSize;
    bool m_totalCodeSizeHasBeenSet = false;

    long long m_codeSizeUnzipped;
    bool m_codeSizeUnzippedHasBeenSet = false;

    long long m_codeSizeZipped;
    bool m_codeSizeZippedHasBeenSet = false;

    int m_concurrentExecutions;
    bool m_concurrentExecutionsHasBeenSet = false;

    int m_unreservedConcurrentExecutions;
    bool m_unreservedConcurrentExecutionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws

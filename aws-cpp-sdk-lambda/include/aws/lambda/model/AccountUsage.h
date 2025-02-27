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
   * <p>The number of functions and amount of storage in use.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/AccountUsage">AWS
   * API Reference</a></p>
   */
  class AWS_LAMBDA_API AccountUsage
  {
  public:
    AccountUsage();
    AccountUsage(Aws::Utils::Json::JsonView jsonValue);
    AccountUsage& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The amount of storage space, in bytes, that's being used by deployment
     * packages and layer archives.</p>
     */
    inline long long GetTotalCodeSize() const{ return m_totalCodeSize; }

    /**
     * <p>The amount of storage space, in bytes, that's being used by deployment
     * packages and layer archives.</p>
     */
    inline bool TotalCodeSizeHasBeenSet() const { return m_totalCodeSizeHasBeenSet; }

    /**
     * <p>The amount of storage space, in bytes, that's being used by deployment
     * packages and layer archives.</p>
     */
    inline void SetTotalCodeSize(long long value) { m_totalCodeSizeHasBeenSet = true; m_totalCodeSize = value; }

    /**
     * <p>The amount of storage space, in bytes, that's being used by deployment
     * packages and layer archives.</p>
     */
    inline AccountUsage& WithTotalCodeSize(long long value) { SetTotalCodeSize(value); return *this;}


    /**
     * <p>The number of Lambda functions.</p>
     */
    inline long long GetFunctionCount() const{ return m_functionCount; }

    /**
     * <p>The number of Lambda functions.</p>
     */
    inline bool FunctionCountHasBeenSet() const { return m_functionCountHasBeenSet; }

    /**
     * <p>The number of Lambda functions.</p>
     */
    inline void SetFunctionCount(long long value) { m_functionCountHasBeenSet = true; m_functionCount = value; }

    /**
     * <p>The number of Lambda functions.</p>
     */
    inline AccountUsage& WithFunctionCount(long long value) { SetFunctionCount(value); return *this;}

  private:

    long long m_totalCodeSize;
    bool m_totalCodeSizeHasBeenSet = false;

    long long m_functionCount;
    bool m_functionCountHasBeenSet = false;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws

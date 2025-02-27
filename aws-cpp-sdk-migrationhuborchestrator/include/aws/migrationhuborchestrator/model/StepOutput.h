﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhuborchestrator/MigrationHubOrchestrator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/migrationhuborchestrator/model/DataType.h>
#include <utility>

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
namespace MigrationHubOrchestrator
{
namespace Model
{

  /**
   * <p>The output of the step.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/StepOutput">AWS
   * API Reference</a></p>
   */
  class AWS_MIGRATIONHUBORCHESTRATOR_API StepOutput
  {
  public:
    StepOutput();
    StepOutput(Aws::Utils::Json::JsonView jsonValue);
    StepOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the step.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the step.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the step.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the step.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the step.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the step.</p>
     */
    inline StepOutput& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the step.</p>
     */
    inline StepOutput& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the step.</p>
     */
    inline StepOutput& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The data type of the step output.</p>
     */
    inline const DataType& GetDataType() const{ return m_dataType; }

    /**
     * <p>The data type of the step output.</p>
     */
    inline bool DataTypeHasBeenSet() const { return m_dataTypeHasBeenSet; }

    /**
     * <p>The data type of the step output.</p>
     */
    inline void SetDataType(const DataType& value) { m_dataTypeHasBeenSet = true; m_dataType = value; }

    /**
     * <p>The data type of the step output.</p>
     */
    inline void SetDataType(DataType&& value) { m_dataTypeHasBeenSet = true; m_dataType = std::move(value); }

    /**
     * <p>The data type of the step output.</p>
     */
    inline StepOutput& WithDataType(const DataType& value) { SetDataType(value); return *this;}

    /**
     * <p>The data type of the step output.</p>
     */
    inline StepOutput& WithDataType(DataType&& value) { SetDataType(std::move(value)); return *this;}


    /**
     * <p>Determine if an output is required from a step.</p>
     */
    inline bool GetRequired() const{ return m_required; }

    /**
     * <p>Determine if an output is required from a step.</p>
     */
    inline bool RequiredHasBeenSet() const { return m_requiredHasBeenSet; }

    /**
     * <p>Determine if an output is required from a step.</p>
     */
    inline void SetRequired(bool value) { m_requiredHasBeenSet = true; m_required = value; }

    /**
     * <p>Determine if an output is required from a step.</p>
     */
    inline StepOutput& WithRequired(bool value) { SetRequired(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    DataType m_dataType;
    bool m_dataTypeHasBeenSet = false;

    bool m_required;
    bool m_requiredHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubOrchestrator
} // namespace Aws

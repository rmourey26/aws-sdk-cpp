﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace DevOpsGuru
{
namespace Model
{

  /**
   * <p> The field associated with the validation exception. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/ValidationExceptionField">AWS
   * API Reference</a></p>
   */
  class AWS_DEVOPSGURU_API ValidationExceptionField
  {
  public:
    ValidationExceptionField();
    ValidationExceptionField(Aws::Utils::Json::JsonView jsonValue);
    ValidationExceptionField& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The name of the field. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> The name of the field. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> The name of the field. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> The name of the field. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> The name of the field. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> The name of the field. </p>
     */
    inline ValidationExceptionField& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The name of the field. </p>
     */
    inline ValidationExceptionField& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The name of the field. </p>
     */
    inline ValidationExceptionField& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> The message associated with the validation exception with information to
     * help determine its cause. </p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p> The message associated with the validation exception with information to
     * help determine its cause. </p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p> The message associated with the validation exception with information to
     * help determine its cause. </p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p> The message associated with the validation exception with information to
     * help determine its cause. </p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p> The message associated with the validation exception with information to
     * help determine its cause. </p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p> The message associated with the validation exception with information to
     * help determine its cause. </p>
     */
    inline ValidationExceptionField& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p> The message associated with the validation exception with information to
     * help determine its cause. </p>
     */
    inline ValidationExceptionField& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p> The message associated with the validation exception with information to
     * help determine its cause. </p>
     */
    inline ValidationExceptionField& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws

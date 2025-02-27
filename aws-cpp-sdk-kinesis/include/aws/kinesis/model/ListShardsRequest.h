﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/kinesis/KinesisRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/kinesis/model/ShardFilter.h>
#include <utility>

namespace Aws
{
namespace Kinesis
{
namespace Model
{

  /**
   */
  class AWS_KINESIS_API ListShardsRequest : public KinesisRequest
  {
  public:
    ListShardsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListShards"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the data stream whose shards you want to list. </p> <p>You cannot
     * specify this parameter if you specify the <code>NextToken</code> parameter.</p>
     */
    inline const Aws::String& GetStreamName() const{ return m_streamName; }

    /**
     * <p>The name of the data stream whose shards you want to list. </p> <p>You cannot
     * specify this parameter if you specify the <code>NextToken</code> parameter.</p>
     */
    inline bool StreamNameHasBeenSet() const { return m_streamNameHasBeenSet; }

    /**
     * <p>The name of the data stream whose shards you want to list. </p> <p>You cannot
     * specify this parameter if you specify the <code>NextToken</code> parameter.</p>
     */
    inline void SetStreamName(const Aws::String& value) { m_streamNameHasBeenSet = true; m_streamName = value; }

    /**
     * <p>The name of the data stream whose shards you want to list. </p> <p>You cannot
     * specify this parameter if you specify the <code>NextToken</code> parameter.</p>
     */
    inline void SetStreamName(Aws::String&& value) { m_streamNameHasBeenSet = true; m_streamName = std::move(value); }

    /**
     * <p>The name of the data stream whose shards you want to list. </p> <p>You cannot
     * specify this parameter if you specify the <code>NextToken</code> parameter.</p>
     */
    inline void SetStreamName(const char* value) { m_streamNameHasBeenSet = true; m_streamName.assign(value); }

    /**
     * <p>The name of the data stream whose shards you want to list. </p> <p>You cannot
     * specify this parameter if you specify the <code>NextToken</code> parameter.</p>
     */
    inline ListShardsRequest& WithStreamName(const Aws::String& value) { SetStreamName(value); return *this;}

    /**
     * <p>The name of the data stream whose shards you want to list. </p> <p>You cannot
     * specify this parameter if you specify the <code>NextToken</code> parameter.</p>
     */
    inline ListShardsRequest& WithStreamName(Aws::String&& value) { SetStreamName(std::move(value)); return *this;}

    /**
     * <p>The name of the data stream whose shards you want to list. </p> <p>You cannot
     * specify this parameter if you specify the <code>NextToken</code> parameter.</p>
     */
    inline ListShardsRequest& WithStreamName(const char* value) { SetStreamName(value); return *this;}


    /**
     * <p>When the number of shards in the data stream is greater than the default
     * value for the <code>MaxResults</code> parameter, or if you explicitly specify a
     * value for <code>MaxResults</code> that is less than the number of shards in the
     * data stream, the response includes a pagination token named
     * <code>NextToken</code>. You can specify this <code>NextToken</code> value in a
     * subsequent call to <code>ListShards</code> to list the next set of shards.</p>
     * <p>Don't specify <code>StreamName</code> or <code>StreamCreationTimestamp</code>
     * if you specify <code>NextToken</code> because the latter unambiguously
     * identifies the stream.</p> <p>You can optionally specify a value for the
     * <code>MaxResults</code> parameter when you specify <code>NextToken</code>. If
     * you specify a <code>MaxResults</code> value that is less than the number of
     * shards that the operation returns if you don't specify <code>MaxResults</code>,
     * the response will contain a new <code>NextToken</code> value. You can use the
     * new <code>NextToken</code> value in a subsequent call to the
     * <code>ListShards</code> operation.</p>  <p>Tokens expire after 300
     * seconds. When you obtain a value for <code>NextToken</code> in the response to a
     * call to <code>ListShards</code>, you have 300 seconds to use that value. If you
     * specify an expired token in a call to <code>ListShards</code>, you get
     * <code>ExpiredNextTokenException</code>.</p> 
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>When the number of shards in the data stream is greater than the default
     * value for the <code>MaxResults</code> parameter, or if you explicitly specify a
     * value for <code>MaxResults</code> that is less than the number of shards in the
     * data stream, the response includes a pagination token named
     * <code>NextToken</code>. You can specify this <code>NextToken</code> value in a
     * subsequent call to <code>ListShards</code> to list the next set of shards.</p>
     * <p>Don't specify <code>StreamName</code> or <code>StreamCreationTimestamp</code>
     * if you specify <code>NextToken</code> because the latter unambiguously
     * identifies the stream.</p> <p>You can optionally specify a value for the
     * <code>MaxResults</code> parameter when you specify <code>NextToken</code>. If
     * you specify a <code>MaxResults</code> value that is less than the number of
     * shards that the operation returns if you don't specify <code>MaxResults</code>,
     * the response will contain a new <code>NextToken</code> value. You can use the
     * new <code>NextToken</code> value in a subsequent call to the
     * <code>ListShards</code> operation.</p>  <p>Tokens expire after 300
     * seconds. When you obtain a value for <code>NextToken</code> in the response to a
     * call to <code>ListShards</code>, you have 300 seconds to use that value. If you
     * specify an expired token in a call to <code>ListShards</code>, you get
     * <code>ExpiredNextTokenException</code>.</p> 
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>When the number of shards in the data stream is greater than the default
     * value for the <code>MaxResults</code> parameter, or if you explicitly specify a
     * value for <code>MaxResults</code> that is less than the number of shards in the
     * data stream, the response includes a pagination token named
     * <code>NextToken</code>. You can specify this <code>NextToken</code> value in a
     * subsequent call to <code>ListShards</code> to list the next set of shards.</p>
     * <p>Don't specify <code>StreamName</code> or <code>StreamCreationTimestamp</code>
     * if you specify <code>NextToken</code> because the latter unambiguously
     * identifies the stream.</p> <p>You can optionally specify a value for the
     * <code>MaxResults</code> parameter when you specify <code>NextToken</code>. If
     * you specify a <code>MaxResults</code> value that is less than the number of
     * shards that the operation returns if you don't specify <code>MaxResults</code>,
     * the response will contain a new <code>NextToken</code> value. You can use the
     * new <code>NextToken</code> value in a subsequent call to the
     * <code>ListShards</code> operation.</p>  <p>Tokens expire after 300
     * seconds. When you obtain a value for <code>NextToken</code> in the response to a
     * call to <code>ListShards</code>, you have 300 seconds to use that value. If you
     * specify an expired token in a call to <code>ListShards</code>, you get
     * <code>ExpiredNextTokenException</code>.</p> 
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>When the number of shards in the data stream is greater than the default
     * value for the <code>MaxResults</code> parameter, or if you explicitly specify a
     * value for <code>MaxResults</code> that is less than the number of shards in the
     * data stream, the response includes a pagination token named
     * <code>NextToken</code>. You can specify this <code>NextToken</code> value in a
     * subsequent call to <code>ListShards</code> to list the next set of shards.</p>
     * <p>Don't specify <code>StreamName</code> or <code>StreamCreationTimestamp</code>
     * if you specify <code>NextToken</code> because the latter unambiguously
     * identifies the stream.</p> <p>You can optionally specify a value for the
     * <code>MaxResults</code> parameter when you specify <code>NextToken</code>. If
     * you specify a <code>MaxResults</code> value that is less than the number of
     * shards that the operation returns if you don't specify <code>MaxResults</code>,
     * the response will contain a new <code>NextToken</code> value. You can use the
     * new <code>NextToken</code> value in a subsequent call to the
     * <code>ListShards</code> operation.</p>  <p>Tokens expire after 300
     * seconds. When you obtain a value for <code>NextToken</code> in the response to a
     * call to <code>ListShards</code>, you have 300 seconds to use that value. If you
     * specify an expired token in a call to <code>ListShards</code>, you get
     * <code>ExpiredNextTokenException</code>.</p> 
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>When the number of shards in the data stream is greater than the default
     * value for the <code>MaxResults</code> parameter, or if you explicitly specify a
     * value for <code>MaxResults</code> that is less than the number of shards in the
     * data stream, the response includes a pagination token named
     * <code>NextToken</code>. You can specify this <code>NextToken</code> value in a
     * subsequent call to <code>ListShards</code> to list the next set of shards.</p>
     * <p>Don't specify <code>StreamName</code> or <code>StreamCreationTimestamp</code>
     * if you specify <code>NextToken</code> because the latter unambiguously
     * identifies the stream.</p> <p>You can optionally specify a value for the
     * <code>MaxResults</code> parameter when you specify <code>NextToken</code>. If
     * you specify a <code>MaxResults</code> value that is less than the number of
     * shards that the operation returns if you don't specify <code>MaxResults</code>,
     * the response will contain a new <code>NextToken</code> value. You can use the
     * new <code>NextToken</code> value in a subsequent call to the
     * <code>ListShards</code> operation.</p>  <p>Tokens expire after 300
     * seconds. When you obtain a value for <code>NextToken</code> in the response to a
     * call to <code>ListShards</code>, you have 300 seconds to use that value. If you
     * specify an expired token in a call to <code>ListShards</code>, you get
     * <code>ExpiredNextTokenException</code>.</p> 
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>When the number of shards in the data stream is greater than the default
     * value for the <code>MaxResults</code> parameter, or if you explicitly specify a
     * value for <code>MaxResults</code> that is less than the number of shards in the
     * data stream, the response includes a pagination token named
     * <code>NextToken</code>. You can specify this <code>NextToken</code> value in a
     * subsequent call to <code>ListShards</code> to list the next set of shards.</p>
     * <p>Don't specify <code>StreamName</code> or <code>StreamCreationTimestamp</code>
     * if you specify <code>NextToken</code> because the latter unambiguously
     * identifies the stream.</p> <p>You can optionally specify a value for the
     * <code>MaxResults</code> parameter when you specify <code>NextToken</code>. If
     * you specify a <code>MaxResults</code> value that is less than the number of
     * shards that the operation returns if you don't specify <code>MaxResults</code>,
     * the response will contain a new <code>NextToken</code> value. You can use the
     * new <code>NextToken</code> value in a subsequent call to the
     * <code>ListShards</code> operation.</p>  <p>Tokens expire after 300
     * seconds. When you obtain a value for <code>NextToken</code> in the response to a
     * call to <code>ListShards</code>, you have 300 seconds to use that value. If you
     * specify an expired token in a call to <code>ListShards</code>, you get
     * <code>ExpiredNextTokenException</code>.</p> 
     */
    inline ListShardsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>When the number of shards in the data stream is greater than the default
     * value for the <code>MaxResults</code> parameter, or if you explicitly specify a
     * value for <code>MaxResults</code> that is less than the number of shards in the
     * data stream, the response includes a pagination token named
     * <code>NextToken</code>. You can specify this <code>NextToken</code> value in a
     * subsequent call to <code>ListShards</code> to list the next set of shards.</p>
     * <p>Don't specify <code>StreamName</code> or <code>StreamCreationTimestamp</code>
     * if you specify <code>NextToken</code> because the latter unambiguously
     * identifies the stream.</p> <p>You can optionally specify a value for the
     * <code>MaxResults</code> parameter when you specify <code>NextToken</code>. If
     * you specify a <code>MaxResults</code> value that is less than the number of
     * shards that the operation returns if you don't specify <code>MaxResults</code>,
     * the response will contain a new <code>NextToken</code> value. You can use the
     * new <code>NextToken</code> value in a subsequent call to the
     * <code>ListShards</code> operation.</p>  <p>Tokens expire after 300
     * seconds. When you obtain a value for <code>NextToken</code> in the response to a
     * call to <code>ListShards</code>, you have 300 seconds to use that value. If you
     * specify an expired token in a call to <code>ListShards</code>, you get
     * <code>ExpiredNextTokenException</code>.</p> 
     */
    inline ListShardsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>When the number of shards in the data stream is greater than the default
     * value for the <code>MaxResults</code> parameter, or if you explicitly specify a
     * value for <code>MaxResults</code> that is less than the number of shards in the
     * data stream, the response includes a pagination token named
     * <code>NextToken</code>. You can specify this <code>NextToken</code> value in a
     * subsequent call to <code>ListShards</code> to list the next set of shards.</p>
     * <p>Don't specify <code>StreamName</code> or <code>StreamCreationTimestamp</code>
     * if you specify <code>NextToken</code> because the latter unambiguously
     * identifies the stream.</p> <p>You can optionally specify a value for the
     * <code>MaxResults</code> parameter when you specify <code>NextToken</code>. If
     * you specify a <code>MaxResults</code> value that is less than the number of
     * shards that the operation returns if you don't specify <code>MaxResults</code>,
     * the response will contain a new <code>NextToken</code> value. You can use the
     * new <code>NextToken</code> value in a subsequent call to the
     * <code>ListShards</code> operation.</p>  <p>Tokens expire after 300
     * seconds. When you obtain a value for <code>NextToken</code> in the response to a
     * call to <code>ListShards</code>, you have 300 seconds to use that value. If you
     * specify an expired token in a call to <code>ListShards</code>, you get
     * <code>ExpiredNextTokenException</code>.</p> 
     */
    inline ListShardsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Specify this parameter to indicate that you want to list the shards starting
     * with the shard whose ID immediately follows
     * <code>ExclusiveStartShardId</code>.</p> <p>If you don't specify this parameter,
     * the default behavior is for <code>ListShards</code> to list the shards starting
     * with the first one in the stream.</p> <p>You cannot specify this parameter if
     * you specify <code>NextToken</code>.</p>
     */
    inline const Aws::String& GetExclusiveStartShardId() const{ return m_exclusiveStartShardId; }

    /**
     * <p>Specify this parameter to indicate that you want to list the shards starting
     * with the shard whose ID immediately follows
     * <code>ExclusiveStartShardId</code>.</p> <p>If you don't specify this parameter,
     * the default behavior is for <code>ListShards</code> to list the shards starting
     * with the first one in the stream.</p> <p>You cannot specify this parameter if
     * you specify <code>NextToken</code>.</p>
     */
    inline bool ExclusiveStartShardIdHasBeenSet() const { return m_exclusiveStartShardIdHasBeenSet; }

    /**
     * <p>Specify this parameter to indicate that you want to list the shards starting
     * with the shard whose ID immediately follows
     * <code>ExclusiveStartShardId</code>.</p> <p>If you don't specify this parameter,
     * the default behavior is for <code>ListShards</code> to list the shards starting
     * with the first one in the stream.</p> <p>You cannot specify this parameter if
     * you specify <code>NextToken</code>.</p>
     */
    inline void SetExclusiveStartShardId(const Aws::String& value) { m_exclusiveStartShardIdHasBeenSet = true; m_exclusiveStartShardId = value; }

    /**
     * <p>Specify this parameter to indicate that you want to list the shards starting
     * with the shard whose ID immediately follows
     * <code>ExclusiveStartShardId</code>.</p> <p>If you don't specify this parameter,
     * the default behavior is for <code>ListShards</code> to list the shards starting
     * with the first one in the stream.</p> <p>You cannot specify this parameter if
     * you specify <code>NextToken</code>.</p>
     */
    inline void SetExclusiveStartShardId(Aws::String&& value) { m_exclusiveStartShardIdHasBeenSet = true; m_exclusiveStartShardId = std::move(value); }

    /**
     * <p>Specify this parameter to indicate that you want to list the shards starting
     * with the shard whose ID immediately follows
     * <code>ExclusiveStartShardId</code>.</p> <p>If you don't specify this parameter,
     * the default behavior is for <code>ListShards</code> to list the shards starting
     * with the first one in the stream.</p> <p>You cannot specify this parameter if
     * you specify <code>NextToken</code>.</p>
     */
    inline void SetExclusiveStartShardId(const char* value) { m_exclusiveStartShardIdHasBeenSet = true; m_exclusiveStartShardId.assign(value); }

    /**
     * <p>Specify this parameter to indicate that you want to list the shards starting
     * with the shard whose ID immediately follows
     * <code>ExclusiveStartShardId</code>.</p> <p>If you don't specify this parameter,
     * the default behavior is for <code>ListShards</code> to list the shards starting
     * with the first one in the stream.</p> <p>You cannot specify this parameter if
     * you specify <code>NextToken</code>.</p>
     */
    inline ListShardsRequest& WithExclusiveStartShardId(const Aws::String& value) { SetExclusiveStartShardId(value); return *this;}

    /**
     * <p>Specify this parameter to indicate that you want to list the shards starting
     * with the shard whose ID immediately follows
     * <code>ExclusiveStartShardId</code>.</p> <p>If you don't specify this parameter,
     * the default behavior is for <code>ListShards</code> to list the shards starting
     * with the first one in the stream.</p> <p>You cannot specify this parameter if
     * you specify <code>NextToken</code>.</p>
     */
    inline ListShardsRequest& WithExclusiveStartShardId(Aws::String&& value) { SetExclusiveStartShardId(std::move(value)); return *this;}

    /**
     * <p>Specify this parameter to indicate that you want to list the shards starting
     * with the shard whose ID immediately follows
     * <code>ExclusiveStartShardId</code>.</p> <p>If you don't specify this parameter,
     * the default behavior is for <code>ListShards</code> to list the shards starting
     * with the first one in the stream.</p> <p>You cannot specify this parameter if
     * you specify <code>NextToken</code>.</p>
     */
    inline ListShardsRequest& WithExclusiveStartShardId(const char* value) { SetExclusiveStartShardId(value); return *this;}


    /**
     * <p>The maximum number of shards to return in a single call to
     * <code>ListShards</code>. The maximum number of shards to return in a single
     * call. The default value is 1000. If you specify a value greater than 1000, at
     * most 1000 results are returned. </p> <p>When the number of shards to be listed
     * is greater than the value of <code>MaxResults</code>, the response contains a
     * <code>NextToken</code> value that you can use in a subsequent call to
     * <code>ListShards</code> to list the next set of shards.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of shards to return in a single call to
     * <code>ListShards</code>. The maximum number of shards to return in a single
     * call. The default value is 1000. If you specify a value greater than 1000, at
     * most 1000 results are returned. </p> <p>When the number of shards to be listed
     * is greater than the value of <code>MaxResults</code>, the response contains a
     * <code>NextToken</code> value that you can use in a subsequent call to
     * <code>ListShards</code> to list the next set of shards.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of shards to return in a single call to
     * <code>ListShards</code>. The maximum number of shards to return in a single
     * call. The default value is 1000. If you specify a value greater than 1000, at
     * most 1000 results are returned. </p> <p>When the number of shards to be listed
     * is greater than the value of <code>MaxResults</code>, the response contains a
     * <code>NextToken</code> value that you can use in a subsequent call to
     * <code>ListShards</code> to list the next set of shards.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of shards to return in a single call to
     * <code>ListShards</code>. The maximum number of shards to return in a single
     * call. The default value is 1000. If you specify a value greater than 1000, at
     * most 1000 results are returned. </p> <p>When the number of shards to be listed
     * is greater than the value of <code>MaxResults</code>, the response contains a
     * <code>NextToken</code> value that you can use in a subsequent call to
     * <code>ListShards</code> to list the next set of shards.</p>
     */
    inline ListShardsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Specify this input parameter to distinguish data streams that have the same
     * name. For example, if you create a data stream and then delete it, and you later
     * create another data stream with the same name, you can use this input parameter
     * to specify which of the two streams you want to list the shards for.</p> <p>You
     * cannot specify this parameter if you specify the <code>NextToken</code>
     * parameter.</p>
     */
    inline const Aws::Utils::DateTime& GetStreamCreationTimestamp() const{ return m_streamCreationTimestamp; }

    /**
     * <p>Specify this input parameter to distinguish data streams that have the same
     * name. For example, if you create a data stream and then delete it, and you later
     * create another data stream with the same name, you can use this input parameter
     * to specify which of the two streams you want to list the shards for.</p> <p>You
     * cannot specify this parameter if you specify the <code>NextToken</code>
     * parameter.</p>
     */
    inline bool StreamCreationTimestampHasBeenSet() const { return m_streamCreationTimestampHasBeenSet; }

    /**
     * <p>Specify this input parameter to distinguish data streams that have the same
     * name. For example, if you create a data stream and then delete it, and you later
     * create another data stream with the same name, you can use this input parameter
     * to specify which of the two streams you want to list the shards for.</p> <p>You
     * cannot specify this parameter if you specify the <code>NextToken</code>
     * parameter.</p>
     */
    inline void SetStreamCreationTimestamp(const Aws::Utils::DateTime& value) { m_streamCreationTimestampHasBeenSet = true; m_streamCreationTimestamp = value; }

    /**
     * <p>Specify this input parameter to distinguish data streams that have the same
     * name. For example, if you create a data stream and then delete it, and you later
     * create another data stream with the same name, you can use this input parameter
     * to specify which of the two streams you want to list the shards for.</p> <p>You
     * cannot specify this parameter if you specify the <code>NextToken</code>
     * parameter.</p>
     */
    inline void SetStreamCreationTimestamp(Aws::Utils::DateTime&& value) { m_streamCreationTimestampHasBeenSet = true; m_streamCreationTimestamp = std::move(value); }

    /**
     * <p>Specify this input parameter to distinguish data streams that have the same
     * name. For example, if you create a data stream and then delete it, and you later
     * create another data stream with the same name, you can use this input parameter
     * to specify which of the two streams you want to list the shards for.</p> <p>You
     * cannot specify this parameter if you specify the <code>NextToken</code>
     * parameter.</p>
     */
    inline ListShardsRequest& WithStreamCreationTimestamp(const Aws::Utils::DateTime& value) { SetStreamCreationTimestamp(value); return *this;}

    /**
     * <p>Specify this input parameter to distinguish data streams that have the same
     * name. For example, if you create a data stream and then delete it, and you later
     * create another data stream with the same name, you can use this input parameter
     * to specify which of the two streams you want to list the shards for.</p> <p>You
     * cannot specify this parameter if you specify the <code>NextToken</code>
     * parameter.</p>
     */
    inline ListShardsRequest& WithStreamCreationTimestamp(Aws::Utils::DateTime&& value) { SetStreamCreationTimestamp(std::move(value)); return *this;}


    /**
     * <p>Enables you to filter out the response of the <code>ListShards</code> API.
     * You can only specify one filter at a time. </p> <p>If you use the
     * <code>ShardFilter</code> parameter when invoking the ListShards API, the
     * <code>Type</code> is the required property and must be specified. If you specify
     * the <code>AT_TRIM_HORIZON</code>, <code>FROM_TRIM_HORIZON</code>, or
     * <code>AT_LATEST</code> types, you do not need to specify either the
     * <code>ShardId</code> or the <code>Timestamp</code> optional properties. </p>
     * <p>If you specify the <code>AFTER_SHARD_ID</code> type, you must also provide
     * the value for the optional <code>ShardId</code> property. The
     * <code>ShardId</code> property is identical in fuctionality to the
     * <code>ExclusiveStartShardId</code> parameter of the <code>ListShards</code> API.
     * When <code>ShardId</code> property is specified, the response includes the
     * shards starting with the shard whose ID immediately follows the
     * <code>ShardId</code> that you provided. </p> <p>If you specify the
     * <code>AT_TIMESTAMP</code> or <code>FROM_TIMESTAMP_ID</code> type, you must also
     * provide the value for the optional <code>Timestamp</code> property. If you
     * specify the AT_TIMESTAMP type, then all shards that were open at the provided
     * timestamp are returned. If you specify the FROM_TIMESTAMP type, then all shards
     * starting from the provided timestamp to TIP are returned. </p>
     */
    inline const ShardFilter& GetShardFilter() const{ return m_shardFilter; }

    /**
     * <p>Enables you to filter out the response of the <code>ListShards</code> API.
     * You can only specify one filter at a time. </p> <p>If you use the
     * <code>ShardFilter</code> parameter when invoking the ListShards API, the
     * <code>Type</code> is the required property and must be specified. If you specify
     * the <code>AT_TRIM_HORIZON</code>, <code>FROM_TRIM_HORIZON</code>, or
     * <code>AT_LATEST</code> types, you do not need to specify either the
     * <code>ShardId</code> or the <code>Timestamp</code> optional properties. </p>
     * <p>If you specify the <code>AFTER_SHARD_ID</code> type, you must also provide
     * the value for the optional <code>ShardId</code> property. The
     * <code>ShardId</code> property is identical in fuctionality to the
     * <code>ExclusiveStartShardId</code> parameter of the <code>ListShards</code> API.
     * When <code>ShardId</code> property is specified, the response includes the
     * shards starting with the shard whose ID immediately follows the
     * <code>ShardId</code> that you provided. </p> <p>If you specify the
     * <code>AT_TIMESTAMP</code> or <code>FROM_TIMESTAMP_ID</code> type, you must also
     * provide the value for the optional <code>Timestamp</code> property. If you
     * specify the AT_TIMESTAMP type, then all shards that were open at the provided
     * timestamp are returned. If you specify the FROM_TIMESTAMP type, then all shards
     * starting from the provided timestamp to TIP are returned. </p>
     */
    inline bool ShardFilterHasBeenSet() const { return m_shardFilterHasBeenSet; }

    /**
     * <p>Enables you to filter out the response of the <code>ListShards</code> API.
     * You can only specify one filter at a time. </p> <p>If you use the
     * <code>ShardFilter</code> parameter when invoking the ListShards API, the
     * <code>Type</code> is the required property and must be specified. If you specify
     * the <code>AT_TRIM_HORIZON</code>, <code>FROM_TRIM_HORIZON</code>, or
     * <code>AT_LATEST</code> types, you do not need to specify either the
     * <code>ShardId</code> or the <code>Timestamp</code> optional properties. </p>
     * <p>If you specify the <code>AFTER_SHARD_ID</code> type, you must also provide
     * the value for the optional <code>ShardId</code> property. The
     * <code>ShardId</code> property is identical in fuctionality to the
     * <code>ExclusiveStartShardId</code> parameter of the <code>ListShards</code> API.
     * When <code>ShardId</code> property is specified, the response includes the
     * shards starting with the shard whose ID immediately follows the
     * <code>ShardId</code> that you provided. </p> <p>If you specify the
     * <code>AT_TIMESTAMP</code> or <code>FROM_TIMESTAMP_ID</code> type, you must also
     * provide the value for the optional <code>Timestamp</code> property. If you
     * specify the AT_TIMESTAMP type, then all shards that were open at the provided
     * timestamp are returned. If you specify the FROM_TIMESTAMP type, then all shards
     * starting from the provided timestamp to TIP are returned. </p>
     */
    inline void SetShardFilter(const ShardFilter& value) { m_shardFilterHasBeenSet = true; m_shardFilter = value; }

    /**
     * <p>Enables you to filter out the response of the <code>ListShards</code> API.
     * You can only specify one filter at a time. </p> <p>If you use the
     * <code>ShardFilter</code> parameter when invoking the ListShards API, the
     * <code>Type</code> is the required property and must be specified. If you specify
     * the <code>AT_TRIM_HORIZON</code>, <code>FROM_TRIM_HORIZON</code>, or
     * <code>AT_LATEST</code> types, you do not need to specify either the
     * <code>ShardId</code> or the <code>Timestamp</code> optional properties. </p>
     * <p>If you specify the <code>AFTER_SHARD_ID</code> type, you must also provide
     * the value for the optional <code>ShardId</code> property. The
     * <code>ShardId</code> property is identical in fuctionality to the
     * <code>ExclusiveStartShardId</code> parameter of the <code>ListShards</code> API.
     * When <code>ShardId</code> property is specified, the response includes the
     * shards starting with the shard whose ID immediately follows the
     * <code>ShardId</code> that you provided. </p> <p>If you specify the
     * <code>AT_TIMESTAMP</code> or <code>FROM_TIMESTAMP_ID</code> type, you must also
     * provide the value for the optional <code>Timestamp</code> property. If you
     * specify the AT_TIMESTAMP type, then all shards that were open at the provided
     * timestamp are returned. If you specify the FROM_TIMESTAMP type, then all shards
     * starting from the provided timestamp to TIP are returned. </p>
     */
    inline void SetShardFilter(ShardFilter&& value) { m_shardFilterHasBeenSet = true; m_shardFilter = std::move(value); }

    /**
     * <p>Enables you to filter out the response of the <code>ListShards</code> API.
     * You can only specify one filter at a time. </p> <p>If you use the
     * <code>ShardFilter</code> parameter when invoking the ListShards API, the
     * <code>Type</code> is the required property and must be specified. If you specify
     * the <code>AT_TRIM_HORIZON</code>, <code>FROM_TRIM_HORIZON</code>, or
     * <code>AT_LATEST</code> types, you do not need to specify either the
     * <code>ShardId</code> or the <code>Timestamp</code> optional properties. </p>
     * <p>If you specify the <code>AFTER_SHARD_ID</code> type, you must also provide
     * the value for the optional <code>ShardId</code> property. The
     * <code>ShardId</code> property is identical in fuctionality to the
     * <code>ExclusiveStartShardId</code> parameter of the <code>ListShards</code> API.
     * When <code>ShardId</code> property is specified, the response includes the
     * shards starting with the shard whose ID immediately follows the
     * <code>ShardId</code> that you provided. </p> <p>If you specify the
     * <code>AT_TIMESTAMP</code> or <code>FROM_TIMESTAMP_ID</code> type, you must also
     * provide the value for the optional <code>Timestamp</code> property. If you
     * specify the AT_TIMESTAMP type, then all shards that were open at the provided
     * timestamp are returned. If you specify the FROM_TIMESTAMP type, then all shards
     * starting from the provided timestamp to TIP are returned. </p>
     */
    inline ListShardsRequest& WithShardFilter(const ShardFilter& value) { SetShardFilter(value); return *this;}

    /**
     * <p>Enables you to filter out the response of the <code>ListShards</code> API.
     * You can only specify one filter at a time. </p> <p>If you use the
     * <code>ShardFilter</code> parameter when invoking the ListShards API, the
     * <code>Type</code> is the required property and must be specified. If you specify
     * the <code>AT_TRIM_HORIZON</code>, <code>FROM_TRIM_HORIZON</code>, or
     * <code>AT_LATEST</code> types, you do not need to specify either the
     * <code>ShardId</code> or the <code>Timestamp</code> optional properties. </p>
     * <p>If you specify the <code>AFTER_SHARD_ID</code> type, you must also provide
     * the value for the optional <code>ShardId</code> property. The
     * <code>ShardId</code> property is identical in fuctionality to the
     * <code>ExclusiveStartShardId</code> parameter of the <code>ListShards</code> API.
     * When <code>ShardId</code> property is specified, the response includes the
     * shards starting with the shard whose ID immediately follows the
     * <code>ShardId</code> that you provided. </p> <p>If you specify the
     * <code>AT_TIMESTAMP</code> or <code>FROM_TIMESTAMP_ID</code> type, you must also
     * provide the value for the optional <code>Timestamp</code> property. If you
     * specify the AT_TIMESTAMP type, then all shards that were open at the provided
     * timestamp are returned. If you specify the FROM_TIMESTAMP type, then all shards
     * starting from the provided timestamp to TIP are returned. </p>
     */
    inline ListShardsRequest& WithShardFilter(ShardFilter&& value) { SetShardFilter(std::move(value)); return *this;}

  private:

    Aws::String m_streamName;
    bool m_streamNameHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_exclusiveStartShardId;
    bool m_exclusiveStartShardIdHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::Utils::DateTime m_streamCreationTimestamp;
    bool m_streamCreationTimestampHasBeenSet = false;

    ShardFilter m_shardFilter;
    bool m_shardFilterHasBeenSet = false;
  };

} // namespace Model
} // namespace Kinesis
} // namespace Aws

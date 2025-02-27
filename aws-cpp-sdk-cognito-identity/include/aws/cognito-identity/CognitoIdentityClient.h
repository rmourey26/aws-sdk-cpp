﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-identity/CognitoIdentity_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/cognito-identity/CognitoIdentityServiceClientModel.h>

namespace Aws
{
namespace CognitoIdentity
{
  /**
   * <fullname>Amazon Cognito Federated Identities</fullname> <p>Amazon Cognito
   * Federated Identities is a web service that delivers scoped temporary credentials
   * to mobile devices and other untrusted environments. It uniquely identifies a
   * device and supplies the user with a consistent identity over the lifetime of an
   * application.</p> <p>Using Amazon Cognito Federated Identities, you can enable
   * authentication with one or more third-party identity providers (Facebook,
   * Google, or Login with Amazon) or an Amazon Cognito user pool, and you can also
   * choose to support unauthenticated access from your app. Cognito delivers a
   * unique identifier for each user and acts as an OpenID token provider trusted by
   * AWS Security Token Service (STS) to access temporary, limited-privilege AWS
   * credentials.</p> <p>For a description of the authentication flow from the Amazon
   * Cognito Developer Guide see <a
   * href="https://docs.aws.amazon.com/cognito/latest/developerguide/authentication-flow.html">Authentication
   * Flow</a>.</p> <p>For more information see <a
   * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-identity.html">Amazon
   * Cognito Federated Identities</a>.</p>
   */
  class AWS_COGNITOIDENTITY_API CognitoIdentityClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CognitoIdentityClient(const Aws::CognitoIdentity::CognitoIdentityClientConfiguration& clientConfiguration = Aws::CognitoIdentity::CognitoIdentityClientConfiguration(),
                              std::shared_ptr<CognitoIdentityEndpointProviderBase> endpointProvider = Aws::MakeShared<CognitoIdentityEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CognitoIdentityClient(const Aws::Auth::AWSCredentials& credentials,
                              std::shared_ptr<CognitoIdentityEndpointProviderBase> endpointProvider = Aws::MakeShared<CognitoIdentityEndpointProvider>(ALLOCATION_TAG),
                              const Aws::CognitoIdentity::CognitoIdentityClientConfiguration& clientConfiguration = Aws::CognitoIdentity::CognitoIdentityClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CognitoIdentityClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                              std::shared_ptr<CognitoIdentityEndpointProviderBase> endpointProvider = Aws::MakeShared<CognitoIdentityEndpointProvider>(ALLOCATION_TAG),
                              const Aws::CognitoIdentity::CognitoIdentityClientConfiguration& clientConfiguration = Aws::CognitoIdentity::CognitoIdentityClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CognitoIdentityClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CognitoIdentityClient(const Aws::Auth::AWSCredentials& credentials,
                              const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CognitoIdentityClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                              const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~CognitoIdentityClient();


        /**
         * <p>Creates a new identity pool. The identity pool is a store of user identity
         * information that is specific to your AWS account. The keys for
         * <code>SupportedLoginProviders</code> are as follows:</p> <ul> <li> <p>Facebook:
         * <code>graph.facebook.com</code> </p> </li> <li> <p>Google:
         * <code>accounts.google.com</code> </p> </li> <li> <p>Amazon:
         * <code>www.amazon.com</code> </p> </li> <li> <p>Twitter:
         * <code>api.twitter.com</code> </p> </li> <li> <p>Digits:
         * <code>www.digits.com</code> </p> </li> </ul> <p>You must use AWS Developer
         * credentials to call this API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/CreateIdentityPool">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateIdentityPoolOutcome CreateIdentityPool(const Model::CreateIdentityPoolRequest& request) const;

        /**
         * A Callable wrapper for CreateIdentityPool that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateIdentityPoolOutcomeCallable CreateIdentityPoolCallable(const Model::CreateIdentityPoolRequest& request) const;

        /**
         * An Async wrapper for CreateIdentityPool that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateIdentityPoolAsync(const Model::CreateIdentityPoolRequest& request, const CreateIdentityPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes identities from an identity pool. You can specify a list of 1-60
         * identities that you want to delete.</p> <p>You must use AWS Developer
         * credentials to call this API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/DeleteIdentities">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteIdentitiesOutcome DeleteIdentities(const Model::DeleteIdentitiesRequest& request) const;

        /**
         * A Callable wrapper for DeleteIdentities that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteIdentitiesOutcomeCallable DeleteIdentitiesCallable(const Model::DeleteIdentitiesRequest& request) const;

        /**
         * An Async wrapper for DeleteIdentities that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteIdentitiesAsync(const Model::DeleteIdentitiesRequest& request, const DeleteIdentitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an identity pool. Once a pool is deleted, users will not be able to
         * authenticate with the pool.</p> <p>You must use AWS Developer credentials to
         * call this API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/DeleteIdentityPool">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteIdentityPoolOutcome DeleteIdentityPool(const Model::DeleteIdentityPoolRequest& request) const;

        /**
         * A Callable wrapper for DeleteIdentityPool that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteIdentityPoolOutcomeCallable DeleteIdentityPoolCallable(const Model::DeleteIdentityPoolRequest& request) const;

        /**
         * An Async wrapper for DeleteIdentityPool that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteIdentityPoolAsync(const Model::DeleteIdentityPoolRequest& request, const DeleteIdentityPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns metadata related to the given identity, including when the identity
         * was created and any associated linked logins.</p> <p>You must use AWS Developer
         * credentials to call this API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/DescribeIdentity">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeIdentityOutcome DescribeIdentity(const Model::DescribeIdentityRequest& request) const;

        /**
         * A Callable wrapper for DescribeIdentity that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeIdentityOutcomeCallable DescribeIdentityCallable(const Model::DescribeIdentityRequest& request) const;

        /**
         * An Async wrapper for DescribeIdentity that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeIdentityAsync(const Model::DescribeIdentityRequest& request, const DescribeIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets details about a particular identity pool, including the pool name, ID
         * description, creation date, and current number of users.</p> <p>You must use AWS
         * Developer credentials to call this API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/DescribeIdentityPool">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeIdentityPoolOutcome DescribeIdentityPool(const Model::DescribeIdentityPoolRequest& request) const;

        /**
         * A Callable wrapper for DescribeIdentityPool that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeIdentityPoolOutcomeCallable DescribeIdentityPoolCallable(const Model::DescribeIdentityPoolRequest& request) const;

        /**
         * An Async wrapper for DescribeIdentityPool that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeIdentityPoolAsync(const Model::DescribeIdentityPoolRequest& request, const DescribeIdentityPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns credentials for the provided identity ID. Any provided logins will be
         * validated against supported login providers. If the token is for
         * cognito-identity.amazonaws.com, it will be passed through to AWS Security Token
         * Service with the appropriate role for the token.</p> <p>This is a public API.
         * You do not need any credentials to call this API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/GetCredentialsForIdentity">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCredentialsForIdentityOutcome GetCredentialsForIdentity(const Model::GetCredentialsForIdentityRequest& request) const;

        /**
         * A Callable wrapper for GetCredentialsForIdentity that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCredentialsForIdentityOutcomeCallable GetCredentialsForIdentityCallable(const Model::GetCredentialsForIdentityRequest& request) const;

        /**
         * An Async wrapper for GetCredentialsForIdentity that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCredentialsForIdentityAsync(const Model::GetCredentialsForIdentityRequest& request, const GetCredentialsForIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Generates (or retrieves) a Cognito ID. Supplying multiple logins will create
         * an implicit linked account.</p> <p>This is a public API. You do not need any
         * credentials to call this API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/GetId">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIdOutcome GetId(const Model::GetIdRequest& request) const;

        /**
         * A Callable wrapper for GetId that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetIdOutcomeCallable GetIdCallable(const Model::GetIdRequest& request) const;

        /**
         * An Async wrapper for GetId that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetIdAsync(const Model::GetIdRequest& request, const GetIdResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the roles for an identity pool.</p> <p>You must use AWS Developer
         * credentials to call this API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/GetIdentityPoolRoles">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIdentityPoolRolesOutcome GetIdentityPoolRoles(const Model::GetIdentityPoolRolesRequest& request) const;

        /**
         * A Callable wrapper for GetIdentityPoolRoles that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetIdentityPoolRolesOutcomeCallable GetIdentityPoolRolesCallable(const Model::GetIdentityPoolRolesRequest& request) const;

        /**
         * An Async wrapper for GetIdentityPoolRoles that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetIdentityPoolRolesAsync(const Model::GetIdentityPoolRolesRequest& request, const GetIdentityPoolRolesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets an OpenID token, using a known Cognito ID. This known Cognito ID is
         * returned by <a>GetId</a>. You can optionally add additional logins for the
         * identity. Supplying multiple logins creates an implicit link.</p> <p>The OpenID
         * token is valid for 10 minutes.</p> <p>This is a public API. You do not need any
         * credentials to call this API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/GetOpenIdToken">AWS
         * API Reference</a></p>
         */
        virtual Model::GetOpenIdTokenOutcome GetOpenIdToken(const Model::GetOpenIdTokenRequest& request) const;

        /**
         * A Callable wrapper for GetOpenIdToken that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetOpenIdTokenOutcomeCallable GetOpenIdTokenCallable(const Model::GetOpenIdTokenRequest& request) const;

        /**
         * An Async wrapper for GetOpenIdToken that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetOpenIdTokenAsync(const Model::GetOpenIdTokenRequest& request, const GetOpenIdTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Registers (or retrieves) a Cognito <code>IdentityId</code> and an OpenID
         * Connect token for a user authenticated by your backend authentication process.
         * Supplying multiple logins will create an implicit linked account. You can only
         * specify one developer provider as part of the <code>Logins</code> map, which is
         * linked to the identity pool. The developer provider is the "domain" by which
         * Cognito will refer to your users.</p> <p>You can use
         * <code>GetOpenIdTokenForDeveloperIdentity</code> to create a new identity and to
         * link new logins (that is, user credentials issued by a public provider or
         * developer provider) to an existing identity. When you want to create a new
         * identity, the <code>IdentityId</code> should be null. When you want to associate
         * a new login with an existing authenticated/unauthenticated identity, you can do
         * so by providing the existing <code>IdentityId</code>. This API will create the
         * identity in the specified <code>IdentityPoolId</code>.</p> <p>You must use AWS
         * Developer credentials to call this API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/GetOpenIdTokenForDeveloperIdentity">AWS
         * API Reference</a></p>
         */
        virtual Model::GetOpenIdTokenForDeveloperIdentityOutcome GetOpenIdTokenForDeveloperIdentity(const Model::GetOpenIdTokenForDeveloperIdentityRequest& request) const;

        /**
         * A Callable wrapper for GetOpenIdTokenForDeveloperIdentity that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetOpenIdTokenForDeveloperIdentityOutcomeCallable GetOpenIdTokenForDeveloperIdentityCallable(const Model::GetOpenIdTokenForDeveloperIdentityRequest& request) const;

        /**
         * An Async wrapper for GetOpenIdTokenForDeveloperIdentity that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetOpenIdTokenForDeveloperIdentityAsync(const Model::GetOpenIdTokenForDeveloperIdentityRequest& request, const GetOpenIdTokenForDeveloperIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Use <code>GetPrincipalTagAttributeMap</code> to list all mappings between
         * <code>PrincipalTags</code> and user attributes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/GetPrincipalTagAttributeMap">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPrincipalTagAttributeMapOutcome GetPrincipalTagAttributeMap(const Model::GetPrincipalTagAttributeMapRequest& request) const;

        /**
         * A Callable wrapper for GetPrincipalTagAttributeMap that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPrincipalTagAttributeMapOutcomeCallable GetPrincipalTagAttributeMapCallable(const Model::GetPrincipalTagAttributeMapRequest& request) const;

        /**
         * An Async wrapper for GetPrincipalTagAttributeMap that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPrincipalTagAttributeMapAsync(const Model::GetPrincipalTagAttributeMapRequest& request, const GetPrincipalTagAttributeMapResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the identities in an identity pool.</p> <p>You must use AWS Developer
         * credentials to call this API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/ListIdentities">AWS
         * API Reference</a></p>
         */
        virtual Model::ListIdentitiesOutcome ListIdentities(const Model::ListIdentitiesRequest& request) const;

        /**
         * A Callable wrapper for ListIdentities that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListIdentitiesOutcomeCallable ListIdentitiesCallable(const Model::ListIdentitiesRequest& request) const;

        /**
         * An Async wrapper for ListIdentities that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListIdentitiesAsync(const Model::ListIdentitiesRequest& request, const ListIdentitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all of the Cognito identity pools registered for your account.</p>
         * <p>You must use AWS Developer credentials to call this API.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/ListIdentityPools">AWS
         * API Reference</a></p>
         */
        virtual Model::ListIdentityPoolsOutcome ListIdentityPools(const Model::ListIdentityPoolsRequest& request) const;

        /**
         * A Callable wrapper for ListIdentityPools that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListIdentityPoolsOutcomeCallable ListIdentityPoolsCallable(const Model::ListIdentityPoolsRequest& request) const;

        /**
         * An Async wrapper for ListIdentityPools that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListIdentityPoolsAsync(const Model::ListIdentityPoolsRequest& request, const ListIdentityPoolsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the tags that are assigned to an Amazon Cognito identity pool.</p> <p>A
         * tag is a label that you can apply to identity pools to categorize and manage
         * them in different ways, such as by purpose, owner, environment, or other
         * criteria.</p> <p>You can use this action up to 10 times per second, per
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the <code>IdentityID</code> associated with a
         * <code>DeveloperUserIdentifier</code> or the list of
         * <code>DeveloperUserIdentifier</code> values associated with an
         * <code>IdentityId</code> for an existing identity. Either <code>IdentityID</code>
         * or <code>DeveloperUserIdentifier</code> must not be null. If you supply only one
         * of these values, the other value will be searched in the database and returned
         * as a part of the response. If you supply both,
         * <code>DeveloperUserIdentifier</code> will be matched against
         * <code>IdentityID</code>. If the values are verified against the database, the
         * response returns both values and is the same as the request. Otherwise a
         * <code>ResourceConflictException</code> is thrown.</p> <p>
         * <code>LookupDeveloperIdentity</code> is intended for low-throughput control
         * plane operations: for example, to enable customer service to locate an identity
         * ID by username. If you are using it for higher-volume operations such as user
         * authentication, your requests are likely to be throttled.
         * <a>GetOpenIdTokenForDeveloperIdentity</a> is a better option for higher-volume
         * operations for user authentication.</p> <p>You must use AWS Developer
         * credentials to call this API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/LookupDeveloperIdentity">AWS
         * API Reference</a></p>
         */
        virtual Model::LookupDeveloperIdentityOutcome LookupDeveloperIdentity(const Model::LookupDeveloperIdentityRequest& request) const;

        /**
         * A Callable wrapper for LookupDeveloperIdentity that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::LookupDeveloperIdentityOutcomeCallable LookupDeveloperIdentityCallable(const Model::LookupDeveloperIdentityRequest& request) const;

        /**
         * An Async wrapper for LookupDeveloperIdentity that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void LookupDeveloperIdentityAsync(const Model::LookupDeveloperIdentityRequest& request, const LookupDeveloperIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Merges two users having different <code>IdentityId</code>s, existing in the
         * same identity pool, and identified by the same developer provider. You can use
         * this action to request that discrete users be merged and identified as a single
         * user in the Cognito environment. Cognito associates the given source user
         * (<code>SourceUserIdentifier</code>) with the <code>IdentityId</code> of the
         * <code>DestinationUserIdentifier</code>. Only developer-authenticated users can
         * be merged. If the users to be merged are associated with the same public
         * provider, but as two different users, an exception will be thrown.</p> <p>The
         * number of linked logins is limited to 20. So, the number of linked logins for
         * the source user, <code>SourceUserIdentifier</code>, and the destination user,
         * <code>DestinationUserIdentifier</code>, together should not be larger than 20.
         * Otherwise, an exception will be thrown.</p> <p>You must use AWS Developer
         * credentials to call this API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/MergeDeveloperIdentities">AWS
         * API Reference</a></p>
         */
        virtual Model::MergeDeveloperIdentitiesOutcome MergeDeveloperIdentities(const Model::MergeDeveloperIdentitiesRequest& request) const;

        /**
         * A Callable wrapper for MergeDeveloperIdentities that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::MergeDeveloperIdentitiesOutcomeCallable MergeDeveloperIdentitiesCallable(const Model::MergeDeveloperIdentitiesRequest& request) const;

        /**
         * An Async wrapper for MergeDeveloperIdentities that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void MergeDeveloperIdentitiesAsync(const Model::MergeDeveloperIdentitiesRequest& request, const MergeDeveloperIdentitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the roles for an identity pool. These roles are used when making calls
         * to <a>GetCredentialsForIdentity</a> action.</p> <p>You must use AWS Developer
         * credentials to call this API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/SetIdentityPoolRoles">AWS
         * API Reference</a></p>
         */
        virtual Model::SetIdentityPoolRolesOutcome SetIdentityPoolRoles(const Model::SetIdentityPoolRolesRequest& request) const;

        /**
         * A Callable wrapper for SetIdentityPoolRoles that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetIdentityPoolRolesOutcomeCallable SetIdentityPoolRolesCallable(const Model::SetIdentityPoolRolesRequest& request) const;

        /**
         * An Async wrapper for SetIdentityPoolRoles that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetIdentityPoolRolesAsync(const Model::SetIdentityPoolRolesRequest& request, const SetIdentityPoolRolesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>You can use this operation to use default (username and clientID) attribute
         * or custom attribute mappings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/SetPrincipalTagAttributeMap">AWS
         * API Reference</a></p>
         */
        virtual Model::SetPrincipalTagAttributeMapOutcome SetPrincipalTagAttributeMap(const Model::SetPrincipalTagAttributeMapRequest& request) const;

        /**
         * A Callable wrapper for SetPrincipalTagAttributeMap that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetPrincipalTagAttributeMapOutcomeCallable SetPrincipalTagAttributeMapCallable(const Model::SetPrincipalTagAttributeMapRequest& request) const;

        /**
         * An Async wrapper for SetPrincipalTagAttributeMap that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetPrincipalTagAttributeMapAsync(const Model::SetPrincipalTagAttributeMapRequest& request, const SetPrincipalTagAttributeMapResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Assigns a set of tags to the specified Amazon Cognito identity pool. A tag is
         * a label that you can use to categorize and manage identity pools in different
         * ways, such as by purpose, owner, environment, or other criteria.</p> <p>Each tag
         * consists of a key and value, both of which you define. A key is a general
         * category for more specific values. For example, if you have two versions of an
         * identity pool, one for testing and another for production, you might assign an
         * <code>Environment</code> tag key to both identity pools. The value of this key
         * might be <code>Test</code> for one identity pool and <code>Production</code> for
         * the other.</p> <p>Tags are useful for cost tracking and access control. You can
         * activate your tags so that they appear on the Billing and Cost Management
         * console, where you can track the costs associated with your identity pools. In
         * an IAM policy, you can constrain permissions for identity pools based on
         * specific tags or tag values.</p> <p>You can use this action up to 5 times per
         * second, per account. An identity pool can have as many as 50 tags.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Unlinks a <code>DeveloperUserIdentifier</code> from an existing identity.
         * Unlinked developer users will be considered new identities next time they are
         * seen. If, for a given Cognito identity, you remove all federated identities as
         * well as the developer user identifier, the Cognito identity becomes
         * inaccessible.</p> <p>You must use AWS Developer credentials to call this
         * API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/UnlinkDeveloperIdentity">AWS
         * API Reference</a></p>
         */
        virtual Model::UnlinkDeveloperIdentityOutcome UnlinkDeveloperIdentity(const Model::UnlinkDeveloperIdentityRequest& request) const;

        /**
         * A Callable wrapper for UnlinkDeveloperIdentity that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UnlinkDeveloperIdentityOutcomeCallable UnlinkDeveloperIdentityCallable(const Model::UnlinkDeveloperIdentityRequest& request) const;

        /**
         * An Async wrapper for UnlinkDeveloperIdentity that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UnlinkDeveloperIdentityAsync(const Model::UnlinkDeveloperIdentityRequest& request, const UnlinkDeveloperIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Unlinks a federated identity from an existing account. Unlinked logins will
         * be considered new identities next time they are seen. Removing the last linked
         * login will make this identity inaccessible.</p> <p>This is a public API. You do
         * not need any credentials to call this API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/UnlinkIdentity">AWS
         * API Reference</a></p>
         */
        virtual Model::UnlinkIdentityOutcome UnlinkIdentity(const Model::UnlinkIdentityRequest& request) const;

        /**
         * A Callable wrapper for UnlinkIdentity that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UnlinkIdentityOutcomeCallable UnlinkIdentityCallable(const Model::UnlinkIdentityRequest& request) const;

        /**
         * An Async wrapper for UnlinkIdentity that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UnlinkIdentityAsync(const Model::UnlinkIdentityRequest& request, const UnlinkIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the specified tags from the specified Amazon Cognito identity pool.
         * You can use this action up to 5 times per second, per account</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an identity pool.</p> <p>You must use AWS Developer credentials to
         * call this API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/UpdateIdentityPool">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateIdentityPoolOutcome UpdateIdentityPool(const Model::UpdateIdentityPoolRequest& request) const;

        /**
         * A Callable wrapper for UpdateIdentityPool that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateIdentityPoolOutcomeCallable UpdateIdentityPoolCallable(const Model::UpdateIdentityPoolRequest& request) const;

        /**
         * An Async wrapper for UpdateIdentityPool that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateIdentityPoolAsync(const Model::UpdateIdentityPoolRequest& request, const UpdateIdentityPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<CognitoIdentityEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const CognitoIdentityClientConfiguration& clientConfiguration);

      CognitoIdentityClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<CognitoIdentityEndpointProviderBase> m_endpointProvider;
  };

} // namespace CognitoIdentity
} // namespace Aws

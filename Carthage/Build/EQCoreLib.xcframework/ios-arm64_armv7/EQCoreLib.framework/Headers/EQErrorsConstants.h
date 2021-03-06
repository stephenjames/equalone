//
//  EQErrorsConstants.h
//  EQCoreLib
//
//  Created by David Rodrigues on 25/03/2014.
//  Copyright (c) 2014 V3D. All rights reserved.
//


#define RAISE_ABSTRACT_EXCEPTION    [NSException raise:NSGenericException format:@"This method [ %@ ] must be overidden !", NSStringFromSelector(_cmd)]

/**
* UNKNOWN ERROR
*/
#define UNKNOWN NSIntegerMax

/**
 * CORE ERROR
 */
#define CORE_ALREADY_STARTED 1000
#define CORE_NOT_STARTED 1001
#define CORE_RELEASE_FAILS 1002
#define CORE_BAD_STATUS 1003

/**
 * RESOURCE ERROR
 */
#define RESOURCE_DENIED_ROAMING 2000
#define RESOURCE_ACCESS_DENIED_WIFI_MODE 2001
#define RESOURCE_ACCESS_DENIED_USER 2002
#define RESOURCE_ACCESS_DENIED_RESOURCE_USED 2003

/**
 * LICENSE ERROR
 */
#define LICENSE_OPTOUT 3000
#define LICENSE_OUT_OF_CAMPAIGN 3001
#define LICENSE_CORRUPTED 3002
#define LICENSE_ALREADY_ACTIVE 3003
#define LICENSE_UNKNOWN_DQA 3004
#define LICENSE_DIFFERENT_PORTAL 3005

/**
 * CONFIGURATION ERROR
 */
#define CONFIG_CORRUPTED 4000

/**
 * NETWORK ERROR
 */
#define CONNECTION_FAILED 5000
#define CONNECTION_TIMEOUT 5001
#define NETWORK_FILE_TOO_BIG 5002

/**
 * PROCESS ERROR
 */
#define PROCESS_PARSING_FAILED 6000
#define PROCESS_ACCESS_FILESYSTEM_FAILED 6001
#define PROCESS_ALREADY_RUN 6002
#define PROCESS_ILLEGAL_ARGUMENTS 6003
#define PROCESS_ILLEGAL_STATE 6004
#define PROCESS_CANCELLED 6005

/**
 * DATABASE ERROR
 */
#define DATABASE_FAILED 7000

/**
 * COMLINK ERROR
 */
#define COMLINK_DISABLED 8000

#define COMLINK_UP_TO_DATE  304

/**
 * COUPON ERROR
 */
#define COUPON_CODE_INVALID 9000
#define COUPON_LIMIT_REACHED 9001
#define COUPON_DQA_INVALID 9002
#define COUPON_CODE_EMPTY 9003
#define COUPON_ALPHANUM 9004
#define COUPON_ALREADY_USED 5

/**
 * DEVICE-RELATED ERROR
 */
#define MISSING_SD_CARD 10001

/**
 * SDK SURVEY ERRORS
 */
#define SURVEY_WRONG_PARAMS 11000
#define SURVEY_UNMATCHED_ANSWER 11001
#define SURVEY_UNMATCHED_QUESTION 11002
#define SURVEY_NO_NEXT_QUESTION 11003
#define SURVEY_ALREADY_ANSWERED 11004
#define SURVEY_NO_MORE_VALID 11005
#define SURVEY_CONSUMER_ALREADY_REGISTERED 11006
#define SURVEY_CONSUMER_NOT_FOUND 11007
#define SURVEY_NOT_FOUND 11008
#define SURVEY_ILLEGAL_CALL 11009

/**
 * COMPONENTS ERRORS
 */
#define COMPONENT_ALREADY_SET 12000

/**
 * SCENARIO
 */
#define SCENARIO_ALREADY_USED 13000

/**
 * TICKET ERROR
 */
#define TICKET_DISABLED                 14000
#define TICKET_ADD_MESSAGE_FAILED       14001
#define TICKET_SURVEY_WITHOUT_ANSWER    14002
#define TICKET_NOT_FOUND                14003
#define TICKET_EMPTY                    14004
#define TICKET_NOT_IN_CREATION          14005
#define TICKET_ISSUE_DATE_IN_THE_FUTURE 14006
#define TICKET_NO_ADDRESS_FOUND         14007

#define TICKET_UP_TO_DATE   304

/**
 * MSCORE
 */
#define MSCORE_SERVER_BUSY  15000
#define MSCORE_INVALID_HOST 15001

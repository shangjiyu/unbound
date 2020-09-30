/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_UTIL_CONFIGPARSER_H_INCLUDED
# define YY_YY_UTIL_CONFIGPARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    SPACE = 258,
    LETTER = 259,
    NEWLINE = 260,
    COMMENT = 261,
    COLON = 262,
    ANY = 263,
    ZONESTR = 264,
    STRING_ARG = 265,
    VAR_FORCE_TOPLEVEL = 266,
    VAR_SERVER = 267,
    VAR_VERBOSITY = 268,
    VAR_NUM_THREADS = 269,
    VAR_PORT = 270,
    VAR_OUTGOING_RANGE = 271,
    VAR_INTERFACE = 272,
    VAR_PREFER_IP4 = 273,
    VAR_DO_IP4 = 274,
    VAR_DO_IP6 = 275,
    VAR_PREFER_IP6 = 276,
    VAR_DO_UDP = 277,
    VAR_DO_TCP = 278,
    VAR_TCP_MSS = 279,
    VAR_OUTGOING_TCP_MSS = 280,
    VAR_TCP_IDLE_TIMEOUT = 281,
    VAR_EDNS_TCP_KEEPALIVE = 282,
    VAR_EDNS_TCP_KEEPALIVE_TIMEOUT = 283,
    VAR_CHROOT = 284,
    VAR_USERNAME = 285,
    VAR_DIRECTORY = 286,
    VAR_LOGFILE = 287,
    VAR_PIDFILE = 288,
    VAR_MSG_CACHE_SIZE = 289,
    VAR_MSG_CACHE_SLABS = 290,
    VAR_NUM_QUERIES_PER_THREAD = 291,
    VAR_RRSET_CACHE_SIZE = 292,
    VAR_RRSET_CACHE_SLABS = 293,
    VAR_OUTGOING_NUM_TCP = 294,
    VAR_INFRA_HOST_TTL = 295,
    VAR_INFRA_LAME_TTL = 296,
    VAR_INFRA_CACHE_SLABS = 297,
    VAR_INFRA_CACHE_NUMHOSTS = 298,
    VAR_INFRA_CACHE_LAME_SIZE = 299,
    VAR_NAME = 300,
    VAR_STUB_ZONE = 301,
    VAR_STUB_HOST = 302,
    VAR_STUB_ADDR = 303,
    VAR_TARGET_FETCH_POLICY = 304,
    VAR_HARDEN_SHORT_BUFSIZE = 305,
    VAR_HARDEN_LARGE_QUERIES = 306,
    VAR_FORWARD_ZONE = 307,
    VAR_FORWARD_HOST = 308,
    VAR_FORWARD_ADDR = 309,
    VAR_DO_NOT_QUERY_ADDRESS = 310,
    VAR_HIDE_IDENTITY = 311,
    VAR_HIDE_VERSION = 312,
    VAR_IDENTITY = 313,
    VAR_VERSION = 314,
    VAR_HARDEN_GLUE = 315,
    VAR_MODULE_CONF = 316,
    VAR_TRUST_ANCHOR_FILE = 317,
    VAR_TRUST_ANCHOR = 318,
    VAR_VAL_OVERRIDE_DATE = 319,
    VAR_BOGUS_TTL = 320,
    VAR_VAL_CLEAN_ADDITIONAL = 321,
    VAR_VAL_PERMISSIVE_MODE = 322,
    VAR_INCOMING_NUM_TCP = 323,
    VAR_MSG_BUFFER_SIZE = 324,
    VAR_KEY_CACHE_SIZE = 325,
    VAR_KEY_CACHE_SLABS = 326,
    VAR_TRUSTED_KEYS_FILE = 327,
    VAR_VAL_NSEC3_KEYSIZE_ITERATIONS = 328,
    VAR_USE_SYSLOG = 329,
    VAR_OUTGOING_INTERFACE = 330,
    VAR_ROOT_HINTS = 331,
    VAR_DO_NOT_QUERY_LOCALHOST = 332,
    VAR_CACHE_MAX_TTL = 333,
    VAR_HARDEN_DNSSEC_STRIPPED = 334,
    VAR_ACCESS_CONTROL = 335,
    VAR_LOCAL_ZONE = 336,
    VAR_LOCAL_DATA = 337,
    VAR_INTERFACE_AUTOMATIC = 338,
    VAR_STATISTICS_INTERVAL = 339,
    VAR_DO_DAEMONIZE = 340,
    VAR_USE_CAPS_FOR_ID = 341,
    VAR_STATISTICS_CUMULATIVE = 342,
    VAR_OUTGOING_PORT_PERMIT = 343,
    VAR_OUTGOING_PORT_AVOID = 344,
    VAR_DLV_ANCHOR_FILE = 345,
    VAR_DLV_ANCHOR = 346,
    VAR_NEG_CACHE_SIZE = 347,
    VAR_HARDEN_REFERRAL_PATH = 348,
    VAR_PRIVATE_ADDRESS = 349,
    VAR_PRIVATE_DOMAIN = 350,
    VAR_REMOTE_CONTROL = 351,
    VAR_CONTROL_ENABLE = 352,
    VAR_CONTROL_INTERFACE = 353,
    VAR_CONTROL_PORT = 354,
    VAR_SERVER_KEY_FILE = 355,
    VAR_SERVER_CERT_FILE = 356,
    VAR_CONTROL_KEY_FILE = 357,
    VAR_CONTROL_CERT_FILE = 358,
    VAR_CONTROL_USE_CERT = 359,
    VAR_EXTENDED_STATISTICS = 360,
    VAR_LOCAL_DATA_PTR = 361,
    VAR_JOSTLE_TIMEOUT = 362,
    VAR_STUB_PRIME = 363,
    VAR_UNWANTED_REPLY_THRESHOLD = 364,
    VAR_LOG_TIME_ASCII = 365,
    VAR_DOMAIN_INSECURE = 366,
    VAR_PYTHON = 367,
    VAR_PYTHON_SCRIPT = 368,
    VAR_VAL_SIG_SKEW_MIN = 369,
    VAR_VAL_SIG_SKEW_MAX = 370,
    VAR_CACHE_MIN_TTL = 371,
    VAR_VAL_LOG_LEVEL = 372,
    VAR_AUTO_TRUST_ANCHOR_FILE = 373,
    VAR_KEEP_MISSING = 374,
    VAR_ADD_HOLDDOWN = 375,
    VAR_DEL_HOLDDOWN = 376,
    VAR_SO_RCVBUF = 377,
    VAR_EDNS_BUFFER_SIZE = 378,
    VAR_PREFETCH = 379,
    VAR_PREFETCH_KEY = 380,
    VAR_SO_SNDBUF = 381,
    VAR_SO_REUSEPORT = 382,
    VAR_HARDEN_BELOW_NXDOMAIN = 383,
    VAR_IGNORE_CD_FLAG = 384,
    VAR_LOG_QUERIES = 385,
    VAR_LOG_REPLIES = 386,
    VAR_LOG_LOCAL_ACTIONS = 387,
    VAR_TCP_UPSTREAM = 388,
    VAR_SSL_UPSTREAM = 389,
    VAR_SSL_SERVICE_KEY = 390,
    VAR_SSL_SERVICE_PEM = 391,
    VAR_SSL_PORT = 392,
    VAR_FORWARD_FIRST = 393,
    VAR_STUB_SSL_UPSTREAM = 394,
    VAR_FORWARD_SSL_UPSTREAM = 395,
    VAR_TLS_CERT_BUNDLE = 396,
    VAR_HTTPS_PORT = 397,
    VAR_HTTP_ENDPOINT = 398,
    VAR_HTTP_MAX_STREAMS = 399,
    VAR_HTTP_QUERY_BUFFER_SIZE = 400,
    VAR_HTTP_RESPONSE_BUFFER_SIZE = 401,
    VAR_HTTP_NODELAY = 402,
    VAR_STUB_FIRST = 403,
    VAR_MINIMAL_RESPONSES = 404,
    VAR_RRSET_ROUNDROBIN = 405,
    VAR_MAX_UDP_SIZE = 406,
    VAR_DELAY_CLOSE = 407,
    VAR_UNBLOCK_LAN_ZONES = 408,
    VAR_INSECURE_LAN_ZONES = 409,
    VAR_INFRA_CACHE_MIN_RTT = 410,
    VAR_DNS64_PREFIX = 411,
    VAR_DNS64_SYNTHALL = 412,
    VAR_DNS64_IGNORE_AAAA = 413,
    VAR_DNSTAP = 414,
    VAR_DNSTAP_ENABLE = 415,
    VAR_DNSTAP_SOCKET_PATH = 416,
    VAR_DNSTAP_IP = 417,
    VAR_DNSTAP_TLS = 418,
    VAR_DNSTAP_TLS_SERVER_NAME = 419,
    VAR_DNSTAP_TLS_CERT_BUNDLE = 420,
    VAR_DNSTAP_TLS_CLIENT_KEY_FILE = 421,
    VAR_DNSTAP_TLS_CLIENT_CERT_FILE = 422,
    VAR_DNSTAP_SEND_IDENTITY = 423,
    VAR_DNSTAP_SEND_VERSION = 424,
    VAR_DNSTAP_BIDIRECTIONAL = 425,
    VAR_DNSTAP_IDENTITY = 426,
    VAR_DNSTAP_VERSION = 427,
    VAR_DNSTAP_LOG_RESOLVER_QUERY_MESSAGES = 428,
    VAR_DNSTAP_LOG_RESOLVER_RESPONSE_MESSAGES = 429,
    VAR_DNSTAP_LOG_CLIENT_QUERY_MESSAGES = 430,
    VAR_DNSTAP_LOG_CLIENT_RESPONSE_MESSAGES = 431,
    VAR_DNSTAP_LOG_FORWARDER_QUERY_MESSAGES = 432,
    VAR_DNSTAP_LOG_FORWARDER_RESPONSE_MESSAGES = 433,
    VAR_RESPONSE_IP_TAG = 434,
    VAR_RESPONSE_IP = 435,
    VAR_RESPONSE_IP_DATA = 436,
    VAR_HARDEN_ALGO_DOWNGRADE = 437,
    VAR_IP_TRANSPARENT = 438,
    VAR_IP_DSCP = 439,
    VAR_DISABLE_DNSSEC_LAME_CHECK = 440,
    VAR_IP_RATELIMIT = 441,
    VAR_IP_RATELIMIT_SLABS = 442,
    VAR_IP_RATELIMIT_SIZE = 443,
    VAR_RATELIMIT = 444,
    VAR_RATELIMIT_SLABS = 445,
    VAR_RATELIMIT_SIZE = 446,
    VAR_RATELIMIT_FOR_DOMAIN = 447,
    VAR_RATELIMIT_BELOW_DOMAIN = 448,
    VAR_IP_RATELIMIT_FACTOR = 449,
    VAR_RATELIMIT_FACTOR = 450,
    VAR_SEND_CLIENT_SUBNET = 451,
    VAR_CLIENT_SUBNET_ZONE = 452,
    VAR_CLIENT_SUBNET_ALWAYS_FORWARD = 453,
    VAR_CLIENT_SUBNET_OPCODE = 454,
    VAR_MAX_CLIENT_SUBNET_IPV4 = 455,
    VAR_MAX_CLIENT_SUBNET_IPV6 = 456,
    VAR_MIN_CLIENT_SUBNET_IPV4 = 457,
    VAR_MIN_CLIENT_SUBNET_IPV6 = 458,
    VAR_MAX_ECS_TREE_SIZE_IPV4 = 459,
    VAR_MAX_ECS_TREE_SIZE_IPV6 = 460,
    VAR_CAPS_WHITELIST = 461,
    VAR_CACHE_MAX_NEGATIVE_TTL = 462,
    VAR_PERMIT_SMALL_HOLDDOWN = 463,
    VAR_QNAME_MINIMISATION = 464,
    VAR_QNAME_MINIMISATION_STRICT = 465,
    VAR_IP_FREEBIND = 466,
    VAR_DEFINE_TAG = 467,
    VAR_LOCAL_ZONE_TAG = 468,
    VAR_ACCESS_CONTROL_TAG = 469,
    VAR_LOCAL_ZONE_OVERRIDE = 470,
    VAR_ACCESS_CONTROL_TAG_ACTION = 471,
    VAR_ACCESS_CONTROL_TAG_DATA = 472,
    VAR_VIEW = 473,
    VAR_ACCESS_CONTROL_VIEW = 474,
    VAR_VIEW_FIRST = 475,
    VAR_SERVE_EXPIRED = 476,
    VAR_SERVE_EXPIRED_TTL = 477,
    VAR_SERVE_EXPIRED_TTL_RESET = 478,
    VAR_SERVE_EXPIRED_REPLY_TTL = 479,
    VAR_SERVE_EXPIRED_CLIENT_TIMEOUT = 480,
    VAR_FAKE_DSA = 481,
    VAR_FAKE_SHA1 = 482,
    VAR_LOG_IDENTITY = 483,
    VAR_HIDE_TRUSTANCHOR = 484,
    VAR_TRUST_ANCHOR_SIGNALING = 485,
    VAR_AGGRESSIVE_NSEC = 486,
    VAR_USE_SYSTEMD = 487,
    VAR_SHM_ENABLE = 488,
    VAR_SHM_KEY = 489,
    VAR_ROOT_KEY_SENTINEL = 490,
    VAR_DNSCRYPT = 491,
    VAR_DNSCRYPT_ENABLE = 492,
    VAR_DNSCRYPT_PORT = 493,
    VAR_DNSCRYPT_PROVIDER = 494,
    VAR_DNSCRYPT_SECRET_KEY = 495,
    VAR_DNSCRYPT_PROVIDER_CERT = 496,
    VAR_DNSCRYPT_PROVIDER_CERT_ROTATED = 497,
    VAR_DNSCRYPT_SHARED_SECRET_CACHE_SIZE = 498,
    VAR_DNSCRYPT_SHARED_SECRET_CACHE_SLABS = 499,
    VAR_DNSCRYPT_NONCE_CACHE_SIZE = 500,
    VAR_DNSCRYPT_NONCE_CACHE_SLABS = 501,
    VAR_IPSECMOD_ENABLED = 502,
    VAR_IPSECMOD_HOOK = 503,
    VAR_IPSECMOD_IGNORE_BOGUS = 504,
    VAR_IPSECMOD_MAX_TTL = 505,
    VAR_IPSECMOD_WHITELIST = 506,
    VAR_IPSECMOD_STRICT = 507,
    VAR_CACHEDB = 508,
    VAR_CACHEDB_BACKEND = 509,
    VAR_CACHEDB_SECRETSEED = 510,
    VAR_CACHEDB_REDISHOST = 511,
    VAR_CACHEDB_REDISPORT = 512,
    VAR_CACHEDB_REDISTIMEOUT = 513,
    VAR_CACHEDB_REDISEXPIRERECORDS = 514,
    VAR_UDP_UPSTREAM_WITHOUT_DOWNSTREAM = 515,
    VAR_FOR_UPSTREAM = 516,
    VAR_AUTH_ZONE = 517,
    VAR_ZONEFILE = 518,
    VAR_MASTER = 519,
    VAR_URL = 520,
    VAR_FOR_DOWNSTREAM = 521,
    VAR_FALLBACK_ENABLED = 522,
    VAR_TLS_ADDITIONAL_PORT = 523,
    VAR_LOW_RTT = 524,
    VAR_LOW_RTT_PERMIL = 525,
    VAR_FAST_SERVER_PERMIL = 526,
    VAR_FAST_SERVER_NUM = 527,
    VAR_ALLOW_NOTIFY = 528,
    VAR_TLS_WIN_CERT = 529,
    VAR_TCP_CONNECTION_LIMIT = 530,
    VAR_FORWARD_NO_CACHE = 531,
    VAR_STUB_NO_CACHE = 532,
    VAR_LOG_SERVFAIL = 533,
    VAR_DENY_ANY = 534,
    VAR_UNKNOWN_SERVER_TIME_LIMIT = 535,
    VAR_LOG_TAG_QUERYREPLY = 536,
    VAR_STREAM_WAIT_SIZE = 537,
    VAR_TLS_CIPHERS = 538,
    VAR_TLS_CIPHERSUITES = 539,
    VAR_TLS_USE_SNI = 540,
    VAR_IPSET = 541,
    VAR_IPSET_NAME_V4 = 542,
    VAR_IPSET_NAME_V6 = 543,
    VAR_TLS_SESSION_TICKET_KEYS = 544,
    VAR_RPZ = 545,
    VAR_TAGS = 546,
    VAR_RPZ_ACTION_OVERRIDE = 547,
    VAR_RPZ_CNAME_OVERRIDE = 548,
    VAR_RPZ_LOG = 549,
    VAR_RPZ_LOG_NAME = 550,
    VAR_DYNLIB = 551,
    VAR_DYNLIB_FILE = 552,
    VAR_EDNS_CLIENT_STRING = 553,
    VAR_EDNS_CLIENT_STRING_OPCODE = 554
  };
#endif
/* Tokens.  */
#define SPACE 258
#define LETTER 259
#define NEWLINE 260
#define COMMENT 261
#define COLON 262
#define ANY 263
#define ZONESTR 264
#define STRING_ARG 265
#define VAR_FORCE_TOPLEVEL 266
#define VAR_SERVER 267
#define VAR_VERBOSITY 268
#define VAR_NUM_THREADS 269
#define VAR_PORT 270
#define VAR_OUTGOING_RANGE 271
#define VAR_INTERFACE 272
#define VAR_PREFER_IP4 273
#define VAR_DO_IP4 274
#define VAR_DO_IP6 275
#define VAR_PREFER_IP6 276
#define VAR_DO_UDP 277
#define VAR_DO_TCP 278
#define VAR_TCP_MSS 279
#define VAR_OUTGOING_TCP_MSS 280
#define VAR_TCP_IDLE_TIMEOUT 281
#define VAR_EDNS_TCP_KEEPALIVE 282
#define VAR_EDNS_TCP_KEEPALIVE_TIMEOUT 283
#define VAR_CHROOT 284
#define VAR_USERNAME 285
#define VAR_DIRECTORY 286
#define VAR_LOGFILE 287
#define VAR_PIDFILE 288
#define VAR_MSG_CACHE_SIZE 289
#define VAR_MSG_CACHE_SLABS 290
#define VAR_NUM_QUERIES_PER_THREAD 291
#define VAR_RRSET_CACHE_SIZE 292
#define VAR_RRSET_CACHE_SLABS 293
#define VAR_OUTGOING_NUM_TCP 294
#define VAR_INFRA_HOST_TTL 295
#define VAR_INFRA_LAME_TTL 296
#define VAR_INFRA_CACHE_SLABS 297
#define VAR_INFRA_CACHE_NUMHOSTS 298
#define VAR_INFRA_CACHE_LAME_SIZE 299
#define VAR_NAME 300
#define VAR_STUB_ZONE 301
#define VAR_STUB_HOST 302
#define VAR_STUB_ADDR 303
#define VAR_TARGET_FETCH_POLICY 304
#define VAR_HARDEN_SHORT_BUFSIZE 305
#define VAR_HARDEN_LARGE_QUERIES 306
#define VAR_FORWARD_ZONE 307
#define VAR_FORWARD_HOST 308
#define VAR_FORWARD_ADDR 309
#define VAR_DO_NOT_QUERY_ADDRESS 310
#define VAR_HIDE_IDENTITY 311
#define VAR_HIDE_VERSION 312
#define VAR_IDENTITY 313
#define VAR_VERSION 314
#define VAR_HARDEN_GLUE 315
#define VAR_MODULE_CONF 316
#define VAR_TRUST_ANCHOR_FILE 317
#define VAR_TRUST_ANCHOR 318
#define VAR_VAL_OVERRIDE_DATE 319
#define VAR_BOGUS_TTL 320
#define VAR_VAL_CLEAN_ADDITIONAL 321
#define VAR_VAL_PERMISSIVE_MODE 322
#define VAR_INCOMING_NUM_TCP 323
#define VAR_MSG_BUFFER_SIZE 324
#define VAR_KEY_CACHE_SIZE 325
#define VAR_KEY_CACHE_SLABS 326
#define VAR_TRUSTED_KEYS_FILE 327
#define VAR_VAL_NSEC3_KEYSIZE_ITERATIONS 328
#define VAR_USE_SYSLOG 329
#define VAR_OUTGOING_INTERFACE 330
#define VAR_ROOT_HINTS 331
#define VAR_DO_NOT_QUERY_LOCALHOST 332
#define VAR_CACHE_MAX_TTL 333
#define VAR_HARDEN_DNSSEC_STRIPPED 334
#define VAR_ACCESS_CONTROL 335
#define VAR_LOCAL_ZONE 336
#define VAR_LOCAL_DATA 337
#define VAR_INTERFACE_AUTOMATIC 338
#define VAR_STATISTICS_INTERVAL 339
#define VAR_DO_DAEMONIZE 340
#define VAR_USE_CAPS_FOR_ID 341
#define VAR_STATISTICS_CUMULATIVE 342
#define VAR_OUTGOING_PORT_PERMIT 343
#define VAR_OUTGOING_PORT_AVOID 344
#define VAR_DLV_ANCHOR_FILE 345
#define VAR_DLV_ANCHOR 346
#define VAR_NEG_CACHE_SIZE 347
#define VAR_HARDEN_REFERRAL_PATH 348
#define VAR_PRIVATE_ADDRESS 349
#define VAR_PRIVATE_DOMAIN 350
#define VAR_REMOTE_CONTROL 351
#define VAR_CONTROL_ENABLE 352
#define VAR_CONTROL_INTERFACE 353
#define VAR_CONTROL_PORT 354
#define VAR_SERVER_KEY_FILE 355
#define VAR_SERVER_CERT_FILE 356
#define VAR_CONTROL_KEY_FILE 357
#define VAR_CONTROL_CERT_FILE 358
#define VAR_CONTROL_USE_CERT 359
#define VAR_EXTENDED_STATISTICS 360
#define VAR_LOCAL_DATA_PTR 361
#define VAR_JOSTLE_TIMEOUT 362
#define VAR_STUB_PRIME 363
#define VAR_UNWANTED_REPLY_THRESHOLD 364
#define VAR_LOG_TIME_ASCII 365
#define VAR_DOMAIN_INSECURE 366
#define VAR_PYTHON 367
#define VAR_PYTHON_SCRIPT 368
#define VAR_VAL_SIG_SKEW_MIN 369
#define VAR_VAL_SIG_SKEW_MAX 370
#define VAR_CACHE_MIN_TTL 371
#define VAR_VAL_LOG_LEVEL 372
#define VAR_AUTO_TRUST_ANCHOR_FILE 373
#define VAR_KEEP_MISSING 374
#define VAR_ADD_HOLDDOWN 375
#define VAR_DEL_HOLDDOWN 376
#define VAR_SO_RCVBUF 377
#define VAR_EDNS_BUFFER_SIZE 378
#define VAR_PREFETCH 379
#define VAR_PREFETCH_KEY 380
#define VAR_SO_SNDBUF 381
#define VAR_SO_REUSEPORT 382
#define VAR_HARDEN_BELOW_NXDOMAIN 383
#define VAR_IGNORE_CD_FLAG 384
#define VAR_LOG_QUERIES 385
#define VAR_LOG_REPLIES 386
#define VAR_LOG_LOCAL_ACTIONS 387
#define VAR_TCP_UPSTREAM 388
#define VAR_SSL_UPSTREAM 389
#define VAR_SSL_SERVICE_KEY 390
#define VAR_SSL_SERVICE_PEM 391
#define VAR_SSL_PORT 392
#define VAR_FORWARD_FIRST 393
#define VAR_STUB_SSL_UPSTREAM 394
#define VAR_FORWARD_SSL_UPSTREAM 395
#define VAR_TLS_CERT_BUNDLE 396
#define VAR_HTTPS_PORT 397
#define VAR_HTTP_ENDPOINT 398
#define VAR_HTTP_MAX_STREAMS 399
#define VAR_HTTP_QUERY_BUFFER_SIZE 400
#define VAR_HTTP_RESPONSE_BUFFER_SIZE 401
#define VAR_HTTP_NODELAY 402
#define VAR_STUB_FIRST 403
#define VAR_MINIMAL_RESPONSES 404
#define VAR_RRSET_ROUNDROBIN 405
#define VAR_MAX_UDP_SIZE 406
#define VAR_DELAY_CLOSE 407
#define VAR_UNBLOCK_LAN_ZONES 408
#define VAR_INSECURE_LAN_ZONES 409
#define VAR_INFRA_CACHE_MIN_RTT 410
#define VAR_DNS64_PREFIX 411
#define VAR_DNS64_SYNTHALL 412
#define VAR_DNS64_IGNORE_AAAA 413
#define VAR_DNSTAP 414
#define VAR_DNSTAP_ENABLE 415
#define VAR_DNSTAP_SOCKET_PATH 416
#define VAR_DNSTAP_IP 417
#define VAR_DNSTAP_TLS 418
#define VAR_DNSTAP_TLS_SERVER_NAME 419
#define VAR_DNSTAP_TLS_CERT_BUNDLE 420
#define VAR_DNSTAP_TLS_CLIENT_KEY_FILE 421
#define VAR_DNSTAP_TLS_CLIENT_CERT_FILE 422
#define VAR_DNSTAP_SEND_IDENTITY 423
#define VAR_DNSTAP_SEND_VERSION 424
#define VAR_DNSTAP_BIDIRECTIONAL 425
#define VAR_DNSTAP_IDENTITY 426
#define VAR_DNSTAP_VERSION 427
#define VAR_DNSTAP_LOG_RESOLVER_QUERY_MESSAGES 428
#define VAR_DNSTAP_LOG_RESOLVER_RESPONSE_MESSAGES 429
#define VAR_DNSTAP_LOG_CLIENT_QUERY_MESSAGES 430
#define VAR_DNSTAP_LOG_CLIENT_RESPONSE_MESSAGES 431
#define VAR_DNSTAP_LOG_FORWARDER_QUERY_MESSAGES 432
#define VAR_DNSTAP_LOG_FORWARDER_RESPONSE_MESSAGES 433
#define VAR_RESPONSE_IP_TAG 434
#define VAR_RESPONSE_IP 435
#define VAR_RESPONSE_IP_DATA 436
#define VAR_HARDEN_ALGO_DOWNGRADE 437
#define VAR_IP_TRANSPARENT 438
#define VAR_IP_DSCP 439
#define VAR_DISABLE_DNSSEC_LAME_CHECK 440
#define VAR_IP_RATELIMIT 441
#define VAR_IP_RATELIMIT_SLABS 442
#define VAR_IP_RATELIMIT_SIZE 443
#define VAR_RATELIMIT 444
#define VAR_RATELIMIT_SLABS 445
#define VAR_RATELIMIT_SIZE 446
#define VAR_RATELIMIT_FOR_DOMAIN 447
#define VAR_RATELIMIT_BELOW_DOMAIN 448
#define VAR_IP_RATELIMIT_FACTOR 449
#define VAR_RATELIMIT_FACTOR 450
#define VAR_SEND_CLIENT_SUBNET 451
#define VAR_CLIENT_SUBNET_ZONE 452
#define VAR_CLIENT_SUBNET_ALWAYS_FORWARD 453
#define VAR_CLIENT_SUBNET_OPCODE 454
#define VAR_MAX_CLIENT_SUBNET_IPV4 455
#define VAR_MAX_CLIENT_SUBNET_IPV6 456
#define VAR_MIN_CLIENT_SUBNET_IPV4 457
#define VAR_MIN_CLIENT_SUBNET_IPV6 458
#define VAR_MAX_ECS_TREE_SIZE_IPV4 459
#define VAR_MAX_ECS_TREE_SIZE_IPV6 460
#define VAR_CAPS_WHITELIST 461
#define VAR_CACHE_MAX_NEGATIVE_TTL 462
#define VAR_PERMIT_SMALL_HOLDDOWN 463
#define VAR_QNAME_MINIMISATION 464
#define VAR_QNAME_MINIMISATION_STRICT 465
#define VAR_IP_FREEBIND 466
#define VAR_DEFINE_TAG 467
#define VAR_LOCAL_ZONE_TAG 468
#define VAR_ACCESS_CONTROL_TAG 469
#define VAR_LOCAL_ZONE_OVERRIDE 470
#define VAR_ACCESS_CONTROL_TAG_ACTION 471
#define VAR_ACCESS_CONTROL_TAG_DATA 472
#define VAR_VIEW 473
#define VAR_ACCESS_CONTROL_VIEW 474
#define VAR_VIEW_FIRST 475
#define VAR_SERVE_EXPIRED 476
#define VAR_SERVE_EXPIRED_TTL 477
#define VAR_SERVE_EXPIRED_TTL_RESET 478
#define VAR_SERVE_EXPIRED_REPLY_TTL 479
#define VAR_SERVE_EXPIRED_CLIENT_TIMEOUT 480
#define VAR_FAKE_DSA 481
#define VAR_FAKE_SHA1 482
#define VAR_LOG_IDENTITY 483
#define VAR_HIDE_TRUSTANCHOR 484
#define VAR_TRUST_ANCHOR_SIGNALING 485
#define VAR_AGGRESSIVE_NSEC 486
#define VAR_USE_SYSTEMD 487
#define VAR_SHM_ENABLE 488
#define VAR_SHM_KEY 489
#define VAR_ROOT_KEY_SENTINEL 490
#define VAR_DNSCRYPT 491
#define VAR_DNSCRYPT_ENABLE 492
#define VAR_DNSCRYPT_PORT 493
#define VAR_DNSCRYPT_PROVIDER 494
#define VAR_DNSCRYPT_SECRET_KEY 495
#define VAR_DNSCRYPT_PROVIDER_CERT 496
#define VAR_DNSCRYPT_PROVIDER_CERT_ROTATED 497
#define VAR_DNSCRYPT_SHARED_SECRET_CACHE_SIZE 498
#define VAR_DNSCRYPT_SHARED_SECRET_CACHE_SLABS 499
#define VAR_DNSCRYPT_NONCE_CACHE_SIZE 500
#define VAR_DNSCRYPT_NONCE_CACHE_SLABS 501
#define VAR_IPSECMOD_ENABLED 502
#define VAR_IPSECMOD_HOOK 503
#define VAR_IPSECMOD_IGNORE_BOGUS 504
#define VAR_IPSECMOD_MAX_TTL 505
#define VAR_IPSECMOD_WHITELIST 506
#define VAR_IPSECMOD_STRICT 507
#define VAR_CACHEDB 508
#define VAR_CACHEDB_BACKEND 509
#define VAR_CACHEDB_SECRETSEED 510
#define VAR_CACHEDB_REDISHOST 511
#define VAR_CACHEDB_REDISPORT 512
#define VAR_CACHEDB_REDISTIMEOUT 513
#define VAR_CACHEDB_REDISEXPIRERECORDS 514
#define VAR_UDP_UPSTREAM_WITHOUT_DOWNSTREAM 515
#define VAR_FOR_UPSTREAM 516
#define VAR_AUTH_ZONE 517
#define VAR_ZONEFILE 518
#define VAR_MASTER 519
#define VAR_URL 520
#define VAR_FOR_DOWNSTREAM 521
#define VAR_FALLBACK_ENABLED 522
#define VAR_TLS_ADDITIONAL_PORT 523
#define VAR_LOW_RTT 524
#define VAR_LOW_RTT_PERMIL 525
#define VAR_FAST_SERVER_PERMIL 526
#define VAR_FAST_SERVER_NUM 527
#define VAR_ALLOW_NOTIFY 528
#define VAR_TLS_WIN_CERT 529
#define VAR_TCP_CONNECTION_LIMIT 530
#define VAR_FORWARD_NO_CACHE 531
#define VAR_STUB_NO_CACHE 532
#define VAR_LOG_SERVFAIL 533
#define VAR_DENY_ANY 534
#define VAR_UNKNOWN_SERVER_TIME_LIMIT 535
#define VAR_LOG_TAG_QUERYREPLY 536
#define VAR_STREAM_WAIT_SIZE 537
#define VAR_TLS_CIPHERS 538
#define VAR_TLS_CIPHERSUITES 539
#define VAR_TLS_USE_SNI 540
#define VAR_IPSET 541
#define VAR_IPSET_NAME_V4 542
#define VAR_IPSET_NAME_V6 543
#define VAR_TLS_SESSION_TICKET_KEYS 544
#define VAR_RPZ 545
#define VAR_TAGS 546
#define VAR_RPZ_ACTION_OVERRIDE 547
#define VAR_RPZ_CNAME_OVERRIDE 548
#define VAR_RPZ_LOG 549
#define VAR_RPZ_LOG_NAME 550
#define VAR_DYNLIB 551
#define VAR_DYNLIB_FILE 552
#define VAR_EDNS_CLIENT_STRING 553
#define VAR_EDNS_CLIENT_STRING_OPCODE 554

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 66 "./util/configparser.y"

	char*	str;

#line 659 "util/configparser.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_UTIL_CONFIGPARSER_H_INCLUDED  */

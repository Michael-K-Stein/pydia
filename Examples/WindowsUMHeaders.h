#include <array>
#include <cstdint>
#include <functional>

namespace windows
{
using HRESULT = uint32_t;
struct LIST_ENTRY64;
struct LIST_ENTRY32;
union _ARM64_FPCR_REG;
union _ARM64_FPSR_REG;
union _AMD64_MXCSR_REG;
struct _PS_MITIGATION_OPTIONS_MAP;
struct _PS_MITIGATION_AUDIT_OPTIONS_MAP;
struct _ACTIVATION_CONTEXT_DATA;
struct _ASSEMBLY_STORAGE_MAP;
struct _CHPEV2_PROCESS_INFO;
struct _UNICODE_STRING;
struct _STRING;
struct _LDR_HOT_PATCH_DATA;
struct _KSYSTEM_TIME;
union _ULARGE_INTEGER;
struct _TP_POOL;
struct _TP_CLEANUP_GROUP;
struct _ACTIVATION_CONTEXT;
struct _TP_CALLBACK_INSTANCE;
struct _CHPEV2_CPUAREA_INFO;
struct _LIST_ENTRY;
struct _SINGLE_LIST_ENTRY;
struct _RTL_SPLAY_LINKS;
struct _RTL_DYNAMIC_HASH_TABLE_CONTEXT;
struct _RTL_DYNAMIC_HASH_TABLE;
union _LARGE_INTEGER;
struct _RTL_BITMAP;
struct _LUID;
struct _CUSTOM_SYSTEM_EVENT_TRIGGER_CONFIG;
struct _IMAGE_DOS_HEADER;
struct _RTL_RB_TREE;
struct _RTL_BALANCED_NODE;
struct _RTL_AVL_TREE;
struct _GUID;
union _KPRIORITY_STATE;
struct _KPRCB_TRACEPOINT_LOG;
struct _KSHARED_READY_QUEUE;
struct _KFLOATING_SAVE;
union _INVPCID_DESCRIPTOR;
struct _SINGLE_LIST_ENTRY32;
struct _KAFFINITY_EX;
struct _EXT_SET_PARAMETERS_V0;
struct _TRUSTLET_MAILBOX_KEY;
struct _TRUSTLET_COLLABORATION_ID;
struct _KNODE;
union _KSTACK_COUNT;
struct _KSPIN_LOCK_QUEUE;
union _SLIST_HEADER;
struct _IO_STATUS_BLOCK;
struct _QUAD;
struct _EXT_DELETE_PARAMETERS;
struct _EX_PUSH_LOCK;
struct _PP_LOOKASIDE_LIST;
struct _SLIST_ENTRY;
struct _HANDLE_TABLE_ENTRY_INFO;
struct _EX_FAST_REF;
struct _OBJECT_HANDLE_INFORMATION;
struct _PAGEFAULT_HISTORY;
struct _MM_SESSION_SPACE;
struct _EPROCESS_QUOTA_BLOCK;
struct _PO_PROCESS_ENERGY_CONTEXT;
union _PS_INTERLOCKED_TIMER_DELAY_VALUES;
struct _PS_NTDLL_EXPORTS;
struct _IORING_OBJECT;
struct _SCSI_REQUEST_BLOCK;
struct _ECP_LIST;
struct _IO_DRIVER_CREATE_CONTEXT;
struct _JOB_ACCESS_STATE;
struct _JOB_NOTIFICATION_INFORMATION;
struct _JOB_CPU_RATE_CONTROL;
struct _PSP_STORAGE;
struct _JOB_NET_RATE_CONTROL;
struct _MDL;
struct _SECTION_OBJECT_POINTERS;
struct _EVENT_DATA_DESCRIPTOR;
struct _EVENT_DESCRIPTOR;
struct _PERFINFO_GROUPMASK;
struct _EX_RUNDOWN_REF;
union _WHEA_EVENT_LOG_ENTRY_FLAGS;
union _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_FLAGS;
struct _HEAP_SUBALLOCATOR_CALLBACKS;
struct _SEGMENT_HEAP_EXTRA;
struct _RTL_CSPARSE_BITMAP;
struct _HEAP_LIST_LOOKUP;
struct _RTL_CRITICAL_SECTION;
struct _LDRP_LOAD_CONTEXT;
struct _INTERLOCK_SEQ;
struct _RTLP_HP_PADDING_HEADER;
struct _RTL_HASH_TABLE;
struct _RTL_HASH_TABLE_ITERATOR;
struct _RTL_CHASH_TABLE;
struct _RTL_CHASH_ENTRY;
struct _HEAP_LFH_FAST_REF;
union _HEAP_LFH_ONDEMAND_POINTER;
struct _HEAP_LFH_SUBSEGMENT_ENCODED_OFFSETS;
struct _HEAP_LFH_UNUSED_BYTES_INFO;
struct _RTLP_HP_QUEUE_LOCK_HANDLE;
union _HEAP_VS_CHUNK_HEADER_SIZE;
struct _HEAP_VS_UNUSED_BYTES_INFO;
struct _HEAP_DESCRIPTOR_KEY;
struct RTL_HP_ENV_HANDLE;
union _HEAP_BUCKET_COUNTERS;
union _HEAP_BUCKET_RUN_INFO;
struct _HEAP_BUCKET;
struct _FILESYSTEM_DISK_COUNTERS;
struct _WHEA_IPF_CMC_DESCRIPTOR;
struct _HEAP_TAG_ENTRY;
struct _GROUP_AFFINITY;
struct _HEAP_COUNTERS;
struct _INTERFACE;
struct _HEAP_PSEUDO_TAG_ENTRY;
struct _CLIENT_ID;
struct _PROCESS_DISK_COUNTERS;
union _KLOCK_ENTRY_BOOST_BITMAP;
struct _EVENT_HEADER_EXTENDED_DATA_ITEM;
struct _RTL_HEAP_MEMORY_LIMIT_DATA;
struct _TEB_ACTIVE_FRAME_CONTEXT;
struct _TEB_ACTIVE_FRAME;
union _KERNEL_SHADOW_STACK_LIMIT;
union _JOBOBJECT_ENERGY_TRACKING_STATE;
union _WHEA_ERROR_RECORD_HEADER_VALIDBITS;
struct _CLIENT_ID64;
struct _EPROCESS_VALUES;
struct _RTL_BITMAP_EX;
struct _PROCESSOR_NUMBER;
struct _GDI_TEB_BATCH64;
struct _HEAP_TUNING_PARAMETERS;
union _AER_ENDPOINT_DESCRIPTOR_FLAGS;
union _RTL_RUN_ONCE;
struct _RTL_HP_VS_CONFIG;
struct _EXHANDLE;
struct _KCLOCK_TICK_TRACE;
struct _SECURITY_DESCRIPTOR;
union _KEXECUTE_OPTIONS;
struct _CLIENT_ID32;
struct _GDI_TEB_BATCH32;
union _WHEA_ERROR_RECORD_HEADER_FLAGS;
struct _RTL_HP_HEAP_VA_CALLBACKS_ENCODED;
union _PS_TRUSTLET_ATTRIBUTE_ACCESSRIGHTS;
struct _KSECURE_FAULT_INFORMATION;
struct _KREQUEST_PACKET;
struct _WHEA_PCI_SLOT_NUMBER;
struct _IMAGE_FILE_HEADER;
struct _JOBOBJECT_WAKE_FILTER;
struct _ACL;
struct _KCLOCK_TIMER_DEADLINE_ENTRY;
struct _WHEA_IPF_MCA_DESCRIPTOR;
struct _PS_PROTECTION;
struct _HEAP_LFH_MEM_POLICIES;
struct _NT_TIB64;
union _MM_PAGE_ACCESS_INFO_FLAGS;
struct _RTL_HP_LFH_CONFIG;
struct _IO_COMPLETION_CONTEXT;
union _KPRCBFLAG;
struct _DEVICE_OBJECT_POWER_EXTENSION;
struct _DEVOBJ_EXTENSION;
union _AER_ROOTPORT_DESCRIPTOR_FLAGS;
union _HEAP_SEGMENT_MGR_COMMIT_STATE;
struct _RTL_HP_SEG_ALLOC_POLICY;
union _KGDTENTRY64;
struct _RTL_TRACE_BLOCK;
union _WHEA_REVISION;
struct _KCORE_CONTROL_BLOCK;
struct _SYSTEM_POWER_STATE_CONTEXT;
union _WHEA_PERSISTENCE_INFO;
union _KIDTENTRY64;
struct _XSAVE_AREA_HEADER;
union _PROCESS_EXECUTION_TRANSITION;
struct _RTL_SRWLOCK;
struct _HEAP_ENTRY_EXTRA;
union _PROCESS_EXECUTION_STATE;
struct _IO_SECURITY_CONTEXT;
union _ENERGY_STATE_DURATION;
struct _KTSS64;
struct _MMWSL_INSTANCE;
struct _VPB;
union _LFH_RANDOM_DATA;
struct _RTL_TRACE_SEGMENT;
struct _NT_TIB;
struct _TERMINATION_PORT;
struct _POWER_SEQUENCE;
struct _STRING32;
struct _EXCEPTION_REGISTRATION_RECORD;
struct _GDI_TEB_BATCH;
struct _MMSUPPORT_SHARED;
union _AER_BRIDGE_DESCRIPTOR_FLAGS;
union _PS_CLIENT_SECURITY_CONTEXT;
struct _STRING64;
struct _KHETERO_PROCESSOR_SET;
union _KWAIT_STATUS_REGISTER;
struct _PS_TRUSTLET_TKSESSION_ID;
struct _HEAP_LFH_SUBSEGMENT_STAT;
struct _HEAP_GLOBAL_APPCOMPAT_FLAGS;
struct _PO_DIAG_STACK_RECORD;
struct _KLOCK_ENTRY_LOCK_STATE;
struct _WHEA_IPF_CPE_DESCRIPTOR;
struct _OWNER_ENTRY;
union _XPF_MCE_FLAGS;
struct _SE_AUDIT_PROCESS_CREATION_INFO;
union _PPM_IDLE_SYNCHRONIZATION_STATE;
struct _POP_FX_DEVICE;
struct _PS_JOB_WAKE_INFORMATION;
struct _PPM_CONCURRENCY_ACCOUNTING;
struct _PEBS_DS_SAVE_AREA64;
struct _RTL_STD_LIST_ENTRY;
struct _NT_TIB32;
union _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_VALIDBITS;
union _HEAP_LFH_SUBSEGMENT_DELAY_FREE;
union RTLP_HP_LFH_PERF_FLAGS;
struct _IOP_IRP_STACK_PROFILER;
struct _LDRP_CSLIST;
struct _MMSUPPORT_FLAGS;
union _WHEA_ERROR_PACKET_FLAGS;
struct _PROC_FEEDBACK;
union _TIMELINE_BITMAP;
struct _PROC_FEEDBACK_COUNTER;
struct _M128A;
struct _WHEA_ERROR_SOURCE_CONFIGURATION_DD;
struct BATTERY_REPORTING_SCALE;
struct _HEAP_USERDATA_OFFSETS;
struct _SYNCH_COUNTERS;
struct _ETW_BUFFER_CONTEXT;
struct _PROC_PERF_CHECK_CONTEXT;
struct _ACCESS_REASONS;
struct _WHEA_XPF_NMI_DESCRIPTOR;
struct _KCLOCK_INCREMENT_TRACE;
struct _SID_IDENTIFIER_AUTHORITY;
struct _HEAP_OPPORTUNISTIC_LARGE_PAGE_STATS;
struct _TXN_PARAMETER_BLOCK;
struct _ETW_SILODRIVERSTATE;
struct _EXP_LICENSE_STATE;
struct _NLS_STATE;
struct _WNF_STATE_NAME;
struct _OB_EXTENDED_PARSE_PARAMETERS;
struct _GENERIC_MAPPING;
struct _SEP_LOGON_SESSION_REFERENCES;
struct _CI_NGEN_PATHS;
struct _SEP_SILOSTATE;
struct _KSCHEDULING_GROUP_POLICY;
struct _LDR_SERVICE_TAG_RECORD;
struct _INVERTED_FUNCTION_TABLE_ENTRY;
struct _OBJECT_DUMP_CONTROL;
struct _IMAGE_RUNTIME_FUNCTION_ENTRY;
struct _PROCESSOR_CYCLES_WORKLOAD_CLASS;
union _KQOS_GROUPING_SETS;
struct _RTL_BALANCED_LINKS;
struct _HEAP_EXTENDED_ENTRY;
union _KE_PROCESS_CONCURRENCY_COUNT;
union _XPF_MC_BANK_FLAGS;
struct _PROC_PERF_HISTORY_ENTRY;
struct _HEAP_UNPACKED_ENTRY;
struct _IMAGE_DATA_DIRECTORY;
struct _XSTATE_FEATURE;
struct _PROC_IDLE_SNAP;
union _WHEA_NOTIFICATION_FLAGS;
struct _PROC_PERF_LOAD;
struct _KHETERO_HWFEEDBACK_CLASS;
struct _RTL_ACTIVATION_CONTEXT_STACK_FRAME;
struct _PROC_PERF_QOS_CLASS_POLICY;
struct _PERF_CONTROL_STATE_SELECTION;
struct _PROC_PERF_CHECK_CYCLE_SNAP;
struct _PEBS_DS_SAVE_AREA32;
struct _MACHINE_FRAME;
struct _PROC_IDLE_POLICY;
struct _DBGKP_ERROR_PORT;
struct _FAKE_HEAP_ENTRY;
struct _PROCESSOR_IDLE_CONSTRAINTS;
struct _KTIMER_TABLE_STATE;
struct _KDESCRIPTOR;
struct _WNF_SCOPE_MAP;
struct _EXCEPTION_RECORD;
struct _FAST_IO_DISPATCH;
struct _flags;
struct _PPM_SELECTION_MENU;
struct _CPTABLEINFO;
struct _PROC_PERF_CHECK_SNAP;
union _MCI_ADDR;
struct _PPM_SELECTION_MENU_ENTRY;
struct _PROC_IDLE_STATE_BUCKET;
struct _IO_CLIENT_EXTENSION;
struct _OBP_SYSTEM_DOS_DEVICE_STATE;
struct _COMPRESSED_DATA_INFO;
union _MCI_STATS;
struct _PROCESSOR_IDLE_DEPENDENCY;
struct _PPM_COORDINATED_SELECTION;
struct _FS_FILTER_CALLBACKS;
struct _PPM_SELECTION_STATISTICS;
struct _XSTATE_CONTEXT;
struct _TIME_FIELDS;
struct _PERFINFO_PPM_STATE_SELECTION;
struct _FS_FILTER_SECTION_SYNC_OUTPUT;
enum SE_WS_APPX_SIGNATURE_ORIGIN : uint32_t;
enum _PS_MITIGATION_OPTION : uint32_t;
enum _NT_PRODUCT_TYPE : uint32_t;
enum _ALTERNATIVE_ARCHITECTURE_TYPE : uint32_t;
enum _TP_CALLBACK_PRIORITY : uint32_t;
enum _MODE : uint32_t;
enum _POOL_TYPE : uint32_t;
enum _EX_POOL_PRIORITY : uint32_t;
enum _EVENT_TYPE : uint32_t;
enum _PP_NPAGED_LOOKASIDE_NUMBER : uint32_t;
enum _EX_GEN_RANDOM_DOMAIN : uint32_t;
enum _SYSTEM_DLL_TYPE : uint32_t;
enum _FILE_INFORMATION_CLASS : uint32_t;
enum _DIRECTORY_NOTIFY_INFORMATION_CLASS : uint32_t;
enum _FSINFOCLASS : uint32_t;
enum _DEVICE_RELATION_TYPE : uint32_t;
enum BUS_QUERY_ID_TYPE : uint32_t;
enum DEVICE_TEXT_TYPE : uint32_t;
enum _DEVICE_USAGE_NOTIFICATION_TYPE : uint32_t;
enum _SYSTEM_POWER_STATE : uint32_t;
enum _POWER_STATE_TYPE : uint32_t;
enum POWER_ACTION : uint32_t;
enum _IO_PRIORITY_HINT : uint32_t;
enum _MEMORY_CACHING_TYPE : uint32_t;
enum _MM_PAGE_ACCESS_TYPE : uint32_t;
enum _PF_FILE_ACCESS_TYPE : uint32_t;
enum _DEVICE_POWER_STATE : uint32_t;
enum _DEVICE_WAKE_DEPTH : uint32_t;
enum _WHEA_ERROR_SOURCE_TYPE : uint32_t;
enum _WHEA_ERROR_SOURCE_STATE : uint32_t;
enum _WHEA_EVENT_LOG_ENTRY_TYPE : uint32_t;
enum _WHEA_EVENT_LOG_ENTRY_ID : uint32_t;
enum _WHEA_ERROR_TYPE : uint32_t;
enum _WHEA_ERROR_SEVERITY : uint32_t;
enum _WHEA_ERROR_PACKET_DATA_FORMAT : uint32_t;
enum RTLP_CSPARSE_BITMAP_STATE : uint32_t;
enum _RTLP_HP_ADDRESS_SPACE_TYPE : uint32_t;
enum _RTLP_HP_LOCK_TYPE : uint32_t;
enum _HEAP_FAILURE_TYPE : uint32_t;
enum _LDR_DLL_LOAD_REASON : uint32_t;
enum _LDR_HOT_PATCH_STATE : uint32_t;
enum _HEAP_LFH_LOCKMODE : uint32_t;
enum _HEAP_SEG_RANGE_TYPE : uint32_t;
enum _RTLP_HP_ALLOCATOR : uint32_t;
enum _RTLP_HP_MEMORY_TYPE : uint32_t;
enum _KCLOCK_TIMER_DEADLINE_TYPE : uint32_t;
enum _IO_RATE_CONTROL_TYPE : uint32_t;
enum _KINTERRUPT_POLARITY : uint32_t;
enum _JOBOBJECTINFOCLASS : uint32_t;
enum _KE_WAKE_SOURCE_TYPE : uint32_t;
enum _PROCESS_SECTION_TYPE : uint32_t;
enum _KCLOCK_TIMER_ONE_SHOT_STATE : uint32_t;
enum _KWAIT_BLOCK_STATE : uint32_t;
enum _RTL_FEATURE_CONFIGURATION_PRIORITY : uint32_t;
enum _KHETERO_CPU_POLICY : uint32_t;
enum JOB_OBJECT_IO_RATE_CONTROL_FLAGS : uint32_t;
enum _LDR_DDAG_STATE : uint32_t;
enum _KOBJECTS : uint32_t;
enum _PS_STD_HANDLE_STATE : uint32_t;
enum _MEMORY_PHYSICAL_CONTIGUITY_UNIT_STATE : uint32_t;
enum _PS_WAKE_REASON : uint32_t;
enum _RTL_MEMORY_TYPE : uint32_t;
enum _KHETERO_RUNNING_TYPE : uint32_t;
enum _HARDWARE_COUNTER_TYPE : uint32_t;
enum _REFS_SET_VOLUME_COMPRESSION_INFO_FLAGS : uint32_t;
enum _REG_NOTIFY_CLASS : uint32_t;
enum _KTHREAD_TAG : uint32_t;
enum _KSOFTWARE_INTERRUPT_TARGET : uint32_t;
enum _PS_PROTECTED_TYPE : uint32_t;
enum _PROCESS_VA_TYPE : uint32_t;
enum _PS_RESOURCE_TYPE : uint32_t;
enum _HEAP_SEGMGR_LARGE_PAGE_POLICY : uint32_t;
enum _PERFINFO_KERNELMEMORY_USAGE_TYPE : uint32_t;
enum _REFS_STREAM_SNAPSHOT_OPERATION : uint32_t;
enum _IO_ALLOCATION_ACTION : uint32_t;
enum _PS_PROTECTED_SIGNER : uint32_t;
enum _WORKING_SET_TYPE : uint32_t;
enum _JOBOBJECT_PAGE_PRIORITY_LIMIT_FLAGS : uint32_t;
enum DISPLAYCONFIG_SCANLINE_ORDERING : uint32_t;
enum PS_CREATE_STATE : uint32_t;
enum _KTHREAD_PPM_POLICY : uint32_t;
enum _VRF_RULE_CLASS_ID : uint32_t;
enum _KPROCESS_PPM_POLICY : uint32_t;
enum _MEMORY_CACHING_TYPE_ORIG : uint32_t;
enum _INTERLOCKED_RESULT : uint32_t;
enum _SYSTEM_PROCESS_CLASSIFICATION : uint32_t;
enum _WOW64_SHARED_INFORMATION : uint32_t;
enum _PROCESSOR_CACHE_TYPE : uint32_t;
enum _KWAIT_STATE : uint32_t;
enum _USER_ACTIVITY_PRESENCE : uint32_t;
enum _INTERFACE_TYPE : uint32_t;
enum _KPROCESS_STATE : uint32_t;
enum _INVPCID_TYPE : uint32_t;
enum _TRACE_INFORMATION_CLASS : uint32_t;
enum _EXCEPTION_DISPOSITION : uint32_t;
enum _KISOLATION_WIDTH : uint32_t;
enum _KERNEL_SHADOW_STACK_TYPE : uint32_t;
enum _SECURITY_IMPERSONATION_LEVEL : uint32_t;
enum _PERFINFO_MM_STAT : uint32_t;
enum _SYSTEM_POOL_LIMIT_MEM_TYPE : uint32_t;
enum _PROC_HYPERVISOR_STATE : uint32_t;
enum _KHETERO_CPU_QOS : uint32_t;
enum _THREAD_WORKLOAD_CLASS : uint32_t;
enum _KTOPOLOGY_LEVEL : uint32_t;
enum _SYSTEM_FEATURE_CONFIGURATION_SECTION_TYPE : uint32_t;
enum _PS_ATTRIBUTE_NUM : uint32_t;
enum _SYSTEM_INFORMATION_CLASS : uint32_t;
enum _PROCESS_TERMINATE_REQUEST_REASON : uint32_t;
enum _VRF_TRIAGE_CONTEXT : uint32_t;
enum _EXQUEUEINDEX : uint32_t;
enum ReplacesCorHdrNumericDefines : uint32_t;
enum JOB_OBJECT_NET_RATE_CONTROL_FLAGS : uint32_t;
enum _KCONTINUE_TYPE : uint32_t;
enum PPM_IDLE_BUCKET_TIME_TYPE : uint32_t;
enum _OB_OPEN_REASON : uint32_t;
enum _SECURITY_OPERATION_CODE : uint32_t;
enum _SERVERSILO_STATE : uint32_t;
enum _RTL_GENERIC_COMPARE_RESULTS : uint32_t;
enum MCA_EXCEPTION_TYPE : uint32_t;
enum _FUNCTION_TABLE_TYPE : uint32_t;
enum _PROCESSOR_PRESENCE : uint32_t;
enum LSA_FOREST_TRUST_RECORD_TYPE : uint32_t;
enum _JOBOBJECT_IO_PRIORITY_LIMIT_FLAGS : uint32_t;
enum _MACHINE_CHECK_NESTING_LEVEL : uint32_t;
enum _MEM_DEDICATED_ATTRIBUTE_TYPE : uint32_t;
enum _IRQ_PRIORITY : uint32_t;
enum _FS_FILTER_SECTION_SYNC_TYPE : uint32_t;
struct _ACTIVATION_CONTEXT_STACK64;
struct _ACTIVATION_CONTEXT_STACK32;
struct _MM_DRIVER_VERIFIER_DATA;
struct _DRIVER_OBJECT;
struct _CURDIR;
struct _DRIVER_EXTENSION;
struct _OBJECT_NAME_INFORMATION;
struct _RTL_DRIVE_LETTER_CURDIR;
struct _WORK_QUEUE_ITEM;
struct _MCUPDATE_INFO;
struct _PEB_LDR_DATA;
struct _HEAP_LFH_SUBSEGMENT_OWNER;
struct _HEAP_VS_SUBSEGMENT;
struct _RTL_DYNAMIC_HASH_TABLE_ENTRY;
struct _PS_PROPERTY_SET;
struct _ACTIVATION_CONTEXT_STACK;
struct _DISPATCHER_HEADER;
struct _IO_TIMER;
struct _KDEVICE_QUEUE;
struct _KAPC;
struct _KAPC_STATE;
struct _KDEVICE_QUEUE_ENTRY;
struct _KWAIT_BLOCK;
struct _RTL_CRITICAL_SECTION_DEBUG;
struct _LFH_BLOCK_ZONE;
struct _HEAP_UCR_DESCRIPTOR;
struct _IO_MINI_COMPLETION_PACKET_USER;
struct _KTIMER_TABLE_ENTRY;
struct _PPM_VETO_ACCOUNTING;
struct _PPM_VETO_ENTRY;
struct _KDPC;
struct _RTL_HASH_ENTRY;
struct _KDPC_LIST;
struct _PEB;
struct _CC_FILE_SIZES;
union _WHEA_TIMESTAMP;
struct _NAMED_PIPE_CREATE_PARAMETERS;
struct _MAILSLOT_CREATE_PARAMETERS;
struct _LEAP_SECOND_DATA;
struct _KTIMER_EXPIRATION_TRACE;
struct _PPM_FFH_THROTTLE_STATE_INFO;
struct _SEP_RM_LSA_CONNECTION_STATE;
struct _FILE_BASIC_INFORMATION;
struct _FILE_NETWORK_OPEN_INFORMATION;
struct _FILE_STANDARD_INFORMATION;
struct _CM_PARTIAL_RESOURCE_DESCRIPTOR;
struct _JOB_RATE_CONTROL_HEADER;
struct _LUID_AND_ATTRIBUTES;
struct _HEAP_VAMGR_ALLOCATOR;
struct _HEAP_VAMGR_RANGE;
struct _HEAP_LARGE_ALLOC_DATA;
struct _KSCB;
struct _KSTATIC_AFFINITY_BLOCK;
struct _KSOFTWARE_INTERRUPT_BATCH;
struct _KLOCK_QUEUE_HANDLE;
struct _HEAP_LOCAL_DATA;
struct _HEAP_VS_DELAY_FREE_CONTEXT;
struct _USER_MEMORY_CACHE_ENTRY;
struct _HANDLE_TABLE_FREE_LIST;
struct _PS_DYNAMIC_ENFORCED_ADDRESS_RANGES;
struct _ALPC_PROCESS_CONTEXT;
struct _DBGK_SILOSTATE;
struct _WNF_LOCK;
struct _OBJECT_NAMESPACE_LOOKUPTABLE;
struct _DPH_BLOCK_INFORMATION;
struct _EVENT_HEADER;
struct _PS_IO_CONTROL_ENTRY;
struct _RTL_SPARSE_ARRAY;
struct _RTLP_HP_ALLOC_TRACKER;
struct _HEAP_LOCK;
struct _RTL_TRACE_DATABASE;
struct _HEAP_SUBSEGMENT;
struct _HEAP_VS_CHUNK_HEADER;
struct _HEAP_PAGE_RANGE_DESCRIPTOR;
struct _HEAP_SEG_CONTEXT;
struct _HEAP_LOCAL_SEGMENT_INFO;
struct _HANDLE_TRACE_DB_ENTRY;
struct _RTLP_HP_HEAP_GLOBALS;
struct _KERNEL_STACK_SEGMENT;
struct _RTLP_HP_METADATA_HEAP_CTX;
union _HANDLE_TABLE_ENTRY;
struct _PS_TRUSTLET_ATTRIBUTE_TYPE;
struct _REQUEST_MAILBOX;
struct _WHEA_AER_ENDPOINT_DESCRIPTOR;
struct _PS_PROCESS_WAKE_INFORMATION;
struct _MM_PAGE_ACCESS_INFO;
struct _RTL_HP_SUB_ALLOCATOR_CONFIGS;
struct _WHEA_AER_ROOTPORT_DESCRIPTOR;
struct _RTL_STACKDB_CONTEXT;
struct _RTL_STACK_DATABASE_LOCK;
union _PROCESS_EXECUTION;
struct _PROCESS_ENERGY_VALUES;
struct _PEB32;
struct _WHEA_AER_BRIDGE_DESCRIPTOR;
union _HEAP_LFH_SUBSEGMENT_STATS;
struct _KLOCK_ENTRY;
struct _ERESOURCE;
struct _RTL_STACK_TRACE_ENTRY;
struct _HEAP_LFH_SUBSEGMENT;
struct _MMSUPPORT_INSTANCE;
struct _THREAD_ENERGY_VALUES;
struct _PROCESS_ENERGY_VALUES_EXTENSION;
struct _KTRAP_FRAME;
struct _XSAVE_FORMAT;
struct _WHEA_DEVICE_DRIVER_DESCRIPTOR;
struct _HEAP_USERDATA_HEADER;
struct _SID;
struct _HEAP_RUNTIME_MEMORY_STATS;
struct _AUX_ACCESS_DATA;
struct _INVERTED_FUNCTION_TABLE_USER_MODE;
struct _DPH_HEAP_BLOCK;
struct _RTL_AVL_TABLE;
struct _KE_IDEAL_PROCESSOR_SET_BREAKPOINTS;
struct _WHEA_XPF_MC_BANK_DESCRIPTOR;
struct _PROC_PERF_HISTORY;
struct _HEAP_ENTRY;
struct _IMAGE_OPTIONAL_HEADER64;
struct _XSTATE_CONFIGURATION;
struct _WHEA_NOTIFICATION_DESCRIPTOR;
struct _KHETRO_HWFEEDBACK_TYPE;
struct _PEBS_DS_SAVE_AREA;
struct _MACHINE_CHECK_CONTEXT;
struct _PROCESSOR_IDLE_PREPARE_INFO;
struct _KTIMER_TABLE;
struct _KSPECIAL_REGISTERS;
struct _KSCHEDULER_SUBNODE;
struct _PPM_SELECTION_DEPENDENCY;
struct _RTL_NLS_STATE;
struct _PROC_PERF_CHECK;
struct _PROC_IDLE_STATE_ACCOUNTING;
struct _XSTATE_SAVE;
struct _RTL_TIME_ZONE_INFORMATION;
struct _SILO_USER_SHARED_DATA;
struct _TP_CALLBACK_ENVIRON_V3;
struct _GENERAL_LOOKASIDE;
struct _GENERAL_LOOKASIDE_POOL;
struct _OBJECT_TYPE_INITIALIZER;
struct _EWOW64PROCESS;
struct SYSTEM_POWER_CAPABILITIES;
struct _IO_PRIORITY_INFO;
struct _MM_PAGE_ACCESS_INFO_HEADER;
struct _DEVICE_CAPABILITIES;
union _POWER_STATE;
struct _WHEA_EVENT_LOG_ENTRY_HEADER;
struct _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR;
struct _WHEA_ERROR_PACKET_V2;
struct _LDR_DATA_TABLE_ENTRY;
struct _KCLOCK_TIMER_STATE;
struct _LDR_DDAG_NODE;
struct _COUNTER_READING;
struct _CACHE_DESCRIPTOR;
struct _SECURITY_QUALITY_OF_SERVICE;
struct _SECURITY_SUBJECT_CONTEXT;
struct _MCA_EXCEPTION;
struct _DYNAMIC_FUNCTION_TABLE;
struct _PROC_PERF_DOMAIN;
struct _PROC_PERF_CONSTRAINT;
struct _IO_RESOURCE_DESCRIPTOR;
union _FS_FILTER_PARAMETERS;
struct _TEB64;
struct _TEB32;
struct _RTL_USER_PROCESS_PARAMETERS;
struct _ENODE;
struct _HEAP_LFH_BUCKET;
struct _HEAP_LFH_AFFINITY_SLOT;
struct _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR;
struct _TEB;
struct _KPROCESS;
struct _KEVENT;
struct _KGATE;
struct _KSEMAPHORE;
struct _KTIMER;
struct _KQUEUE;
struct _IRP;
struct _WAIT_CONTEXT_BLOCK;
struct _PPM_IDLE_STATE;
struct _KSINGLE_DPC_SOFT_TIMEOUT_EVENT_INFO;
struct _KENTROPY_TIMING_STATE;
struct _KDPC_DATA;
struct _WHEA_ERROR_RECORD_HEADER;
struct _PROCESSOR_POWER_STATE;
struct _CM_PARTIAL_RESOURCE_LIST;
struct _PRIVILEGE_SET;
struct _INITIAL_PRIVILEGE_SET;
struct _KSCHEDULING_GROUP;
struct _HEAP_VS_CONTEXT;
struct _LFH_HEAP;
struct _HANDLE_TABLE;
struct _WNF_SILODRIVERSTATE;
struct _OBP_SILODRIVERSTATE;
struct _EVENT_RECORD;
struct _HEAP_VAMGR_VASPACE;
struct _HEAP_VS_CHUNK_FREE_HEADER;
union _HEAP_PAGE_SEGMENT;
struct _KSTACK_CONTROL;
struct _PS_TRUSTLET_ATTRIBUTE_HEADER;
struct _RTL_STD_LIST_HEAD;
struct _HEAP_LFH_CONTEXT;
struct _MMSUPPORT_FULL;
struct _PROCESS_EXTENDED_ENERGY_VALUES;
struct _XSAVE_AREA;
struct _CONTEXT;
struct _FILE_GET_QUOTA_INFORMATION;
struct _DPH_HEAP_ROOT;
struct _KE_IDEAL_PROCESSOR_ASSIGNMENT_BLOCK;
struct _WHEA_XPF_MCE_DESCRIPTOR;
struct _HEAP_SEGMENT;
struct _HEAP_VIRTUAL_ALLOC_ENTRY;
struct _HEAP_FREE_ENTRY;
struct _IMAGE_NT_HEADERS64;
struct _KUSER_SHARED_DATA;
struct _WHEA_XPF_CMC_DESCRIPTOR;
struct _WHEA_GENERIC_ERROR_DESCRIPTOR_V2;
struct _WHEA_GENERIC_ERROR_DESCRIPTOR;
struct _PROCESSOR_PROFILE_CONTROL_AREA;
struct _PROC_IDLE_ACCOUNTING;
struct _RTL_DYNAMIC_TIME_ZONE_INFORMATION;
struct _LOOKASIDE_LIST_EX;
struct _OBJECT_TYPE;
struct _IO_STACK_LOCATION;
struct _WHEA_EVENT_LOG_ENTRY;
struct _KTHREAD_COUNTERS;
struct _THREAD_PERFORMANCE_DATA;
struct _IO_RESOURCE_LIST;
struct _FS_FILTER_CALLBACK_DATA;
struct _FAST_MUTEX;
struct _EJOB;
struct _FILE_OBJECT;
struct _PF_KERNEL_GLOBALS;
struct _KTHREAD;
struct _TIMEZONE_CHANGE_EVENT;
struct _DEVICE_OBJECT;
struct _PPM_IDLE_STATES;
struct _WHEA_ERROR_RECORD;
struct _CM_FULL_RESOURCE_DESCRIPTOR;
struct _ACCESS_STATE;
struct _ESERVERSILO_GLOBALS;
struct _HEAP_VAMGR_CTX;
struct _PS_TRUSTLET_ATTRIBUTE_DATA;
struct _STACK_TRACE_DATABASE;
struct _SEGMENT_HEAP;
struct _KPROCESSOR_STATE;
struct _HEAP_FAILURE_INFORMATION;
struct _EPROCESS;
struct _HEAP;
struct _WHEA_ERROR_SOURCE_DESCRIPTOR;
struct _IO_RESOURCE_REQUIREMENTS_LIST;
struct _HANDLE_TRACE_DEBUG_INFO;
struct _ETHREAD;
struct _EX_TIMEZONE_STATE;
struct _CM_RESOURCE_LIST;
struct _RTLP_HP_HEAP_MANAGER;
struct _PS_TRUSTLET_CREATE_ATTRIBUTES;
struct _KPRCB;
struct _KPCR;

struct LIST_ENTRY64
{
    /* 00 */ uint64_t Flink;
    /* 08 */ uint64_t Blink;
};

struct LIST_ENTRY32
{
    /* 00 */ uint32_t Flink;
    /* 04 */ uint32_t Blink;
};

union _ARM64_FPCR_REG
{
    /* 00 */ uint32_t Value;
    /* 00:0 */ uint32_t res0_1  : 8;
    /* 00:8 */ uint32_t IOE     : 1;
    /* 00:9 */ uint32_t DZE     : 1;
    /* 00:10 */ uint32_t OFE    : 1;
    /* 00:11 */ uint32_t UFE    : 1;
    /* 00:12 */ uint32_t IXE    : 1;
    /* 00:13 */ uint32_t res0_2 : 2;
    /* 00:15 */ uint32_t IDE    : 1;
    /* 00:16 */ uint32_t Len    : 3;
    /* 00:19 */ uint32_t FZ16   : 1;
    /* 00:20 */ uint32_t Stride : 2;
    /* 00:22 */ uint32_t RMode  : 2;
    /* 00:24 */ uint32_t FZ     : 1;
    /* 00:25 */ uint32_t DN     : 1;
    /* 00:26 */ uint32_t AHP    : 1;
    /* 00:27 */ uint32_t res0_3 : 5;
};
using ARM64_FPCR_REG  = union _ARM64_FPCR_REG;
using PARM64_FPCR_REG = union _ARM64_FPCR_REG*;

union _ARM64_FPSR_REG
{
    /* 00 */ uint32_t Value;
    /* 00:0 */ uint32_t IOC    : 1;
    /* 00:1 */ uint32_t DZC    : 1;
    /* 00:2 */ uint32_t OFC    : 1;
    /* 00:3 */ uint32_t UFC    : 1;
    /* 00:4 */ uint32_t IXC    : 1;
    /* 00:5 */ uint32_t res0_1 : 2;
    /* 00:7 */ uint32_t IDC    : 1;
    /* 00:8 */ uint32_t res0_2 : 19;
    /* 00:27 */ uint32_t QC    : 1;
    /* 00:28 */ uint32_t V     : 1;
    /* 00:29 */ uint32_t C     : 1;
    /* 00:30 */ uint32_t Z     : 1;
    /* 00:31 */ uint32_t N     : 1;
};
using ARM64_FPSR_REG  = union _ARM64_FPSR_REG;
using PARM64_FPSR_REG = union _ARM64_FPSR_REG*;

union _AMD64_MXCSR_REG
{
    /* 00 */ uint32_t Value;
    /* 00:0 */ uint32_t IE   : 1;
    /* 00:1 */ uint32_t DE   : 1;
    /* 00:2 */ uint32_t ZE   : 1;
    /* 00:3 */ uint32_t OE   : 1;
    /* 00:4 */ uint32_t UE   : 1;
    /* 00:5 */ uint32_t PE   : 1;
    /* 00:6 */ uint32_t DAZ  : 1;
    /* 00:7 */ uint32_t IM   : 1;
    /* 00:8 */ uint32_t DM   : 1;
    /* 00:9 */ uint32_t ZM   : 1;
    /* 00:10 */ uint32_t OM  : 1;
    /* 00:11 */ uint32_t UM  : 1;
    /* 00:12 */ uint32_t PM  : 1;
    /* 00:13 */ uint32_t RC  : 2;
    /* 00:15 */ uint32_t FZ  : 1;
    /* 00:16 */ uint32_t res : 16;
};
using AMD64_MXCSR_REG  = union _AMD64_MXCSR_REG;
using PAMD64_MXCSR_REG = union _AMD64_MXCSR_REG*;

struct _PS_MITIGATION_OPTIONS_MAP
{
    /* 00 */ std::array<uint64_t, 3> Map;
};
using PS_MITIGATION_OPTIONS_MAP  = struct _PS_MITIGATION_OPTIONS_MAP;
using PPS_MITIGATION_OPTIONS_MAP = struct _PS_MITIGATION_OPTIONS_MAP*;

struct _PS_MITIGATION_AUDIT_OPTIONS_MAP
{
    /* 00 */ std::array<uint64_t, 3> Map;
};
using PS_MITIGATION_AUDIT_OPTIONS_MAP  = struct _PS_MITIGATION_AUDIT_OPTIONS_MAP;
using PPS_MITIGATION_AUDIT_OPTIONS_MAP = struct _PS_MITIGATION_AUDIT_OPTIONS_MAP*;

struct _ACTIVATION_CONTEXT_DATA
{
};
using ACTIVATION_CONTEXT_DATA  = struct _ACTIVATION_CONTEXT_DATA;
using PACTIVATION_CONTEXT_DATA = struct _ACTIVATION_CONTEXT_DATA*;

struct _ASSEMBLY_STORAGE_MAP
{
};
using ASSEMBLY_STORAGE_MAP  = struct _ASSEMBLY_STORAGE_MAP;
using PASSEMBLY_STORAGE_MAP = struct _ASSEMBLY_STORAGE_MAP*;

struct _CHPEV2_PROCESS_INFO
{
};
using CHPEV2_PROCESS_INFO  = struct _CHPEV2_PROCESS_INFO;
using PCHPEV2_PROCESS_INFO = struct _CHPEV2_PROCESS_INFO*;

struct _UNICODE_STRING
{
    /* 00 */ uint16_t Length;
    /* 02 */ uint16_t MaximumLength;
    /* 08 */ wchar_t* Buffer;
};
using UNICODE_STRING  = struct _UNICODE_STRING;
using PUNICODE_STRING = struct _UNICODE_STRING*;

struct _STRING
{
    /* 00 */ uint16_t Length;
    /* 02 */ uint16_t MaximumLength;
    /* 08 */ char* Buffer;
};
using STRING  = struct _STRING;
using PSTRING = struct _STRING*;

struct _LDR_HOT_PATCH_DATA
{
    /* 00 */ uint32_t Version;
    /* 08 */ std::function<int32_t(wchar_t*, uint32_t*, _UNICODE_STRING*, void**)> PatchLoadLibrary;
    /* 10 */ std::function<int32_t(void*, _STRING*, uint32_t, void**)> PatchGetProcAddress;
};
using LDR_HOT_PATCH_DATA  = struct _LDR_HOT_PATCH_DATA;
using PLDR_HOT_PATCH_DATA = struct _LDR_HOT_PATCH_DATA*;

struct _KSYSTEM_TIME
{
    /* 00 */ uint32_t LowPart;
    /* 04 */ int32_t High1Time;
    /* 08 */ int32_t High2Time;
};
using KSYSTEM_TIME  = struct _KSYSTEM_TIME;
using PKSYSTEM_TIME = struct _KSYSTEM_TIME*;

union _ULARGE_INTEGER
{
    /* 00 */ uint32_t LowPart;
    /* 04 */ uint32_t HighPart;
    /* 00 */ struct
    {
        /* 00 */ uint32_t LowPart;
        /* 04 */ uint32_t HighPart;
    } u;

    /* 00 */ uint64_t QuadPart;
};
using ULARGE_INTEGER  = union _ULARGE_INTEGER;
using PULARGE_INTEGER = union _ULARGE_INTEGER*;

struct _TP_POOL
{
};
using TP_POOL  = struct _TP_POOL;
using PTP_POOL = struct _TP_POOL*;

struct _TP_CLEANUP_GROUP
{
};
using TP_CLEANUP_GROUP  = struct _TP_CLEANUP_GROUP;
using PTP_CLEANUP_GROUP = struct _TP_CLEANUP_GROUP*;

struct _ACTIVATION_CONTEXT
{
};
using ACTIVATION_CONTEXT  = struct _ACTIVATION_CONTEXT;
using PACTIVATION_CONTEXT = struct _ACTIVATION_CONTEXT*;

struct _TP_CALLBACK_INSTANCE
{
};
using TP_CALLBACK_INSTANCE  = struct _TP_CALLBACK_INSTANCE;
using PTP_CALLBACK_INSTANCE = struct _TP_CALLBACK_INSTANCE*;

struct _CHPEV2_CPUAREA_INFO
{
};
using CHPEV2_CPUAREA_INFO  = struct _CHPEV2_CPUAREA_INFO;
using PCHPEV2_CPUAREA_INFO = struct _CHPEV2_CPUAREA_INFO*;

struct _LIST_ENTRY
{
    /* 00 */ _LIST_ENTRY* Flink;
    /* 08 */ _LIST_ENTRY* Blink;
};
using LIST_ENTRY  = struct _LIST_ENTRY;
using PLIST_ENTRY = struct _LIST_ENTRY*;

struct _SINGLE_LIST_ENTRY
{
    /* 00 */ _SINGLE_LIST_ENTRY* Next;
};
using SINGLE_LIST_ENTRY  = struct _SINGLE_LIST_ENTRY;
using PSINGLE_LIST_ENTRY = struct _SINGLE_LIST_ENTRY*;

struct _RTL_SPLAY_LINKS
{
    /* 00 */ _RTL_SPLAY_LINKS* Parent;
    /* 08 */ _RTL_SPLAY_LINKS* LeftChild;
    /* 10 */ _RTL_SPLAY_LINKS* RightChild;
};
using RTL_SPLAY_LINKS  = struct _RTL_SPLAY_LINKS;
using PRTL_SPLAY_LINKS = struct _RTL_SPLAY_LINKS*;

struct _RTL_DYNAMIC_HASH_TABLE_CONTEXT
{
    /* 00 */ _LIST_ENTRY* ChainHead;
    /* 08 */ _LIST_ENTRY* PrevLinkage;
    /* 10 */ uint64_t Signature;
};
using RTL_DYNAMIC_HASH_TABLE_CONTEXT  = struct _RTL_DYNAMIC_HASH_TABLE_CONTEXT;
using PRTL_DYNAMIC_HASH_TABLE_CONTEXT = struct _RTL_DYNAMIC_HASH_TABLE_CONTEXT*;

struct _RTL_DYNAMIC_HASH_TABLE
{
    /* 00 */ uint32_t Flags;
    /* 04 */ uint32_t Shift;
    /* 08 */ uint32_t TableSize;
    /* 0c */ uint32_t Pivot;
    /* 10 */ uint32_t DivisorMask;
    /* 14 */ uint32_t NumEntries;
    /* 18 */ uint32_t NonEmptyBuckets;
    /* 1c */ uint32_t NumEnumerators;
    /* 20 */ void* Directory;
};
using RTL_DYNAMIC_HASH_TABLE  = struct _RTL_DYNAMIC_HASH_TABLE;
using PRTL_DYNAMIC_HASH_TABLE = struct _RTL_DYNAMIC_HASH_TABLE*;

union _LARGE_INTEGER
{
    /* 00 */ uint32_t LowPart;
    /* 04 */ int32_t HighPart;
    /* 00 */ struct
    {
        /* 00 */ uint32_t LowPart;
        /* 04 */ int32_t HighPart;
    } u;

    /* 00 */ int64_t QuadPart;
};
using LARGE_INTEGER  = union _LARGE_INTEGER;
using PLARGE_INTEGER = union _LARGE_INTEGER*;

struct _RTL_BITMAP
{
    /* 00 */ uint32_t SizeOfBitMap;
    /* 08 */ uint32_t* Buffer;
};
using RTL_BITMAP  = struct _RTL_BITMAP;
using PRTL_BITMAP = struct _RTL_BITMAP*;

struct _LUID
{
    /* 00 */ uint32_t LowPart;
    /* 04 */ int32_t HighPart;
};
using LUID  = struct _LUID;
using PLUID = struct _LUID*;

struct _CUSTOM_SYSTEM_EVENT_TRIGGER_CONFIG
{
    /* 00 */ uint32_t Size;
    /* 08 */ wchar_t* TriggerId;
};
using CUSTOM_SYSTEM_EVENT_TRIGGER_CONFIG  = struct _CUSTOM_SYSTEM_EVENT_TRIGGER_CONFIG;
using PCUSTOM_SYSTEM_EVENT_TRIGGER_CONFIG = struct _CUSTOM_SYSTEM_EVENT_TRIGGER_CONFIG*;

struct _IMAGE_DOS_HEADER
{
    /* 00 */ uint16_t e_magic;
    /* 02 */ uint16_t e_cblp;
    /* 04 */ uint16_t e_cp;
    /* 06 */ uint16_t e_crlc;
    /* 08 */ uint16_t e_cparhdr;
    /* 0a */ uint16_t e_minalloc;
    /* 0c */ uint16_t e_maxalloc;
    /* 0e */ uint16_t e_ss;
    /* 10 */ uint16_t e_sp;
    /* 12 */ uint16_t e_csum;
    /* 14 */ uint16_t e_ip;
    /* 16 */ uint16_t e_cs;
    /* 18 */ uint16_t e_lfarlc;
    /* 1a */ uint16_t e_ovno;
    /* 1c */ std::array<uint16_t, 4> e_res;
    /* 24 */ uint16_t e_oemid;
    /* 26 */ uint16_t e_oeminfo;
    /* 28 */ std::array<uint16_t, 10> e_res2;
    /* 3c */ int32_t e_lfanew;
};
using IMAGE_DOS_HEADER  = struct _IMAGE_DOS_HEADER;
using PIMAGE_DOS_HEADER = struct _IMAGE_DOS_HEADER*;

struct _RTL_RB_TREE
{
    /* 00 */ _RTL_BALANCED_NODE* Root;
    /* 08:0 */ uint8_t Encoded : 1;
    /* 08 */ _RTL_BALANCED_NODE* Min;
};
using RTL_RB_TREE  = struct _RTL_RB_TREE;
using PRTL_RB_TREE = struct _RTL_RB_TREE*;

struct _RTL_BALANCED_NODE
{
    /* 00 */ std::array<_RTL_BALANCED_NODE*, 2> Children;
    /* 00 */ _RTL_BALANCED_NODE* Left;
    /* 08 */ _RTL_BALANCED_NODE* Right;
    /* 10:0 */ uint8_t Red     : 1;
    /* 10:0 */ uint8_t Balance : 2;
    /* 10 */ uint64_t ParentValue;
};
using RTL_BALANCED_NODE  = struct _RTL_BALANCED_NODE;
using PRTL_BALANCED_NODE = struct _RTL_BALANCED_NODE*;

struct _RTL_AVL_TREE
{
    /* 00 */ _RTL_BALANCED_NODE* Root;
};
using RTL_AVL_TREE  = struct _RTL_AVL_TREE;
using PRTL_AVL_TREE = struct _RTL_AVL_TREE*;

struct _GUID
{
    /* 00 */ uint32_t Data1;
    /* 04 */ uint16_t Data2;
    /* 06 */ uint16_t Data3;
    /* 08 */ std::array<uint8_t, 8> Data4;
};
using GUID  = struct _GUID;
using PGUID = struct _GUID*;

union _KPRIORITY_STATE
{
};
using KPRIORITY_STATE  = union _KPRIORITY_STATE;
using PKPRIORITY_STATE = union _KPRIORITY_STATE*;

struct _KPRCB_TRACEPOINT_LOG
{
};
using KPRCB_TRACEPOINT_LOG  = struct _KPRCB_TRACEPOINT_LOG;
using PKPRCB_TRACEPOINT_LOG = struct _KPRCB_TRACEPOINT_LOG*;

struct _KSHARED_READY_QUEUE
{
};
using KSHARED_READY_QUEUE  = struct _KSHARED_READY_QUEUE;
using PKSHARED_READY_QUEUE = struct _KSHARED_READY_QUEUE*;

struct _KFLOATING_SAVE
{
    /* 00 */ uint32_t Dummy;
};
using KFLOATING_SAVE  = struct _KFLOATING_SAVE;
using PKFLOATING_SAVE = struct _KFLOATING_SAVE*;

union _INVPCID_DESCRIPTOR
{
    /* 00 */ struct
    {
        /* 00:0 */ uint64_t Pcid      : 12;
        /* 00:12 */ uint64_t Reserved : 52;
        /* 00 */ uint64_t EntirePcid;
        /* 08 */ uint64_t Virtual;
    } IndividualAddress;

    /* 00 */ struct
    {
        /* 00:0 */ uint64_t Pcid      : 12;
        /* 00:12 */ uint64_t Reserved : 52;
        /* 00 */ uint64_t EntirePcid;
        /* 08 */ uint64_t Reserved2;
    } SingleContext;

    /* 00 */ struct
    {
        /* 00 */ std::array<uint64_t, 2> Reserved;
    } AllContextAndGlobals;

    /* 00 */ struct
    {
        /* 00 */ std::array<uint64_t, 2> Reserved;
    } AllContext;
};
using INVPCID_DESCRIPTOR  = union _INVPCID_DESCRIPTOR;
using PINVPCID_DESCRIPTOR = union _INVPCID_DESCRIPTOR*;

struct _SINGLE_LIST_ENTRY32
{
    /* 00 */ uint32_t Next;
};
using SINGLE_LIST_ENTRY32  = struct _SINGLE_LIST_ENTRY32;
using PSINGLE_LIST_ENTRY32 = struct _SINGLE_LIST_ENTRY32*;

struct _KAFFINITY_EX
{
    /* 00 */ uint16_t Count;
    /* 02 */ uint16_t Size;
    /* 04 */ uint32_t Reserved;
    /* 08 */ std::array<uint64_t, 1> Bitmap;
    /* 08 */ std::array<uint64_t, 32> StaticBitmap;
};
using KAFFINITY_EX  = struct _KAFFINITY_EX;
using PKAFFINITY_EX = struct _KAFFINITY_EX*;

struct _EXT_SET_PARAMETERS_V0
{
    /* 00 */ uint32_t Version;
    /* 04 */ uint32_t Reserved;
    /* 08 */ int64_t NoWakeTolerance;
};
using EXT_SET_PARAMETERS_V0  = struct _EXT_SET_PARAMETERS_V0;
using PEXT_SET_PARAMETERS_V0 = struct _EXT_SET_PARAMETERS_V0*;

struct _TRUSTLET_MAILBOX_KEY
{
    /* 00 */ std::array<uint64_t, 2> SecretValue;
};
using TRUSTLET_MAILBOX_KEY  = struct _TRUSTLET_MAILBOX_KEY;
using PTRUSTLET_MAILBOX_KEY = struct _TRUSTLET_MAILBOX_KEY*;

struct _TRUSTLET_COLLABORATION_ID
{
    /* 00 */ std::array<uint64_t, 2> Value;
};
using TRUSTLET_COLLABORATION_ID  = struct _TRUSTLET_COLLABORATION_ID;
using PTRUSTLET_COLLABORATION_ID = struct _TRUSTLET_COLLABORATION_ID*;

struct _KNODE
{
    /* 00 */ uint16_t NodeNumber;
    /* 02 */ uint16_t PrimaryNodeNumber;
    /* 04 */ uint32_t ProximityId;
    /* 08 */ uint16_t MaximumProcessors;
    /* 0a */ struct
    {
        /* 00:0 */ uint8_t ProcessorOnly      : 1;
        /* 00:1 */ uint8_t GroupsAssigned     : 1;
        /* 00:2 */ uint8_t MeasurableDistance : 1;
    } Flags;

    /* 0b */ uint8_t GroupSeed;
    /* 0c */ uint8_t PrimaryGroup;
    /* 0d */ std::array<uint8_t, 3> Padding;
    /* 10 */ uint32_t ActiveGroups;
    /* 18 */ std::array<_KSCHEDULER_SUBNODE*, 32> SchedulerSubNodes;
    /* 118 */ std::array<uint32_t, 5> ActiveTopologyElements;
};
using KNODE  = struct _KNODE;
using PKNODE = struct _KNODE*;

union _KSTACK_COUNT
{
    /* 00 */ int32_t Value;
    /* 00:0 */ uint32_t State      : 3;
    /* 00:3 */ uint32_t StackCount : 29;
};
using KSTACK_COUNT  = union _KSTACK_COUNT;
using PKSTACK_COUNT = union _KSTACK_COUNT*;

struct _KSPIN_LOCK_QUEUE
{
    /* 00 */ _KSPIN_LOCK_QUEUE* Next;
    /* 08 */ uint64_t* Lock;
};
using KSPIN_LOCK_QUEUE  = struct _KSPIN_LOCK_QUEUE;
using PKSPIN_LOCK_QUEUE = struct _KSPIN_LOCK_QUEUE*;

union _SLIST_HEADER
{
    /* 00 */ uint64_t Alignment;
    /* 08 */ uint64_t Region;
    /* 00 */ struct
    {
        /* 00:0 */ uint64_t Depth     : 16;
        /* 00:16 */ uint64_t Sequence : 48;
        /* 08:0 */ uint64_t Reserved  : 4;
        /* 08:4 */ uint64_t NextEntry : 60;
    } HeaderX64;
};
using SLIST_HEADER  = union _SLIST_HEADER;
using PSLIST_HEADER = union _SLIST_HEADER*;

struct _IO_STATUS_BLOCK
{
    /* 00 */ int32_t Status;
    /* 00 */ void* Pointer;
    /* 08 */ uint64_t Information;
};
using IO_STATUS_BLOCK  = struct _IO_STATUS_BLOCK;
using PIO_STATUS_BLOCK = struct _IO_STATUS_BLOCK*;

struct _QUAD
{
    /* 00 */ int64_t UseThisFieldToCopy;
    /* 00 */ double DoNotUseThisField;
};
using QUAD  = struct _QUAD;
using PQUAD = struct _QUAD*;

struct _EXT_DELETE_PARAMETERS
{
    /* 00 */ uint32_t Version;
    /* 04 */ uint32_t Reserved;
    /* 08 */ std::function<void(void*)> DeleteCallback;
    /* 10 */ void* DeleteContext;
};
using EXT_DELETE_PARAMETERS  = struct _EXT_DELETE_PARAMETERS;
using PEXT_DELETE_PARAMETERS = struct _EXT_DELETE_PARAMETERS*;

struct _EX_PUSH_LOCK
{
    /* 00:0 */ uint64_t Locked         : 1;
    /* 00:1 */ uint64_t Waiting        : 1;
    /* 00:2 */ uint64_t Waking         : 1;
    /* 00:3 */ uint64_t MultipleShared : 1;
    /* 00:4 */ uint64_t Shared         : 60;
    /* 00 */ uint64_t Value;
    /* 00 */ void* Ptr;
};
using EX_PUSH_LOCK  = struct _EX_PUSH_LOCK;
using PEX_PUSH_LOCK = struct _EX_PUSH_LOCK*;

struct _PP_LOOKASIDE_LIST
{
    /* 00 */ _GENERAL_LOOKASIDE* P;
    /* 08 */ _GENERAL_LOOKASIDE* L;
};
using PP_LOOKASIDE_LIST  = struct _PP_LOOKASIDE_LIST;
using PPP_LOOKASIDE_LIST = struct _PP_LOOKASIDE_LIST*;

struct _SLIST_ENTRY
{
    /* 00 */ _SLIST_ENTRY* Next;
};
using SLIST_ENTRY  = struct _SLIST_ENTRY;
using PSLIST_ENTRY = struct _SLIST_ENTRY*;

struct _HANDLE_TABLE_ENTRY_INFO
{
    /* 00 */ uint32_t AuditMask;
    /* 04 */ uint32_t MaxRelativeAccessMask;
};
using HANDLE_TABLE_ENTRY_INFO  = struct _HANDLE_TABLE_ENTRY_INFO;
using PHANDLE_TABLE_ENTRY_INFO = struct _HANDLE_TABLE_ENTRY_INFO*;

struct _EX_FAST_REF
{
    /* 00 */ void* Object;
    /* 00:0 */ uint64_t RefCnt : 4;
    /* 00 */ uint64_t Value;
};
using EX_FAST_REF  = struct _EX_FAST_REF;
using PEX_FAST_REF = struct _EX_FAST_REF*;

struct _OBJECT_HANDLE_INFORMATION
{
    /* 00 */ uint32_t HandleAttributes;
    /* 04 */ uint32_t GrantedAccess;
};
using OBJECT_HANDLE_INFORMATION  = struct _OBJECT_HANDLE_INFORMATION;
using POBJECT_HANDLE_INFORMATION = struct _OBJECT_HANDLE_INFORMATION*;

struct _PAGEFAULT_HISTORY
{
};
using PAGEFAULT_HISTORY  = struct _PAGEFAULT_HISTORY;
using PPAGEFAULT_HISTORY = struct _PAGEFAULT_HISTORY*;

struct _MM_SESSION_SPACE
{
};
using MM_SESSION_SPACE  = struct _MM_SESSION_SPACE;
using PMM_SESSION_SPACE = struct _MM_SESSION_SPACE*;

struct _EPROCESS_QUOTA_BLOCK
{
};
using EPROCESS_QUOTA_BLOCK  = struct _EPROCESS_QUOTA_BLOCK;
using PEPROCESS_QUOTA_BLOCK = struct _EPROCESS_QUOTA_BLOCK*;

struct _PO_PROCESS_ENERGY_CONTEXT
{
};
using PO_PROCESS_ENERGY_CONTEXT  = struct _PO_PROCESS_ENERGY_CONTEXT;
using PPO_PROCESS_ENERGY_CONTEXT = struct _PO_PROCESS_ENERGY_CONTEXT*;

union _PS_INTERLOCKED_TIMER_DELAY_VALUES
{
    /* 00:0 */ uint64_t DelayMs             : 30;
    /* 00:30 */ uint64_t CoalescingWindowMs : 30;
    /* 00:60 */ uint64_t Reserved           : 1;
    /* 00:61 */ uint64_t NewTimerWheel      : 1;
    /* 00:62 */ uint64_t Retry              : 1;
    /* 00:63 */ uint64_t Locked             : 1;
    /* 00 */ uint64_t All;
};
using PS_INTERLOCKED_TIMER_DELAY_VALUES  = union _PS_INTERLOCKED_TIMER_DELAY_VALUES;
using PPS_INTERLOCKED_TIMER_DELAY_VALUES = union _PS_INTERLOCKED_TIMER_DELAY_VALUES*;

struct _PS_NTDLL_EXPORTS
{
    /* 00 */ void* LdrSystemDllInitBlock;
    /* 08 */ void* LdrInitializeThunk;
    /* 10 */ void* RtlUserThreadStart;
    /* 18 */ void* RtlUserFiberStart;
    /* 20 */ void* KiUserExceptionDispatcher;
    /* 28 */ void* KiUserApcDispatcher;
    /* 30 */ void* KiUserCallbackDispatcher;
    /* 38 */ void* KiUserCallbackDispatcherReturn;
    /* 40 */ void* KiRaiseUserExceptionDispatcher;
    /* 48 */ void* ExpInterlockedPopEntrySListEnd;
    /* 50 */ void* ExpInterlockedPopEntrySListFault;
    /* 58 */ void* ExpInterlockedPopEntrySListResume;
    /* 60 */ void* RtlpFreezeTimeBias;
    /* 68 */ void* KiUserInvertedFunctionTable;
    /* 70 */ void* WerReportExceptionWorker;
    /* 78 */ void* RtlCallEnclaveReturn;
    /* 80 */ void* RtlEnclaveCallDispatch;
    /* 88 */ void* RtlEnclaveCallDispatchReturn;
    /* 90 */ void* RtlRaiseExceptionForReturnAddressHijack;
    /* 98 */ void* KiUserEmulationDispatcher;
    /* a0 */ void* LdrHotPatchNotify;
};
using PS_NTDLL_EXPORTS  = struct _PS_NTDLL_EXPORTS;
using PPS_NTDLL_EXPORTS = struct _PS_NTDLL_EXPORTS*;

struct _IORING_OBJECT
{
};
using IORING_OBJECT  = struct _IORING_OBJECT;
using PIORING_OBJECT = struct _IORING_OBJECT*;

struct _SCSI_REQUEST_BLOCK
{
};
using SCSI_REQUEST_BLOCK  = struct _SCSI_REQUEST_BLOCK;
using PSCSI_REQUEST_BLOCK = struct _SCSI_REQUEST_BLOCK*;

struct _ECP_LIST
{
};
using ECP_LIST  = struct _ECP_LIST;
using PECP_LIST = struct _ECP_LIST*;

struct _IO_DRIVER_CREATE_CONTEXT
{
    /* 00 */ int16_t Size;
    /* 08 */ _ECP_LIST* ExtraCreateParameter;
    /* 10 */ void* DeviceObjectHint;
    /* 18 */ _TXN_PARAMETER_BLOCK* TxnParameters;
    /* 20 */ _EJOB* SiloContext;
};
using IO_DRIVER_CREATE_CONTEXT  = struct _IO_DRIVER_CREATE_CONTEXT;
using PIO_DRIVER_CREATE_CONTEXT = struct _IO_DRIVER_CREATE_CONTEXT*;

struct _JOB_ACCESS_STATE
{
};
using JOB_ACCESS_STATE  = struct _JOB_ACCESS_STATE;
using PJOB_ACCESS_STATE = struct _JOB_ACCESS_STATE*;

struct _JOB_NOTIFICATION_INFORMATION
{
};
using JOB_NOTIFICATION_INFORMATION  = struct _JOB_NOTIFICATION_INFORMATION;
using PJOB_NOTIFICATION_INFORMATION = struct _JOB_NOTIFICATION_INFORMATION*;

struct _JOB_CPU_RATE_CONTROL
{
};
using JOB_CPU_RATE_CONTROL  = struct _JOB_CPU_RATE_CONTROL;
using PJOB_CPU_RATE_CONTROL = struct _JOB_CPU_RATE_CONTROL*;

struct _PSP_STORAGE
{
};
using PSP_STORAGE  = struct _PSP_STORAGE;
using PPSP_STORAGE = struct _PSP_STORAGE*;

struct _JOB_NET_RATE_CONTROL
{
};
using JOB_NET_RATE_CONTROL  = struct _JOB_NET_RATE_CONTROL;
using PJOB_NET_RATE_CONTROL = struct _JOB_NET_RATE_CONTROL*;

struct _MDL
{
    /* 00 */ _MDL* Next;
    /* 08 */ int16_t Size;
    /* 0a */ int16_t MdlFlags;
    /* 0c */ uint16_t AllocationProcessorNumber;
    /* 0e */ uint16_t Reserved;
    /* 10 */ _EPROCESS* Process;
    /* 18 */ void* MappedSystemVa;
    /* 20 */ void* StartVa;
    /* 28 */ uint32_t ByteCount;
    /* 2c */ uint32_t ByteOffset;
};
using MDL  = struct _MDL;
using PMDL = struct _MDL*;

struct _SECTION_OBJECT_POINTERS
{
    /* 00 */ void* DataSectionObject;
    /* 08 */ void* SharedCacheMap;
    /* 10 */ void* ImageSectionObject;
};
using SECTION_OBJECT_POINTERS  = struct _SECTION_OBJECT_POINTERS;
using PSECTION_OBJECT_POINTERS = struct _SECTION_OBJECT_POINTERS*;

struct _EVENT_DATA_DESCRIPTOR
{
    /* 00 */ uint64_t Ptr;
    /* 08 */ uint32_t Size;
    /* 0c */ uint32_t Reserved;
    /* 0c */ uint8_t Type;
    /* 0d */ uint8_t Reserved1;
    /* 0e */ uint16_t Reserved2;
};
using EVENT_DATA_DESCRIPTOR  = struct _EVENT_DATA_DESCRIPTOR;
using PEVENT_DATA_DESCRIPTOR = struct _EVENT_DATA_DESCRIPTOR*;

struct _EVENT_DESCRIPTOR
{
    /* 00 */ uint16_t Id;
    /* 02 */ uint8_t Version;
    /* 03 */ uint8_t Channel;
    /* 04 */ uint8_t Level;
    /* 05 */ uint8_t Opcode;
    /* 06 */ uint16_t Task;
    /* 08 */ uint64_t Keyword;
};
using EVENT_DESCRIPTOR  = struct _EVENT_DESCRIPTOR;
using PEVENT_DESCRIPTOR = struct _EVENT_DESCRIPTOR*;

struct _PERFINFO_GROUPMASK
{
    /* 00 */ std::array<uint32_t, 8> Masks;
};
using PERFINFO_GROUPMASK  = struct _PERFINFO_GROUPMASK;
using PPERFINFO_GROUPMASK = struct _PERFINFO_GROUPMASK*;

struct _EX_RUNDOWN_REF
{
    /* 00 */ uint64_t Count;
    /* 00 */ void* Ptr;
};
using EX_RUNDOWN_REF  = struct _EX_RUNDOWN_REF;
using PEX_RUNDOWN_REF = struct _EX_RUNDOWN_REF*;
#pragma pack(push, 1)

union _WHEA_EVENT_LOG_ENTRY_FLAGS
{
    /* 00:0 */ uint32_t Reserved1      : 1;
    /* 00:1 */ uint32_t LogInternalEtw : 1;
    /* 00:2 */ uint32_t LogBlackbox    : 1;
    /* 00:3 */ uint32_t LogSel         : 1;
    /* 00:4 */ uint32_t RawSel         : 1;
    /* 00:5 */ uint32_t NoFormat       : 1;
    /* 00:6 */ uint32_t Driver         : 1;
    /* 00:7 */ uint32_t Reserved2      : 25;
    /* 00 */ uint32_t AsULONG;
};

#pragma pack(pop)
using WHEA_EVENT_LOG_ENTRY_FLAGS  = union _WHEA_EVENT_LOG_ENTRY_FLAGS;
using PWHEA_EVENT_LOG_ENTRY_FLAGS = union _WHEA_EVENT_LOG_ENTRY_FLAGS*;

union _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_FLAGS
{
    /* 00:0 */ uint32_t Primary              : 1;
    /* 00:1 */ uint32_t ContainmentWarning   : 1;
    /* 00:2 */ uint32_t Reset                : 1;
    /* 00:3 */ uint32_t ThresholdExceeded    : 1;
    /* 00:4 */ uint32_t ResourceNotAvailable : 1;
    /* 00:5 */ uint32_t LatentError          : 1;
    /* 00:6 */ uint32_t Propagated           : 1;
    /* 00:7 */ uint32_t FruTextByPlugin      : 1;
    /* 00:8 */ uint32_t Reserved             : 24;
    /* 00 */ uint32_t AsULONG;
};
using WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_FLAGS  = union _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_FLAGS;
using PWHEA_ERROR_RECORD_SECTION_DESCRIPTOR_FLAGS = union _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_FLAGS*;

struct _HEAP_SUBALLOCATOR_CALLBACKS
{
    /* 00 */ uint64_t Allocate;
    /* 08 */ uint64_t Free;
    /* 10 */ uint64_t Commit;
    /* 18 */ uint64_t Decommit;
    /* 20 */ uint64_t ExtendContext;
};
using HEAP_SUBALLOCATOR_CALLBACKS  = struct _HEAP_SUBALLOCATOR_CALLBACKS;
using PHEAP_SUBALLOCATOR_CALLBACKS = struct _HEAP_SUBALLOCATOR_CALLBACKS*;

struct _SEGMENT_HEAP_EXTRA
{
    /* 00 */ uint16_t AllocationTag;
    /* 02:0 */ uint8_t InterceptorIndex : 4;
    /* 02:4 */ uint8_t UserFlags        : 4;
    /* 03 */ uint8_t ExtraSizeInUnits;
    /* 08 */ void* Settable;
};
using SEGMENT_HEAP_EXTRA  = struct _SEGMENT_HEAP_EXTRA;
using PSEGMENT_HEAP_EXTRA = struct _SEGMENT_HEAP_EXTRA*;

struct _RTL_CSPARSE_BITMAP
{
    /* 00 */ uint64_t* CommitBitmap;
    /* 08 */ uint64_t* UserBitmap;
    /* 10 */ uint64_t BitCount;
    /* 18 */ uint64_t BitmapLock;
    /* 20 */ uint64_t DecommitPageIndex;
    /* 28 */ uint64_t RtlpCSparseBitmapWakeLock;
    /* 30 */ uint8_t LockType;
    /* 31 */ uint8_t AddressSpace;
    /* 32 */ uint8_t MemType;
    /* 33 */ uint8_t AllocAlignment;
    /* 34 */ uint32_t CommitDirectoryMaxSize;
    /* 38 */ std::array<uint64_t, 1> CommitDirectory;
};
using RTL_CSPARSE_BITMAP  = struct _RTL_CSPARSE_BITMAP;
using PRTL_CSPARSE_BITMAP = struct _RTL_CSPARSE_BITMAP*;

struct _HEAP_LIST_LOOKUP
{
    /* 00 */ _HEAP_LIST_LOOKUP* ExtendedLookup;
    /* 08 */ uint32_t ArraySize;
    /* 0c */ uint32_t ExtraItem;
    /* 10 */ uint32_t ItemCount;
    /* 14 */ uint32_t OutOfRangeItems;
    /* 18 */ uint32_t BaseIndex;
    /* 20 */ _LIST_ENTRY* ListHead;
    /* 28 */ uint32_t* ListsInUseUlong;
    /* 30 */ _LIST_ENTRY** ListHints;
};
using HEAP_LIST_LOOKUP  = struct _HEAP_LIST_LOOKUP;
using PHEAP_LIST_LOOKUP = struct _HEAP_LIST_LOOKUP*;

struct _RTL_CRITICAL_SECTION
{
    /* 00 */ _RTL_CRITICAL_SECTION_DEBUG* DebugInfo;
    /* 08 */ int32_t LockCount;
    /* 0c */ int32_t RecursionCount;
    /* 10 */ void* OwningThread;
    /* 18 */ void* LockSemaphore;
    /* 20 */ uint64_t SpinCount;
};
using RTL_CRITICAL_SECTION  = struct _RTL_CRITICAL_SECTION;
using PRTL_CRITICAL_SECTION = struct _RTL_CRITICAL_SECTION*;

struct _LDRP_LOAD_CONTEXT
{
};
using LDRP_LOAD_CONTEXT  = struct _LDRP_LOAD_CONTEXT;
using PLDRP_LOAD_CONTEXT = struct _LDRP_LOAD_CONTEXT*;

struct _INTERLOCK_SEQ
{
    /* 00 */ uint16_t Depth;
    /* 02:0 */ uint16_t Hint  : 15;
    /* 02:15 */ uint16_t Lock : 1;
    /* 02 */ uint16_t Hint16;
    /* 00 */ int32_t Exchg;
};
using INTERLOCK_SEQ  = struct _INTERLOCK_SEQ;
using PINTERLOCK_SEQ = struct _INTERLOCK_SEQ*;

struct _RTLP_HP_PADDING_HEADER
{
    /* 00 */ uint64_t PaddingSize;
    /* 08 */ uint64_t Spare;
};
using RTLP_HP_PADDING_HEADER  = struct _RTLP_HP_PADDING_HEADER;
using PRTLP_HP_PADDING_HEADER = struct _RTLP_HP_PADDING_HEADER*;

struct _RTL_HASH_TABLE
{
    /* 00 */ uint32_t EntryCount;
    /* 04:0 */ uint32_t MaskBitCount : 5;
    /* 04:5 */ uint32_t BucketCount  : 27;
    /* 08 */ _SINGLE_LIST_ENTRY* Buckets;
};
using RTL_HASH_TABLE  = struct _RTL_HASH_TABLE;
using PRTL_HASH_TABLE = struct _RTL_HASH_TABLE*;

struct _RTL_HASH_TABLE_ITERATOR
{
    /* 00 */ _RTL_HASH_TABLE* Hash;
    /* 08 */ _RTL_HASH_ENTRY* HashEntry;
    /* 10 */ _SINGLE_LIST_ENTRY* Bucket;
};
using RTL_HASH_TABLE_ITERATOR  = struct _RTL_HASH_TABLE_ITERATOR;
using PRTL_HASH_TABLE_ITERATOR = struct _RTL_HASH_TABLE_ITERATOR*;

struct _RTL_CHASH_TABLE
{
    /* 00 */ _RTL_CHASH_ENTRY* Table;
    /* 08 */ uint32_t EntrySizeShift;
    /* 0c */ uint32_t EntryMax;
    /* 10 */ uint32_t EntryCount;
};
using RTL_CHASH_TABLE  = struct _RTL_CHASH_TABLE;
using PRTL_CHASH_TABLE = struct _RTL_CHASH_TABLE*;

struct _RTL_CHASH_ENTRY
{
    /* 00 */ uint64_t Key;
};
using RTL_CHASH_ENTRY  = struct _RTL_CHASH_ENTRY;
using PRTL_CHASH_ENTRY = struct _RTL_CHASH_ENTRY*;

struct _HEAP_LFH_FAST_REF
{
    /* 00 */ void* Target;
    /* 00 */ uint64_t Value;
    /* 00:0 */ uint64_t RefCount : 12;
};
using HEAP_LFH_FAST_REF  = struct _HEAP_LFH_FAST_REF;
using PHEAP_LFH_FAST_REF = struct _HEAP_LFH_FAST_REF*;

union _HEAP_LFH_ONDEMAND_POINTER
{
    /* 00:0 */ uint16_t Invalid              : 1;
    /* 00:1 */ uint16_t AllocationInProgress : 1;
    /* 00:2 */ uint16_t Spare0               : 14;
    /* 02 */ uint16_t UsageData;
    /* 00 */ void* AllBits;
};
using HEAP_LFH_ONDEMAND_POINTER  = union _HEAP_LFH_ONDEMAND_POINTER;
using PHEAP_LFH_ONDEMAND_POINTER = union _HEAP_LFH_ONDEMAND_POINTER*;

struct _HEAP_LFH_SUBSEGMENT_ENCODED_OFFSETS
{
    /* 00 */ uint16_t BlockSize;
    /* 02 */ uint16_t FirstBlockOffset;
    /* 00 */ uint32_t EncodedData;
};
using HEAP_LFH_SUBSEGMENT_ENCODED_OFFSETS  = struct _HEAP_LFH_SUBSEGMENT_ENCODED_OFFSETS;
using PHEAP_LFH_SUBSEGMENT_ENCODED_OFFSETS = struct _HEAP_LFH_SUBSEGMENT_ENCODED_OFFSETS*;

struct _HEAP_LFH_UNUSED_BYTES_INFO
{
    /* 00:0 */ uint16_t UnusedBytes    : 14;
    /* 00:14 */ uint16_t ExtraPresent  : 1;
    /* 00:15 */ uint16_t OneByteUnused : 1;
    /* 00 */ std::array<uint8_t, 2> Bytes;
};
using HEAP_LFH_UNUSED_BYTES_INFO  = struct _HEAP_LFH_UNUSED_BYTES_INFO;
using PHEAP_LFH_UNUSED_BYTES_INFO = struct _HEAP_LFH_UNUSED_BYTES_INFO*;

struct _RTLP_HP_QUEUE_LOCK_HANDLE
{
    /* 00 */ uint64_t Reserved1;
    /* 08 */ uint64_t LockPtr;
    /* 10 */ uint64_t HandleData;
};
using RTLP_HP_QUEUE_LOCK_HANDLE  = struct _RTLP_HP_QUEUE_LOCK_HANDLE;
using PRTLP_HP_QUEUE_LOCK_HANDLE = struct _RTLP_HP_QUEUE_LOCK_HANDLE*;

union _HEAP_VS_CHUNK_HEADER_SIZE
{
    /* 00:0 */ uint32_t MemoryCost     : 16;
    /* 00:16 */ uint32_t UnsafeSize    : 16;
    /* 04:0 */ uint32_t UnsafePrevSize : 16;
    /* 04:16 */ uint32_t Allocated     : 8;
    /* 00 */ uint16_t KeyUShort;
    /* 00 */ uint32_t KeyULong;
    /* 00 */ uint64_t HeaderBits;
};
using HEAP_VS_CHUNK_HEADER_SIZE  = union _HEAP_VS_CHUNK_HEADER_SIZE;
using PHEAP_VS_CHUNK_HEADER_SIZE = union _HEAP_VS_CHUNK_HEADER_SIZE*;

struct _HEAP_VS_UNUSED_BYTES_INFO
{
    /* 00:0 */ uint16_t UnusedBytes    : 13;
    /* 00:13 */ uint16_t LfhSubsegment : 1;
    /* 00:14 */ uint16_t ExtraPresent  : 1;
    /* 00:15 */ uint16_t OneByteUnused : 1;
    /* 00 */ std::array<uint8_t, 2> Bytes;
};
using HEAP_VS_UNUSED_BYTES_INFO  = struct _HEAP_VS_UNUSED_BYTES_INFO;
using PHEAP_VS_UNUSED_BYTES_INFO = struct _HEAP_VS_UNUSED_BYTES_INFO*;

struct _HEAP_DESCRIPTOR_KEY
{
    /* 00 */ uint32_t Key;
    /* 00:0 */ uint32_t EncodedCommittedPageCount : 16;
    /* 00:16 */ uint32_t LargePageCost            : 8;
    /* 00:24 */ uint32_t UnitCount                : 8;
};
using HEAP_DESCRIPTOR_KEY  = struct _HEAP_DESCRIPTOR_KEY;
using PHEAP_DESCRIPTOR_KEY = struct _HEAP_DESCRIPTOR_KEY*;

struct RTL_HP_ENV_HANDLE
{
    /* 00 */ std::array<void*, 2> h;
};

union _HEAP_BUCKET_COUNTERS
{
    /* 00 */ uint32_t TotalBlocks;
    /* 04 */ uint32_t SubSegmentCounts;
    /* 00 */ int64_t Aggregate64;
};
using HEAP_BUCKET_COUNTERS  = union _HEAP_BUCKET_COUNTERS;
using PHEAP_BUCKET_COUNTERS = union _HEAP_BUCKET_COUNTERS*;

union _HEAP_BUCKET_RUN_INFO
{
    /* 00 */ uint32_t Bucket;
    /* 04 */ uint32_t RunLength;
    /* 00 */ int64_t Aggregate64;
};
using HEAP_BUCKET_RUN_INFO  = union _HEAP_BUCKET_RUN_INFO;
using PHEAP_BUCKET_RUN_INFO = union _HEAP_BUCKET_RUN_INFO*;

struct _HEAP_BUCKET
{
    /* 00 */ uint16_t BlockUnits;
    /* 02 */ uint8_t SizeIndex;
    /* 03:0 */ uint8_t UseAffinity : 1;
    /* 03:1 */ uint8_t DebugFlags  : 2;
    /* 03 */ uint8_t Flags;
};
using HEAP_BUCKET  = struct _HEAP_BUCKET;
using PHEAP_BUCKET = struct _HEAP_BUCKET*;

struct _FILESYSTEM_DISK_COUNTERS
{
    /* 00 */ uint64_t FsBytesRead;
    /* 08 */ uint64_t FsBytesWritten;
};
using FILESYSTEM_DISK_COUNTERS  = struct _FILESYSTEM_DISK_COUNTERS;
using PFILESYSTEM_DISK_COUNTERS = struct _FILESYSTEM_DISK_COUNTERS*;

struct _WHEA_IPF_CMC_DESCRIPTOR
{
    /* 00 */ uint16_t Type;
    /* 02 */ uint8_t Enabled;
    /* 03 */ uint8_t Reserved;
};
using WHEA_IPF_CMC_DESCRIPTOR  = struct _WHEA_IPF_CMC_DESCRIPTOR;
using PWHEA_IPF_CMC_DESCRIPTOR = struct _WHEA_IPF_CMC_DESCRIPTOR*;

struct _HEAP_TAG_ENTRY
{
    /* 00 */ uint32_t Allocs;
    /* 04 */ uint32_t Frees;
    /* 08 */ uint64_t Size;
    /* 10 */ uint16_t TagIndex;
    /* 12 */ uint16_t CreatorBackTraceIndex;
    /* 14 */ std::array<wchar_t, 24> TagName;
};
using HEAP_TAG_ENTRY  = struct _HEAP_TAG_ENTRY;
using PHEAP_TAG_ENTRY = struct _HEAP_TAG_ENTRY*;

struct _GROUP_AFFINITY
{
    /* 00 */ uint64_t Mask;
    /* 08 */ uint16_t Group;
    /* 0a */ std::array<uint16_t, 3> Reserved;
};
using GROUP_AFFINITY  = struct _GROUP_AFFINITY;
using PGROUP_AFFINITY = struct _GROUP_AFFINITY*;

struct _HEAP_COUNTERS
{
    /* 00 */ uint64_t TotalMemoryReserved;
    /* 08 */ uint64_t TotalMemoryCommitted;
    /* 10 */ uint64_t TotalMemoryLargeUCR;
    /* 18 */ uint64_t TotalSizeInVirtualBlocks;
    /* 20 */ uint32_t TotalSegments;
    /* 24 */ uint32_t TotalUCRs;
    /* 28 */ uint32_t CommittOps;
    /* 2c */ uint32_t DeCommitOps;
    /* 30 */ uint32_t LockAcquires;
    /* 34 */ uint32_t LockCollisions;
    /* 38 */ uint32_t CommitRate;
    /* 3c */ uint32_t DecommittRate;
    /* 40 */ uint32_t CommitFailures;
    /* 44 */ uint32_t InBlockCommitFailures;
    /* 48 */ uint32_t PollIntervalCounter;
    /* 4c */ uint32_t DecommitsSinceLastCheck;
    /* 50 */ uint32_t HeapPollInterval;
    /* 54 */ uint32_t AllocAndFreeOps;
    /* 58 */ uint32_t AllocationIndicesActive;
    /* 5c */ uint32_t InBlockDeccommits;
    /* 60 */ uint64_t InBlockDeccomitSize;
    /* 68 */ uint64_t HighWatermarkSize;
    /* 70 */ uint64_t LastPolledSize;
};
using HEAP_COUNTERS  = struct _HEAP_COUNTERS;
using PHEAP_COUNTERS = struct _HEAP_COUNTERS*;

struct _INTERFACE
{
    /* 00 */ uint16_t Size;
    /* 02 */ uint16_t Version;
    /* 08 */ void* Context;
    /* 10 */ std::function<void(void*)> InterfaceReference;
    /* 18 */ std::function<void(void*)> InterfaceDereference;
};
using INTERFACE  = struct _INTERFACE;
using PINTERFACE = struct _INTERFACE*;

struct _HEAP_PSEUDO_TAG_ENTRY
{
    /* 00 */ uint32_t Allocs;
    /* 04 */ uint32_t Frees;
    /* 08 */ uint64_t Size;
};
using HEAP_PSEUDO_TAG_ENTRY  = struct _HEAP_PSEUDO_TAG_ENTRY;
using PHEAP_PSEUDO_TAG_ENTRY = struct _HEAP_PSEUDO_TAG_ENTRY*;

struct _CLIENT_ID
{
    /* 00 */ void* UniqueProcess;
    /* 08 */ void* UniqueThread;
};
using CLIENT_ID  = struct _CLIENT_ID;
using PCLIENT_ID = struct _CLIENT_ID*;

struct _PROCESS_DISK_COUNTERS
{
    /* 00 */ uint64_t BytesRead;
    /* 08 */ uint64_t BytesWritten;
    /* 10 */ uint64_t ReadOperationCount;
    /* 18 */ uint64_t WriteOperationCount;
    /* 20 */ uint64_t FlushOperationCount;
};
using PROCESS_DISK_COUNTERS  = struct _PROCESS_DISK_COUNTERS;
using PPROCESS_DISK_COUNTERS = struct _PROCESS_DISK_COUNTERS*;

union _KLOCK_ENTRY_BOOST_BITMAP
{
    /* 00 */ uint64_t AllFields;
    /* 00 */ uint32_t AllBoosts;
    /* 04 */ uint32_t WaiterCounts;
    /* 00:0 */ uint32_t CpuBoostsBitmap             : 30;
    /* 00:30 */ uint32_t IoBoost                    : 1;
    /* 00:31 */ uint32_t IoQoSBoost                 : 1;
    /* 04:0 */ uint32_t IoNormalPriorityWaiterCount : 8;
    /* 04:8 */ uint32_t IoQoSWaiterCount            : 7;
};
using KLOCK_ENTRY_BOOST_BITMAP  = union _KLOCK_ENTRY_BOOST_BITMAP;
using PKLOCK_ENTRY_BOOST_BITMAP = union _KLOCK_ENTRY_BOOST_BITMAP*;

struct _EVENT_HEADER_EXTENDED_DATA_ITEM
{
    /* 00 */ uint16_t Reserved1;
    /* 02 */ uint16_t ExtType;
    /* 04:0 */ uint16_t Linkage   : 1;
    /* 04:1 */ uint16_t Reserved2 : 15;
    /* 06 */ uint16_t DataSize;
    /* 08 */ uint64_t DataPtr;
};
using EVENT_HEADER_EXTENDED_DATA_ITEM  = struct _EVENT_HEADER_EXTENDED_DATA_ITEM;
using PEVENT_HEADER_EXTENDED_DATA_ITEM = struct _EVENT_HEADER_EXTENDED_DATA_ITEM*;

struct _RTL_HEAP_MEMORY_LIMIT_DATA
{
    /* 00 */ uint64_t CommitLimitBytes;
    /* 08 */ uint64_t CommitLimitFailureCode;
    /* 10 */ uint64_t MaxAllocationSizeBytes;
    /* 18 */ uint64_t AllocationLimitFailureCode;
};
using RTL_HEAP_MEMORY_LIMIT_DATA  = struct _RTL_HEAP_MEMORY_LIMIT_DATA;
using PRTL_HEAP_MEMORY_LIMIT_DATA = struct _RTL_HEAP_MEMORY_LIMIT_DATA*;

struct _TEB_ACTIVE_FRAME_CONTEXT
{
    /* 00 */ uint32_t Flags;
    /* 08 */ char* FrameName;
};
using TEB_ACTIVE_FRAME_CONTEXT  = struct _TEB_ACTIVE_FRAME_CONTEXT;
using PTEB_ACTIVE_FRAME_CONTEXT = struct _TEB_ACTIVE_FRAME_CONTEXT*;

struct _TEB_ACTIVE_FRAME
{
    /* 00 */ uint32_t Flags;
    /* 08 */ _TEB_ACTIVE_FRAME* Previous;
    /* 10 */ _TEB_ACTIVE_FRAME_CONTEXT* Context;
};
using TEB_ACTIVE_FRAME  = struct _TEB_ACTIVE_FRAME;
using PTEB_ACTIVE_FRAME = struct _TEB_ACTIVE_FRAME*;

union _KERNEL_SHADOW_STACK_LIMIT
{
    /* 00 */ uint64_t AllFields;
    /* 00:0 */ uint64_t ShadowStackType      : 3;
    /* 00:3 */ uint64_t Unused               : 9;
    /* 00:12 */ uint64_t ShadowStackLimitPfn : 52;
};
using KERNEL_SHADOW_STACK_LIMIT  = union _KERNEL_SHADOW_STACK_LIMIT;
using PKERNEL_SHADOW_STACK_LIMIT = union _KERNEL_SHADOW_STACK_LIMIT*;

union _JOBOBJECT_ENERGY_TRACKING_STATE
{
    /* 00 */ uint64_t Value;
    /* 00 */ uint32_t UpdateMask;
    /* 04 */ uint32_t DesiredState;
};
using JOBOBJECT_ENERGY_TRACKING_STATE  = union _JOBOBJECT_ENERGY_TRACKING_STATE;
using PJOBOBJECT_ENERGY_TRACKING_STATE = union _JOBOBJECT_ENERGY_TRACKING_STATE*;

union _WHEA_ERROR_RECORD_HEADER_VALIDBITS
{
    /* 00:0 */ uint32_t PlatformId  : 1;
    /* 00:1 */ uint32_t Timestamp   : 1;
    /* 00:2 */ uint32_t PartitionId : 1;
    /* 00:3 */ uint32_t Reserved    : 29;
    /* 00 */ uint32_t AsULONG;
};
using WHEA_ERROR_RECORD_HEADER_VALIDBITS  = union _WHEA_ERROR_RECORD_HEADER_VALIDBITS;
using PWHEA_ERROR_RECORD_HEADER_VALIDBITS = union _WHEA_ERROR_RECORD_HEADER_VALIDBITS*;

struct _CLIENT_ID64
{
    /* 00 */ uint64_t UniqueProcess;
    /* 08 */ uint64_t UniqueThread;
};
using CLIENT_ID64  = struct _CLIENT_ID64;
using PCLIENT_ID64 = struct _CLIENT_ID64*;

struct _EPROCESS_VALUES
{
    /* 00 */ uint64_t KernelTime;
    /* 08 */ uint64_t UserTime;
    /* 10 */ uint64_t ReadyTime;
    /* 18 */ uint64_t CycleTime;
    /* 20 */ uint64_t ContextSwitches;
    /* 28 */ int64_t ReadOperationCount;
    /* 30 */ int64_t WriteOperationCount;
    /* 38 */ int64_t OtherOperationCount;
    /* 40 */ int64_t ReadTransferCount;
    /* 48 */ int64_t WriteTransferCount;
    /* 50 */ int64_t OtherTransferCount;
    /* 58 */ uint64_t KernelWaitTime;
    /* 60 */ uint64_t UserWaitTime;
};
using EPROCESS_VALUES  = struct _EPROCESS_VALUES;
using PEPROCESS_VALUES = struct _EPROCESS_VALUES*;

struct _RTL_BITMAP_EX
{
    /* 00 */ uint64_t SizeOfBitMap;
    /* 08 */ uint64_t* Buffer;
};
using RTL_BITMAP_EX  = struct _RTL_BITMAP_EX;
using PRTL_BITMAP_EX = struct _RTL_BITMAP_EX*;

struct _PROCESSOR_NUMBER
{
    /* 00 */ uint16_t Group;
    /* 02 */ uint8_t Number;
    /* 03 */ uint8_t Reserved;
};
using PROCESSOR_NUMBER  = struct _PROCESSOR_NUMBER;
using PPROCESSOR_NUMBER = struct _PROCESSOR_NUMBER*;

struct _GDI_TEB_BATCH64
{
    /* 00:0 */ uint32_t Offset               : 31;
    /* 00:31 */ uint32_t HasRenderingCommand : 1;
    /* 08 */ uint64_t HDC;
    /* 10 */ std::array<uint32_t, 310> Buffer;
};
using GDI_TEB_BATCH64  = struct _GDI_TEB_BATCH64;
using PGDI_TEB_BATCH64 = struct _GDI_TEB_BATCH64*;

struct _HEAP_TUNING_PARAMETERS
{
    /* 00 */ uint32_t CommittThresholdShift;
    /* 08 */ uint64_t MaxPreCommittThreshold;
};
using HEAP_TUNING_PARAMETERS  = struct _HEAP_TUNING_PARAMETERS;
using PHEAP_TUNING_PARAMETERS = struct _HEAP_TUNING_PARAMETERS*;

union _AER_ENDPOINT_DESCRIPTOR_FLAGS
{
    /* 00:0 */ uint16_t UncorrectableErrorMaskRW     : 1;
    /* 00:1 */ uint16_t UncorrectableErrorSeverityRW : 1;
    /* 00:2 */ uint16_t CorrectableErrorMaskRW       : 1;
    /* 00:3 */ uint16_t AdvancedCapsAndControlRW     : 1;
    /* 00:4 */ uint16_t Reserved                     : 12;
    /* 00 */ uint16_t AsUSHORT;
};
using AER_ENDPOINT_DESCRIPTOR_FLAGS  = union _AER_ENDPOINT_DESCRIPTOR_FLAGS;
using PAER_ENDPOINT_DESCRIPTOR_FLAGS = union _AER_ENDPOINT_DESCRIPTOR_FLAGS*;

union _RTL_RUN_ONCE
{
    /* 00 */ void* Ptr;
    /* 00 */ uint64_t Value;
    /* 00:0 */ uint64_t State : 2;
};
using RTL_RUN_ONCE  = union _RTL_RUN_ONCE;
using PRTL_RUN_ONCE = union _RTL_RUN_ONCE*;

struct _RTL_HP_VS_CONFIG
{
    /* 00 */ struct
    {
        /* 00:0 */ uint32_t PageAlignLargeAllocs : 1;
        /* 00:1 */ uint32_t FullDecommit         : 1;
        /* 00:2 */ uint32_t EnableDelayFree      : 1;
    } Flags;
};
using RTL_HP_VS_CONFIG  = struct _RTL_HP_VS_CONFIG;
using PRTL_HP_VS_CONFIG = struct _RTL_HP_VS_CONFIG*;

struct _EXHANDLE
{
    /* 00:0 */ uint32_t TagBits : 2;
    /* 00:2 */ uint32_t Index   : 30;
    /* 00 */ void* GenericHandleOverlay;
    /* 00 */ uint64_t Value;
};
using EXHANDLE  = struct _EXHANDLE;
using PEXHANDLE = struct _EXHANDLE*;

struct _KCLOCK_TICK_TRACE
{
    /* 00 */ uint64_t PerformanceCounter;
    /* 08 */ uint64_t PreInterruptTime;
    /* 10 */ uint64_t PostInterruptTime;
    /* 18 */ uint64_t TimeStampCounter;
    /* 20 */ uint8_t IsClockOwner;
};
using KCLOCK_TICK_TRACE  = struct _KCLOCK_TICK_TRACE;
using PKCLOCK_TICK_TRACE = struct _KCLOCK_TICK_TRACE*;

struct _SECURITY_DESCRIPTOR
{
    /* 00 */ uint8_t Revision;
    /* 01 */ uint8_t Sbz1;
    /* 02 */ uint16_t Control;
    /* 08 */ void* Owner;
    /* 10 */ void* Group;
    /* 18 */ _ACL* Sacl;
    /* 20 */ _ACL* Dacl;
};
using SECURITY_DESCRIPTOR  = struct _SECURITY_DESCRIPTOR;
using PSECURITY_DESCRIPTOR = struct _SECURITY_DESCRIPTOR*;

union _KEXECUTE_OPTIONS
{
    /* 00:0 */ uint8_t ExecuteDisable                  : 1;
    /* 00:1 */ uint8_t ExecuteEnable                   : 1;
    /* 00:2 */ uint8_t DisableThunkEmulation           : 1;
    /* 00:3 */ uint8_t Permanent                       : 1;
    /* 00:4 */ uint8_t ExecuteDispatchEnable           : 1;
    /* 00:5 */ uint8_t ImageDispatchEnable             : 1;
    /* 00:6 */ uint8_t DisableExceptionChainValidation : 1;
    /* 00:7 */ uint8_t Spare                           : 1;
    /* 00 */ uint8_t ExecuteOptions;
    /* 00 */ uint8_t ExecuteOptionsNV;
};
using KEXECUTE_OPTIONS  = union _KEXECUTE_OPTIONS;
using PKEXECUTE_OPTIONS = union _KEXECUTE_OPTIONS*;

struct _CLIENT_ID32
{
    /* 00 */ uint32_t UniqueProcess;
    /* 04 */ uint32_t UniqueThread;
};
using CLIENT_ID32  = struct _CLIENT_ID32;
using PCLIENT_ID32 = struct _CLIENT_ID32*;

struct _GDI_TEB_BATCH32
{
    /* 00:0 */ uint32_t Offset               : 31;
    /* 00:31 */ uint32_t HasRenderingCommand : 1;
    /* 04 */ uint32_t HDC;
    /* 08 */ std::array<uint32_t, 310> Buffer;
};
using GDI_TEB_BATCH32  = struct _GDI_TEB_BATCH32;
using PGDI_TEB_BATCH32 = struct _GDI_TEB_BATCH32*;

union _WHEA_ERROR_RECORD_HEADER_FLAGS
{
    /* 00:0 */ uint32_t Recovered          : 1;
    /* 00:1 */ uint32_t PreviousError      : 1;
    /* 00:2 */ uint32_t Simulated          : 1;
    /* 00:3 */ uint32_t DeviceDriver       : 1;
    /* 00:4 */ uint32_t CriticalEvent      : 1;
    /* 00:5 */ uint32_t PersistPfn         : 1;
    /* 00:6 */ uint32_t SectionsTruncated  : 1;
    /* 00:7 */ uint32_t RecoveryInProgress : 1;
    /* 00:8 */ uint32_t Throttle           : 1;
    /* 00:9 */ uint32_t Reserved           : 23;
    /* 00 */ uint32_t AsULONG;
};
using WHEA_ERROR_RECORD_HEADER_FLAGS  = union _WHEA_ERROR_RECORD_HEADER_FLAGS;
using PWHEA_ERROR_RECORD_HEADER_FLAGS = union _WHEA_ERROR_RECORD_HEADER_FLAGS*;

struct _RTL_HP_HEAP_VA_CALLBACKS_ENCODED
{
    /* 00 */ uint64_t CallbackContext;
    /* 08 */ uint64_t AllocateVirtualMemoryEncoded;
    /* 10 */ uint64_t FreeVirtualMemoryEncoded;
    /* 18 */ uint64_t QueryVirtualMemoryEncoded;
};
using RTL_HP_HEAP_VA_CALLBACKS_ENCODED  = struct _RTL_HP_HEAP_VA_CALLBACKS_ENCODED;
using PRTL_HP_HEAP_VA_CALLBACKS_ENCODED = struct _RTL_HP_HEAP_VA_CALLBACKS_ENCODED*;

union _PS_TRUSTLET_ATTRIBUTE_ACCESSRIGHTS
{
    /* 00:0 */ uint8_t Trustlet    : 1;
    /* 00:1 */ uint8_t Ntos        : 1;
    /* 00:2 */ uint8_t WriteHandle : 1;
    /* 00:3 */ uint8_t ReadHandle  : 1;
    /* 00:4 */ uint8_t Reserved    : 4;
    /* 00 */ uint8_t AccessRights;
};
using PS_TRUSTLET_ATTRIBUTE_ACCESSRIGHTS  = union _PS_TRUSTLET_ATTRIBUTE_ACCESSRIGHTS;
using PPS_TRUSTLET_ATTRIBUTE_ACCESSRIGHTS = union _PS_TRUSTLET_ATTRIBUTE_ACCESSRIGHTS*;

struct _KSECURE_FAULT_INFORMATION
{
    /* 00 */ uint64_t FaultCode;
    /* 08 */ uint64_t FaultVa;
    /* 10 */ uint64_t FaultPa;
};
using KSECURE_FAULT_INFORMATION  = struct _KSECURE_FAULT_INFORMATION;
using PKSECURE_FAULT_INFORMATION = struct _KSECURE_FAULT_INFORMATION*;

struct _KREQUEST_PACKET
{
    /* 00 */ std::array<void*, 3> CurrentPacket;
    /* 18 */ std::function<void(void*, void*, void*, void*)> WorkerRoutine;
};
using KREQUEST_PACKET  = struct _KREQUEST_PACKET;
using PKREQUEST_PACKET = struct _KREQUEST_PACKET*;

struct _WHEA_PCI_SLOT_NUMBER
{
    /* 00 */ union
    {
        /* 00 */ struct
        {
            /* 00:0 */ uint32_t DeviceNumber   : 5;
            /* 00:5 */ uint32_t FunctionNumber : 3;
            /* 00:8 */ uint32_t Reserved       : 24;
        } bits;

        /* 00 */ uint32_t AsULONG;
    } u;
};
using WHEA_PCI_SLOT_NUMBER  = struct _WHEA_PCI_SLOT_NUMBER;
using PWHEA_PCI_SLOT_NUMBER = struct _WHEA_PCI_SLOT_NUMBER*;

struct _IMAGE_FILE_HEADER
{
    /* 00 */ uint16_t Machine;
    /* 02 */ uint16_t NumberOfSections;
    /* 04 */ uint32_t TimeDateStamp;
    /* 08 */ uint32_t PointerToSymbolTable;
    /* 0c */ uint32_t NumberOfSymbols;
    /* 10 */ uint16_t SizeOfOptionalHeader;
    /* 12 */ uint16_t Characteristics;
};
using IMAGE_FILE_HEADER  = struct _IMAGE_FILE_HEADER;
using PIMAGE_FILE_HEADER = struct _IMAGE_FILE_HEADER*;

struct _JOBOBJECT_WAKE_FILTER
{
    /* 00 */ uint32_t HighEdgeFilter;
    /* 04 */ uint32_t LowEdgeFilter;
};
using JOBOBJECT_WAKE_FILTER  = struct _JOBOBJECT_WAKE_FILTER;
using PJOBOBJECT_WAKE_FILTER = struct _JOBOBJECT_WAKE_FILTER*;

struct _ACL
{
    /* 00 */ uint8_t AclRevision;
    /* 01 */ uint8_t Sbz1;
    /* 02 */ uint16_t AclSize;
    /* 04 */ uint16_t AceCount;
    /* 06 */ uint16_t Sbz2;
};
using ACL  = struct _ACL;
using PACL = struct _ACL*;

struct _KCLOCK_TIMER_DEADLINE_ENTRY
{
    /* 00 */ uint64_t DueTime;
    /* 08 */ uint32_t TolerableDelay;
    /* 0c */ uint8_t TypeFlags;
    /* 0c:0 */ uint8_t Valid  : 1;
    /* 0c:1 */ uint8_t NoWake : 1;
    /* 0c:2 */ uint8_t Unused : 6;
};
using KCLOCK_TIMER_DEADLINE_ENTRY  = struct _KCLOCK_TIMER_DEADLINE_ENTRY;
using PKCLOCK_TIMER_DEADLINE_ENTRY = struct _KCLOCK_TIMER_DEADLINE_ENTRY*;

struct _WHEA_IPF_MCA_DESCRIPTOR
{
    /* 00 */ uint16_t Type;
    /* 02 */ uint8_t Enabled;
    /* 03 */ uint8_t Reserved;
};
using WHEA_IPF_MCA_DESCRIPTOR  = struct _WHEA_IPF_MCA_DESCRIPTOR;
using PWHEA_IPF_MCA_DESCRIPTOR = struct _WHEA_IPF_MCA_DESCRIPTOR*;

struct _PS_PROTECTION
{
    /* 00 */ uint8_t Level;
    /* 00:0 */ uint8_t Type   : 3;
    /* 00:3 */ uint8_t Audit  : 1;
    /* 00:4 */ uint8_t Signer : 4;
};
using PS_PROTECTION  = struct _PS_PROTECTION;
using PPS_PROTECTION = struct _PS_PROTECTION*;

struct _HEAP_LFH_MEM_POLICIES
{
    /* 00:0 */ uint32_t DisableAffinity      : 1;
    /* 00:1 */ uint32_t SlowSubsegmentGrowth : 1;
    /* 00:2 */ uint32_t Spare                : 30;
    /* 00 */ uint32_t AllPolicies;
};
using HEAP_LFH_MEM_POLICIES  = struct _HEAP_LFH_MEM_POLICIES;
using PHEAP_LFH_MEM_POLICIES = struct _HEAP_LFH_MEM_POLICIES*;

struct _NT_TIB64
{
    /* 00 */ uint64_t ExceptionList;
    /* 08 */ uint64_t StackBase;
    /* 10 */ uint64_t StackLimit;
    /* 18 */ uint64_t SubSystemTib;
    /* 20 */ uint64_t FiberData;
    /* 20 */ uint32_t Version;
    /* 28 */ uint64_t ArbitraryUserPointer;
    /* 30 */ uint64_t Self;
};
using NT_TIB64  = struct _NT_TIB64;
using PNT_TIB64 = struct _NT_TIB64*;

union _MM_PAGE_ACCESS_INFO_FLAGS
{
    /* 00 */ struct
    {
        /* 00:0 */ uint32_t FilePointerIndex : 9;
        /* 00:9 */ uint32_t HardFault        : 1;
        /* 00:10 */ uint32_t Image           : 1;
        /* 00:11 */ uint32_t Spare0          : 1;
    } File;

    /* 00 */ struct
    {
        /* 00:0 */ uint32_t FilePointerIndex : 9;
        /* 00:9 */ uint32_t HardFault        : 1;
        /* 00:10 */ uint32_t Spare1          : 2;
    } Private;
};
using MM_PAGE_ACCESS_INFO_FLAGS  = union _MM_PAGE_ACCESS_INFO_FLAGS;
using PMM_PAGE_ACCESS_INFO_FLAGS = union _MM_PAGE_ACCESS_INFO_FLAGS*;

struct _RTL_HP_LFH_CONFIG
{
    /* 00 */ uint16_t MaxBlockSize;
    /* 02:0 */ uint16_t WitholdPageCrossingBlocks : 1;
    /* 02:1 */ uint16_t DisableRandomization      : 1;
};
using RTL_HP_LFH_CONFIG  = struct _RTL_HP_LFH_CONFIG;
using PRTL_HP_LFH_CONFIG = struct _RTL_HP_LFH_CONFIG*;

struct _IO_COMPLETION_CONTEXT
{
    /* 00 */ void* Port;
    /* 08 */ void* Key;
    /* 10 */ int64_t UsageCount;
};
using IO_COMPLETION_CONTEXT  = struct _IO_COMPLETION_CONTEXT;
using PIO_COMPLETION_CONTEXT = struct _IO_COMPLETION_CONTEXT*;

union _KPRCBFLAG
{
    /* 00 */ int32_t PrcbFlags;
    /* 00:0 */ uint32_t BamQosLevel            : 8;
    /* 00:8 */ uint32_t PendingQosUpdate       : 2;
    /* 00:10 */ uint32_t CacheIsolationEnabled : 1;
    /* 00:11 */ uint32_t TracepointActive      : 1;
    /* 00:12 */ uint32_t LongDpcRunning        : 1;
    /* 00:13 */ uint32_t PrcbFlagsReserved     : 19;
};
using KPRCBFLAG  = union _KPRCBFLAG;
using PKPRCBFLAG = union _KPRCBFLAG*;

struct _DEVICE_OBJECT_POWER_EXTENSION
{
};
using DEVICE_OBJECT_POWER_EXTENSION  = struct _DEVICE_OBJECT_POWER_EXTENSION;
using PDEVICE_OBJECT_POWER_EXTENSION = struct _DEVICE_OBJECT_POWER_EXTENSION*;

struct _DEVOBJ_EXTENSION
{
    /* 00 */ int16_t Type;
    /* 02 */ uint16_t Size;
    /* 08 */ _DEVICE_OBJECT* DeviceObject;
    /* 10 */ uint32_t PowerFlags;
    /* 18 */ _DEVICE_OBJECT_POWER_EXTENSION* Dope;
    /* 20 */ uint32_t ExtensionFlags;
    /* 28 */ void* DeviceNode;
    /* 30 */ _DEVICE_OBJECT* AttachedTo;
    /* 38 */ int32_t StartIoCount;
    /* 3c */ int32_t StartIoKey;
    /* 40 */ uint32_t StartIoFlags;
    /* 48 */ _VPB* Vpb;
    /* 50 */ void* DependencyNode;
    /* 58 */ void* InterruptContext;
    /* 60 */ int32_t InterruptCount;
    /* 68 */ void* VerifierContext;
};
using DEVOBJ_EXTENSION  = struct _DEVOBJ_EXTENSION;
using PDEVOBJ_EXTENSION = struct _DEVOBJ_EXTENSION*;

union _AER_ROOTPORT_DESCRIPTOR_FLAGS
{
    /* 00:0 */ uint16_t UncorrectableErrorMaskRW     : 1;
    /* 00:1 */ uint16_t UncorrectableErrorSeverityRW : 1;
    /* 00:2 */ uint16_t CorrectableErrorMaskRW       : 1;
    /* 00:3 */ uint16_t AdvancedCapsAndControlRW     : 1;
    /* 00:4 */ uint16_t RootErrorCommandRW           : 1;
    /* 00:5 */ uint16_t Reserved                     : 11;
    /* 00 */ uint16_t AsUSHORT;
};
using AER_ROOTPORT_DESCRIPTOR_FLAGS  = union _AER_ROOTPORT_DESCRIPTOR_FLAGS;
using PAER_ROOTPORT_DESCRIPTOR_FLAGS = union _AER_ROOTPORT_DESCRIPTOR_FLAGS*;

union _HEAP_SEGMENT_MGR_COMMIT_STATE
{
    /* 00:0 */ uint16_t CommittedPageCount            : 11;
    /* 00:11 */ uint16_t Spare                        : 3;
    /* 00:14 */ uint16_t LargePageOperationInProgress : 1;
    /* 00:15 */ uint16_t LargePageCommit              : 1;
    /* 00 */ uint16_t EntireUShortV;
    /* 00 */ uint16_t EntireUShort;
};
using HEAP_SEGMENT_MGR_COMMIT_STATE  = union _HEAP_SEGMENT_MGR_COMMIT_STATE;
using PHEAP_SEGMENT_MGR_COMMIT_STATE = union _HEAP_SEGMENT_MGR_COMMIT_STATE*;

struct _RTL_HP_SEG_ALLOC_POLICY
{
    /* 00 */ uint64_t MinLargePages;
    /* 08 */ uint64_t MaxLargePages;
    /* 10 */ uint8_t MinUtilization;
};
using RTL_HP_SEG_ALLOC_POLICY  = struct _RTL_HP_SEG_ALLOC_POLICY;
using PRTL_HP_SEG_ALLOC_POLICY = struct _RTL_HP_SEG_ALLOC_POLICY*;

union _KGDTENTRY64
{
    /* 00 */ uint16_t LimitLow;
    /* 02 */ uint16_t BaseLow;
    /* 04 */ struct
    {
        /* 00 */ uint8_t BaseMiddle;
        /* 01 */ uint8_t Flags1;
        /* 02 */ uint8_t Flags2;
        /* 03 */ uint8_t BaseHigh;
    } Bytes;

    /* 04 */ struct
    {
        /* 00:0 */ uint32_t BaseMiddle   : 8;
        /* 00:8 */ uint32_t Type         : 5;
        /* 00:13 */ uint32_t Dpl         : 2;
        /* 00:15 */ uint32_t Present     : 1;
        /* 00:16 */ uint32_t LimitHigh   : 4;
        /* 00:20 */ uint32_t System      : 1;
        /* 00:21 */ uint32_t LongMode    : 1;
        /* 00:22 */ uint32_t DefaultBig  : 1;
        /* 00:23 */ uint32_t Granularity : 1;
        /* 00:24 */ uint32_t BaseHigh    : 8;
    } Bits;

    /* 08 */ uint32_t BaseUpper;
    /* 0c */ uint32_t MustBeZero;
    /* 00 */ int64_t DataLow;
    /* 08 */ int64_t DataHigh;
};
using KGDTENTRY64  = union _KGDTENTRY64;
using PKGDTENTRY64 = union _KGDTENTRY64*;

struct _RTL_TRACE_BLOCK
{
    /* 00 */ uint32_t Magic;
    /* 04 */ uint32_t Count;
    /* 08 */ uint32_t Size;
    /* 10 */ uint64_t UserCount;
    /* 18 */ uint64_t UserSize;
    /* 20 */ void* UserContext;
    /* 28 */ _RTL_TRACE_BLOCK* Next;
    /* 30 */ void** Trace;
};
using RTL_TRACE_BLOCK  = struct _RTL_TRACE_BLOCK;
using PRTL_TRACE_BLOCK = struct _RTL_TRACE_BLOCK*;

union _WHEA_REVISION
{
    /* 00 */ uint8_t MinorRevision;
    /* 01 */ uint8_t MajorRevision;
    /* 00 */ uint16_t AsUSHORT;
};
using WHEA_REVISION  = union _WHEA_REVISION;
using PWHEA_REVISION = union _WHEA_REVISION*;

struct _KCORE_CONTROL_BLOCK
{
    /* 00 */ uint8_t ProcessorCount;
    /* 01 */ uint8_t ScanStartIndex;
    /* 02 */ std::array<uint8_t, 6> Spare;
    /* 08 */ std::array<_KPRCB*, 8> Prcbs;
};
using KCORE_CONTROL_BLOCK  = struct _KCORE_CONTROL_BLOCK;
using PKCORE_CONTROL_BLOCK = struct _KCORE_CONTROL_BLOCK*;

struct _SYSTEM_POWER_STATE_CONTEXT
{
    /* 00:0 */ uint32_t Reserved1                : 8;
    /* 00:8 */ uint32_t TargetSystemState        : 4;
    /* 00:12 */ uint32_t EffectiveSystemState    : 4;
    /* 00:16 */ uint32_t CurrentSystemState      : 4;
    /* 00:20 */ uint32_t IgnoreHibernationPath   : 1;
    /* 00:21 */ uint32_t PseudoTransition        : 1;
    /* 00:22 */ uint32_t KernelSoftReboot        : 1;
    /* 00:23 */ uint32_t DirectedDripsTransition : 1;
    /* 00:24 */ uint32_t Reserved2               : 8;
    /* 00 */ uint32_t ContextAsUlong;
};
using SYSTEM_POWER_STATE_CONTEXT  = struct _SYSTEM_POWER_STATE_CONTEXT;
using PSYSTEM_POWER_STATE_CONTEXT = struct _SYSTEM_POWER_STATE_CONTEXT*;

union _WHEA_PERSISTENCE_INFO
{
    /* 00:0 */ uint64_t Signature   : 16;
    /* 00:16 */ uint64_t Length     : 24;
    /* 00:40 */ uint64_t Identifier : 16;
    /* 00:56 */ uint64_t Attributes : 2;
    /* 00:58 */ uint64_t DoNotLog   : 1;
    /* 00:59 */ uint64_t Reserved   : 5;
    /* 00 */ uint64_t AsULONGLONG;
};
using WHEA_PERSISTENCE_INFO  = union _WHEA_PERSISTENCE_INFO;
using PWHEA_PERSISTENCE_INFO = union _WHEA_PERSISTENCE_INFO*;

union _KIDTENTRY64
{
    /* 00 */ uint16_t OffsetLow;
    /* 02 */ uint16_t Selector;
    /* 04:0 */ uint16_t IstIndex  : 3;
    /* 04:3 */ uint16_t Reserved0 : 5;
    /* 04:8 */ uint16_t Type      : 5;
    /* 04:13 */ uint16_t Dpl      : 2;
    /* 04:15 */ uint16_t Present  : 1;
    /* 06 */ uint16_t OffsetMiddle;
    /* 08 */ uint32_t OffsetHigh;
    /* 0c */ uint32_t Reserved1;
    /* 00 */ uint64_t Alignment;
};
using KIDTENTRY64  = union _KIDTENTRY64;
using PKIDTENTRY64 = union _KIDTENTRY64*;

struct _XSAVE_AREA_HEADER
{
    /* 00 */ uint64_t Mask;
    /* 08 */ uint64_t CompactionMask;
    /* 10 */ std::array<uint64_t, 6> Reserved2;
};
using XSAVE_AREA_HEADER  = struct _XSAVE_AREA_HEADER;
using PXSAVE_AREA_HEADER = struct _XSAVE_AREA_HEADER*;

union _PROCESS_EXECUTION_TRANSITION
{
    /* 00 */ int16_t TransitionState;
    /* 00:0 */ uint16_t InProgress : 1;
    /* 00:1 */ uint16_t Reserved   : 7;
};
using PROCESS_EXECUTION_TRANSITION  = union _PROCESS_EXECUTION_TRANSITION;
using PPROCESS_EXECUTION_TRANSITION = union _PROCESS_EXECUTION_TRANSITION*;

struct _RTL_SRWLOCK
{
    /* 00:0 */ uint64_t Locked         : 1;
    /* 00:1 */ uint64_t Waiting        : 1;
    /* 00:2 */ uint64_t Waking         : 1;
    /* 00:3 */ uint64_t MultipleShared : 1;
    /* 00:4 */ uint64_t Shared         : 60;
    /* 00 */ uint64_t Value;
    /* 00 */ void* Ptr;
};
using RTL_SRWLOCK  = struct _RTL_SRWLOCK;
using PRTL_SRWLOCK = struct _RTL_SRWLOCK*;

struct _HEAP_ENTRY_EXTRA
{
    /* 00 */ uint16_t AllocatorBackTraceIndex;
    /* 02 */ uint16_t TagIndex;
    /* 08 */ uint64_t Settable;
    /* 00 */ uint64_t ZeroInit;
    /* 08 */ uint64_t ZeroInit1;
};
using HEAP_ENTRY_EXTRA  = struct _HEAP_ENTRY_EXTRA;
using PHEAP_ENTRY_EXTRA = struct _HEAP_ENTRY_EXTRA*;

union _PROCESS_EXECUTION_STATE
{
    /* 00 */ char State;
    /* 00:0 */ uint8_t ProcessFrozen                  : 1;
    /* 00:1 */ uint8_t ProcessSwapped                 : 1;
    /* 00:2 */ uint8_t ProcessGraphicsFreezeOptimized : 1;
    /* 00:3 */ uint8_t Reserved                       : 5;
};
using PROCESS_EXECUTION_STATE  = union _PROCESS_EXECUTION_STATE;
using PPROCESS_EXECUTION_STATE = union _PROCESS_EXECUTION_STATE*;

struct _IO_SECURITY_CONTEXT
{
    /* 00 */ _SECURITY_QUALITY_OF_SERVICE* SecurityQos;
    /* 08 */ _ACCESS_STATE* AccessState;
    /* 10 */ uint32_t DesiredAccess;
    /* 14 */ uint32_t FullCreateOptions;
};
using IO_SECURITY_CONTEXT  = struct _IO_SECURITY_CONTEXT;
using PIO_SECURITY_CONTEXT = struct _IO_SECURITY_CONTEXT*;

union _ENERGY_STATE_DURATION
{
    /* 00 */ uint64_t Value;
    /* 00 */ uint32_t LastChangeTime;
    /* 04:0 */ uint32_t Duration   : 31;
    /* 04:31 */ uint32_t IsInState : 1;
};
using ENERGY_STATE_DURATION  = union _ENERGY_STATE_DURATION;
using PENERGY_STATE_DURATION = union _ENERGY_STATE_DURATION*;

struct _KTSS64
{
    /* 00 */ uint32_t Reserved0;
    /* 04 */ uint64_t Rsp0;
    /* 0c */ uint64_t Rsp1;
    /* 14 */ uint64_t Rsp2;
    /* 1c */ std::array<uint64_t, 8> Ist;
    /* 5c */ uint64_t Reserved1;
    /* 64 */ uint16_t Reserved2;
    /* 66 */ uint16_t IoMapBase;
};
using KTSS64  = struct _KTSS64;
using PKTSS64 = struct _KTSS64*;

struct _MMWSL_INSTANCE
{
};
using MMWSL_INSTANCE  = struct _MMWSL_INSTANCE;
using PMMWSL_INSTANCE = struct _MMWSL_INSTANCE*;

struct _VPB
{
    /* 00 */ int16_t Type;
    /* 02 */ int16_t Size;
    /* 04 */ uint16_t Flags;
    /* 06 */ uint16_t VolumeLabelLength;
    /* 08 */ _DEVICE_OBJECT* DeviceObject;
    /* 10 */ _DEVICE_OBJECT* RealDevice;
    /* 18 */ uint32_t SerialNumber;
    /* 1c */ uint32_t ReferenceCount;
    /* 20 */ std::array<wchar_t, 32> VolumeLabel;
};
using VPB  = struct _VPB;
using PVPB = struct _VPB*;

union _LFH_RANDOM_DATA
{
    /* 00 */ std::array<uint8_t, 256> Bytes;
    /* 00 */ std::array<uint16_t, 128> Words;
    /* 00 */ std::array<uint64_t, 32> Quadwords;
};
using LFH_RANDOM_DATA  = union _LFH_RANDOM_DATA;
using PLFH_RANDOM_DATA = union _LFH_RANDOM_DATA*;

struct _RTL_TRACE_SEGMENT
{
    /* 00 */ uint32_t Magic;
    /* 08 */ _RTL_TRACE_DATABASE* Database;
    /* 10 */ _RTL_TRACE_SEGMENT* NextSegment;
    /* 18 */ uint64_t TotalSize;
    /* 20 */ char* SegmentStart;
    /* 28 */ char* SegmentEnd;
    /* 30 */ char* SegmentFree;
};
using RTL_TRACE_SEGMENT  = struct _RTL_TRACE_SEGMENT;
using PRTL_TRACE_SEGMENT = struct _RTL_TRACE_SEGMENT*;

struct _NT_TIB
{
    /* 00 */ _EXCEPTION_REGISTRATION_RECORD* ExceptionList;
    /* 08 */ void* StackBase;
    /* 10 */ void* StackLimit;
    /* 18 */ void* SubSystemTib;
    /* 20 */ void* FiberData;
    /* 20 */ uint32_t Version;
    /* 28 */ void* ArbitraryUserPointer;
    /* 30 */ _NT_TIB* Self;
};
using NT_TIB  = struct _NT_TIB;
using PNT_TIB = struct _NT_TIB*;

struct _TERMINATION_PORT
{
    /* 00 */ _TERMINATION_PORT* Next;
    /* 08 */ void* Port;
};
using TERMINATION_PORT  = struct _TERMINATION_PORT;
using PTERMINATION_PORT = struct _TERMINATION_PORT*;

struct _POWER_SEQUENCE
{
    /* 00 */ uint32_t SequenceD1;
    /* 04 */ uint32_t SequenceD2;
    /* 08 */ uint32_t SequenceD3;
};
using POWER_SEQUENCE  = struct _POWER_SEQUENCE;
using PPOWER_SEQUENCE = struct _POWER_SEQUENCE*;

struct _STRING32
{
    /* 00 */ uint16_t Length;
    /* 02 */ uint16_t MaximumLength;
    /* 04 */ uint32_t Buffer;
};
using STRING32  = struct _STRING32;
using PSTRING32 = struct _STRING32*;

struct _EXCEPTION_REGISTRATION_RECORD
{
    /* 00 */ _EXCEPTION_REGISTRATION_RECORD* Next;
    /* 08 */ std::function<_EXCEPTION_DISPOSITION(_EXCEPTION_RECORD*, void*, _CONTEXT*, void*)> Handler;
};
using EXCEPTION_REGISTRATION_RECORD  = struct _EXCEPTION_REGISTRATION_RECORD;
using PEXCEPTION_REGISTRATION_RECORD = struct _EXCEPTION_REGISTRATION_RECORD*;

struct _GDI_TEB_BATCH
{
    /* 00:0 */ uint32_t Offset               : 31;
    /* 00:31 */ uint32_t HasRenderingCommand : 1;
    /* 08 */ uint64_t HDC;
    /* 10 */ std::array<uint32_t, 310> Buffer;
};
using GDI_TEB_BATCH  = struct _GDI_TEB_BATCH;
using PGDI_TEB_BATCH = struct _GDI_TEB_BATCH*;

struct _MMSUPPORT_SHARED
{
    /* 00 */ int32_t WorkingSetLock;
    /* 04 */ int32_t GoodCitizenWaiting;
    /* 08 */ uint64_t ReleasedCommitDebt;
    /* 10 */ uint64_t ResetPagesRepurposedCount;
    /* 18 */ void* WsSwapSupport;
    /* 20 */ void* CommitReleaseContext;
    /* 28 */ void* AccessLog;
    /* 30 */ uint64_t ChargedWslePages;
    /* 38 */ uint64_t ActualWslePages;
    /* 40 */ int32_t WorkingSetCoreLock;
    /* 48 */ void* ShadowMapping;
};
using MMSUPPORT_SHARED  = struct _MMSUPPORT_SHARED;
using PMMSUPPORT_SHARED = struct _MMSUPPORT_SHARED*;

union _AER_BRIDGE_DESCRIPTOR_FLAGS
{
    /* 00:0 */ uint16_t UncorrectableErrorMaskRW          : 1;
    /* 00:1 */ uint16_t UncorrectableErrorSeverityRW      : 1;
    /* 00:2 */ uint16_t CorrectableErrorMaskRW            : 1;
    /* 00:3 */ uint16_t AdvancedCapsAndControlRW          : 1;
    /* 00:4 */ uint16_t SecondaryUncorrectableErrorMaskRW : 1;
    /* 00:5 */ uint16_t SecondaryUncorrectableErrorSevRW  : 1;
    /* 00:6 */ uint16_t SecondaryCapsAndControlRW         : 1;
    /* 00:7 */ uint16_t Reserved                          : 9;
    /* 00 */ uint16_t AsUSHORT;
};
using AER_BRIDGE_DESCRIPTOR_FLAGS  = union _AER_BRIDGE_DESCRIPTOR_FLAGS;
using PAER_BRIDGE_DESCRIPTOR_FLAGS = union _AER_BRIDGE_DESCRIPTOR_FLAGS*;

union _PS_CLIENT_SECURITY_CONTEXT
{
    /* 00 */ uint64_t ImpersonationData;
    /* 00 */ void* ImpersonationToken;
    /* 00:0 */ uint64_t ImpersonationLevel : 2;
    /* 00:2 */ uint64_t EffectiveOnly      : 1;
};
using PS_CLIENT_SECURITY_CONTEXT  = union _PS_CLIENT_SECURITY_CONTEXT;
using PPS_CLIENT_SECURITY_CONTEXT = union _PS_CLIENT_SECURITY_CONTEXT*;

struct _STRING64
{
    /* 00 */ uint16_t Length;
    /* 02 */ uint16_t MaximumLength;
    /* 08 */ uint64_t Buffer;
};
using STRING64  = struct _STRING64;
using PSTRING64 = struct _STRING64*;

struct _KHETERO_PROCESSOR_SET
{
    /* 00 */ uint64_t IdealMask;
    /* 08 */ uint64_t PreferredMask;
    /* 10 */ uint64_t AvailableMask;
};
using KHETERO_PROCESSOR_SET  = struct _KHETERO_PROCESSOR_SET;
using PKHETERO_PROCESSOR_SET = struct _KHETERO_PROCESSOR_SET*;

union _KWAIT_STATUS_REGISTER
{
    /* 00 */ uint8_t Flags;
    /* 00:0 */ uint8_t State    : 3;
    /* 00:3 */ uint8_t Affinity : 1;
    /* 00:4 */ uint8_t Priority : 1;
    /* 00:5 */ uint8_t Apc      : 1;
    /* 00:6 */ uint8_t UserApc  : 1;
    /* 00:7 */ uint8_t Alert    : 1;
};
using KWAIT_STATUS_REGISTER  = union _KWAIT_STATUS_REGISTER;
using PKWAIT_STATUS_REGISTER = union _KWAIT_STATUS_REGISTER*;

struct _PS_TRUSTLET_TKSESSION_ID
{
    /* 00 */ std::array<uint64_t, 4> SessionId;
};
using PS_TRUSTLET_TKSESSION_ID  = struct _PS_TRUSTLET_TKSESSION_ID;
using PPS_TRUSTLET_TKSESSION_ID = struct _PS_TRUSTLET_TKSESSION_ID*;

struct _HEAP_LFH_SUBSEGMENT_STAT
{
    /* 00 */ uint8_t Index;
    /* 01 */ uint8_t Count;
};
using HEAP_LFH_SUBSEGMENT_STAT  = struct _HEAP_LFH_SUBSEGMENT_STAT;
using PHEAP_LFH_SUBSEGMENT_STAT = struct _HEAP_LFH_SUBSEGMENT_STAT*;

struct _HEAP_GLOBAL_APPCOMPAT_FLAGS
{
    /* 00:0 */ uint32_t SafeInputValidation  : 1;
    /* 00:1 */ uint32_t Padding              : 1;
    /* 00:2 */ uint32_t CommitLFHSubsegments : 1;
    /* 00:3 */ uint32_t AllocateHeapFromEnv  : 1;
};
using HEAP_GLOBAL_APPCOMPAT_FLAGS  = struct _HEAP_GLOBAL_APPCOMPAT_FLAGS;
using PHEAP_GLOBAL_APPCOMPAT_FLAGS = struct _HEAP_GLOBAL_APPCOMPAT_FLAGS*;

struct _PO_DIAG_STACK_RECORD
{
    /* 00 */ uint32_t StackDepth;
    /* 08 */ std::array<void*, 1> Stack;
};
using PO_DIAG_STACK_RECORD  = struct _PO_DIAG_STACK_RECORD;
using PPO_DIAG_STACK_RECORD = struct _PO_DIAG_STACK_RECORD*;

struct _KLOCK_ENTRY_LOCK_STATE
{
    /* 00:0 */ uint64_t CrossThreadReleasable : 1;
    /* 00:1 */ uint64_t Busy                  : 1;
    /* 00:2 */ uint64_t Reserved              : 61;
    /* 00:63 */ uint64_t InTree               : 1;
    /* 00 */ void* LockState;
    /* 08 */ void* SessionState;
    /* 08 */ uint32_t SessionId;
    /* 0c */ uint32_t SessionPad;
};
using KLOCK_ENTRY_LOCK_STATE  = struct _KLOCK_ENTRY_LOCK_STATE;
using PKLOCK_ENTRY_LOCK_STATE = struct _KLOCK_ENTRY_LOCK_STATE*;

struct _WHEA_IPF_CPE_DESCRIPTOR
{
    /* 00 */ uint16_t Type;
    /* 02 */ uint8_t Enabled;
    /* 03 */ uint8_t Reserved;
};
using WHEA_IPF_CPE_DESCRIPTOR  = struct _WHEA_IPF_CPE_DESCRIPTOR;
using PWHEA_IPF_CPE_DESCRIPTOR = struct _WHEA_IPF_CPE_DESCRIPTOR*;

struct _OWNER_ENTRY
{
    /* 00 */ uint64_t OwnerThread;
    /* 08:0 */ uint32_t IoPriorityBoosted    : 1;
    /* 08:1 */ uint32_t OwnerReferenced      : 1;
    /* 08:2 */ uint32_t IoQoSPriorityBoosted : 1;
    /* 08:3 */ uint32_t OwnerCount           : 29;
    /* 08 */ uint32_t TableSize;
};
using OWNER_ENTRY  = struct _OWNER_ENTRY;
using POWNER_ENTRY = struct _OWNER_ENTRY*;

union _XPF_MCE_FLAGS
{
    /* 00:0 */ uint32_t MCG_CapabilityRW    : 1;
    /* 00:1 */ uint32_t MCG_GlobalControlRW : 1;
    /* 00:2 */ uint32_t Reserved            : 30;
    /* 00 */ uint32_t AsULONG;
};
using XPF_MCE_FLAGS  = union _XPF_MCE_FLAGS;
using PXPF_MCE_FLAGS = union _XPF_MCE_FLAGS*;

struct _SE_AUDIT_PROCESS_CREATION_INFO
{
    /* 00 */ _OBJECT_NAME_INFORMATION* ImageFileName;
};
using SE_AUDIT_PROCESS_CREATION_INFO  = struct _SE_AUDIT_PROCESS_CREATION_INFO;
using PSE_AUDIT_PROCESS_CREATION_INFO = struct _SE_AUDIT_PROCESS_CREATION_INFO*;

union _PPM_IDLE_SYNCHRONIZATION_STATE
{
    /* 00 */ int32_t AsLong;
    /* 00:0 */ int32_t RefCount : 24;
    /* 00:24 */ uint32_t State  : 8;
};
using PPM_IDLE_SYNCHRONIZATION_STATE  = union _PPM_IDLE_SYNCHRONIZATION_STATE;
using PPPM_IDLE_SYNCHRONIZATION_STATE = union _PPM_IDLE_SYNCHRONIZATION_STATE*;

struct _POP_FX_DEVICE
{
};
using POP_FX_DEVICE  = struct _POP_FX_DEVICE;
using PPOP_FX_DEVICE = struct _POP_FX_DEVICE*;

struct _PS_JOB_WAKE_INFORMATION
{
    /* 00 */ uint64_t NotificationChannel;
    /* 08 */ std::array<uint64_t, 7> WakeCounters;
    /* 40 */ uint64_t NoWakeCounter;
};
using PS_JOB_WAKE_INFORMATION  = struct _PS_JOB_WAKE_INFORMATION;
using PPS_JOB_WAKE_INFORMATION = struct _PS_JOB_WAKE_INFORMATION*;

struct _PPM_CONCURRENCY_ACCOUNTING
{
    /* 00 */ uint64_t Lock;
    /* 08 */ uint32_t Processors;
    /* 0c */ uint32_t ActiveProcessors;
    /* 10 */ uint64_t LastUpdateTime;
    /* 18 */ uint64_t TotalTime;
    /* 20 */ std::array<uint64_t, 37> IdleIntervalStats;
    /* 148 */ std::array<uint64_t, 1> AccumulatedTime;
};
using PPM_CONCURRENCY_ACCOUNTING  = struct _PPM_CONCURRENCY_ACCOUNTING;
using PPPM_CONCURRENCY_ACCOUNTING = struct _PPM_CONCURRENCY_ACCOUNTING*;

struct _PEBS_DS_SAVE_AREA64
{
    /* 00 */ uint64_t BtsBufferBase;
    /* 08 */ uint64_t BtsIndex;
    /* 10 */ uint64_t BtsAbsoluteMaximum;
    /* 18 */ uint64_t BtsInterruptThreshold;
    /* 20 */ uint64_t PebsBufferBase;
    /* 28 */ uint64_t PebsIndex;
    /* 30 */ uint64_t PebsAbsoluteMaximum;
    /* 38 */ uint64_t PebsInterruptThreshold;
    /* 40 */ std::array<uint64_t, 8> PebsGpCounterReset;
    /* 80 */ std::array<uint64_t, 4> PebsFixedCounterReset;
};
using PEBS_DS_SAVE_AREA64  = struct _PEBS_DS_SAVE_AREA64;
using PPEBS_DS_SAVE_AREA64 = struct _PEBS_DS_SAVE_AREA64*;

struct _RTL_STD_LIST_ENTRY
{
    /* 00 */ _RTL_STD_LIST_ENTRY* Next;
};
using RTL_STD_LIST_ENTRY  = struct _RTL_STD_LIST_ENTRY;
using PRTL_STD_LIST_ENTRY = struct _RTL_STD_LIST_ENTRY*;

struct _NT_TIB32
{
    /* 00 */ uint32_t ExceptionList;
    /* 04 */ uint32_t StackBase;
    /* 08 */ uint32_t StackLimit;
    /* 0c */ uint32_t SubSystemTib;
    /* 10 */ uint32_t FiberData;
    /* 10 */ uint32_t Version;
    /* 14 */ uint32_t ArbitraryUserPointer;
    /* 18 */ uint32_t Self;
};
using NT_TIB32  = struct _NT_TIB32;
using PNT_TIB32 = struct _NT_TIB32*;

union _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_VALIDBITS
{
    /* 00:0 */ uint8_t FRUId    : 1;
    /* 00:1 */ uint8_t FRUText  : 1;
    /* 00:2 */ uint8_t Reserved : 6;
    /* 00 */ uint8_t AsUCHAR;
};
using WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_VALIDBITS  = union _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_VALIDBITS;
using PWHEA_ERROR_RECORD_SECTION_DESCRIPTOR_VALIDBITS = union _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_VALIDBITS*;

union _HEAP_LFH_SUBSEGMENT_DELAY_FREE
{
    /* 00:0 */ uint64_t DelayFree : 1;
    /* 00:1 */ uint64_t Count     : 63;
    /* 00 */ void* AllBits;
};
using HEAP_LFH_SUBSEGMENT_DELAY_FREE  = union _HEAP_LFH_SUBSEGMENT_DELAY_FREE;
using PHEAP_LFH_SUBSEGMENT_DELAY_FREE = union _HEAP_LFH_SUBSEGMENT_DELAY_FREE*;

union RTLP_HP_LFH_PERF_FLAGS
{
    /* 00:0 */ uint32_t HotspotDetection            : 1;
    /* 00:1 */ uint32_t HotspotFullCommit           : 1;
    /* 00:2 */ uint32_t ActiveSubsegment            : 1;
    /* 00:3 */ uint32_t SmallerSubsegment           : 1;
    /* 00:4 */ uint32_t SingleAffinitySlot          : 1;
    /* 00:5 */ uint32_t ApplyLfhDecommitPolicy      : 1;
    /* 00:6 */ uint32_t EnableGarbageCollection     : 1;
    /* 00:7 */ uint32_t LargePagePreCommit          : 1;
    /* 00:8 */ uint32_t OpportunisticLargePreCommit : 1;
    /* 00:9 */ uint32_t LfhForcedAffinity           : 1;
    /* 00:10 */ uint32_t LfhCachelinePadding        : 1;
    /* 00 */ uint32_t AllFlags;
};

struct _IOP_IRP_STACK_PROFILER
{
    /* 00 */ std::array<uint32_t, 20> Profile;
    /* 50 */ uint32_t TotalIrps;
};
using IOP_IRP_STACK_PROFILER  = struct _IOP_IRP_STACK_PROFILER;
using PIOP_IRP_STACK_PROFILER = struct _IOP_IRP_STACK_PROFILER*;

struct _LDRP_CSLIST
{
    /* 00 */ _SINGLE_LIST_ENTRY* Tail;
};
using LDRP_CSLIST  = struct _LDRP_CSLIST;
using PLDRP_CSLIST = struct _LDRP_CSLIST*;

struct _MMSUPPORT_FLAGS
{
    /* 00:0 */ uint8_t WorkingSetType        : 3;
    /* 00:3 */ uint8_t Reserved0             : 3;
    /* 00:6 */ uint8_t MaximumWorkingSetHard : 1;
    /* 00:7 */ uint8_t MinimumWorkingSetHard : 1;
    /* 01:0 */ uint8_t SessionMaster         : 1;
    /* 01:1 */ uint8_t TrimmerState          : 2;
    /* 01:3 */ uint8_t Reserved              : 1;
    /* 01:4 */ uint8_t PageStealers          : 4;
    /* 00 */ uint16_t u1;
    /* 02 */ uint8_t MemoryPriority;
    /* 03:0 */ uint8_t WsleDeleted        : 1;
    /* 03:1 */ uint8_t SvmEnabled         : 1;
    /* 03:2 */ uint8_t ForceAge           : 1;
    /* 03:3 */ uint8_t ForceTrim          : 1;
    /* 03:4 */ uint8_t NewMaximum         : 1;
    /* 03:5 */ uint8_t CommitReleaseState : 2;
    /* 03 */ uint8_t u2;
};
using MMSUPPORT_FLAGS  = struct _MMSUPPORT_FLAGS;
using PMMSUPPORT_FLAGS = struct _MMSUPPORT_FLAGS*;

union _WHEA_ERROR_PACKET_FLAGS
{
    /* 00:0 */ uint32_t PreviousError               : 1;
    /* 00:1 */ uint32_t CriticalEvent               : 1;
    /* 00:2 */ uint32_t HypervisorError             : 1;
    /* 00:3 */ uint32_t Simulated                   : 1;
    /* 00:4 */ uint32_t PlatformPfaControl          : 1;
    /* 00:5 */ uint32_t PlatformDirectedOffline     : 1;
    /* 00:6 */ uint32_t AddressTranslationRequired  : 1;
    /* 00:7 */ uint32_t AddressTranslationCompleted : 1;
    /* 00:8 */ uint32_t RecoveryOptional            : 1;
    /* 00:9 */ uint32_t Reserved2                   : 23;
    /* 00 */ uint32_t AsULONG;
};
using WHEA_ERROR_PACKET_FLAGS  = union _WHEA_ERROR_PACKET_FLAGS;
using PWHEA_ERROR_PACKET_FLAGS = union _WHEA_ERROR_PACKET_FLAGS*;

struct _PROC_FEEDBACK
{
    /* 00 */ uint64_t Lock;
    /* 08 */ uint64_t CyclesLast;
    /* 10 */ uint64_t CyclesActive;
    /* 18 */ std::array<_PROC_FEEDBACK_COUNTER*, 2> Counters;
    /* 28 */ uint64_t LastUpdateTime;
    /* 30 */ uint64_t UnscaledTime;
    /* 38 */ int64_t UnaccountedTime;
    /* 40 */ std::array<uint64_t, 2> ScaledTime;
    /* 50 */ uint64_t UnaccountedKernelTime;
    /* 58 */ uint64_t PerformanceScaledKernelTime;
    /* 60 */ uint32_t UserTimeLast;
    /* 64 */ uint32_t KernelTimeLast;
    /* 68 */ uint64_t IdleGenerationNumberLast;
    /* 70 */ uint64_t HvActiveTimeLast;
    /* 78 */ uint64_t StallCyclesLast;
    /* 80 */ uint64_t StallTime;
    /* 88 */ uint8_t KernelTimesIndex;
    /* 89 */ uint8_t CounterDiscardsIdleTime;
    /* 8a */ uint8_t CounterReadOptimize;
};
using PROC_FEEDBACK  = struct _PROC_FEEDBACK;
using PPROC_FEEDBACK = struct _PROC_FEEDBACK*;

union _TIMELINE_BITMAP
{
    /* 00 */ uint64_t Value;
    /* 00 */ uint32_t EndTime;
    /* 04 */ uint32_t Bitmap;
};
using TIMELINE_BITMAP  = union _TIMELINE_BITMAP;
using PTIMELINE_BITMAP = union _TIMELINE_BITMAP*;

struct _PROC_FEEDBACK_COUNTER
{
    /* 00 */ std::function<void(uint64_t, uint32_t*)> InstantaneousRead;
    /* 00 */ std::function<void(uint64_t, uint8_t, uint64_t*, uint64_t*)> DifferentialRead;
    /* 08 */ uint64_t LastActualCount;
    /* 10 */ uint64_t LastReferenceCount;
    /* 18 */ uint32_t CachedValue;
    /* 20 */ uint8_t Affinitized;
    /* 21 */ uint8_t Differential;
    /* 22 */ uint8_t DiscardIdleTime;
    /* 24 */ uint32_t Scaling;
    /* 28 */ uint64_t Context;
};
using PROC_FEEDBACK_COUNTER  = struct _PROC_FEEDBACK_COUNTER;
using PPROC_FEEDBACK_COUNTER = struct _PROC_FEEDBACK_COUNTER*;

struct _M128A
{
    /* 00 */ uint64_t Low;
    /* 08 */ int64_t High;
};
using M128A  = struct _M128A;
using PM128A = struct _M128A*;

struct _WHEA_ERROR_SOURCE_CONFIGURATION_DD
{
    /* 00 */ std::function<int32_t(void*, uint32_t)> Initialize;
    /* 08 */ std::function<void(void*)> Uninitialize;
    /* 10 */ std::function<int32_t(void*, uint32_t*)> Correct;
};
using WHEA_ERROR_SOURCE_CONFIGURATION_DD  = struct _WHEA_ERROR_SOURCE_CONFIGURATION_DD;
using PWHEA_ERROR_SOURCE_CONFIGURATION_DD = struct _WHEA_ERROR_SOURCE_CONFIGURATION_DD*;

struct BATTERY_REPORTING_SCALE
{
    /* 00 */ uint32_t Granularity;
    /* 04 */ uint32_t Capacity;
};

struct _HEAP_USERDATA_OFFSETS
{
    /* 00 */ uint16_t FirstAllocationOffset;
    /* 02 */ uint16_t BlockStride;
    /* 00 */ uint32_t StrideAndOffset;
};
using HEAP_USERDATA_OFFSETS  = struct _HEAP_USERDATA_OFFSETS;
using PHEAP_USERDATA_OFFSETS = struct _HEAP_USERDATA_OFFSETS*;

struct _SYNCH_COUNTERS
{
    /* 00 */ uint32_t SpinLockAcquireCount;
    /* 04 */ uint32_t SpinLockContentionCount;
    /* 08 */ uint32_t SpinLockSpinCount;
    /* 0c */ uint32_t IpiSendRequestBroadcastCount;
    /* 10 */ uint32_t IpiSendRequestRoutineCount;
    /* 14 */ uint32_t IpiSendSoftwareInterruptCount;
    /* 18 */ uint32_t ExInitializeResourceCount;
    /* 1c */ uint32_t ExReInitializeResourceCount;
    /* 20 */ uint32_t ExDeleteResourceCount;
    /* 24 */ uint32_t ExecutiveResourceAcquiresCount;
    /* 28 */ uint32_t ExecutiveResourceContentionsCount;
    /* 2c */ uint32_t ExecutiveResourceReleaseExclusiveCount;
    /* 30 */ uint32_t ExecutiveResourceReleaseSharedCount;
    /* 34 */ uint32_t ExecutiveResourceConvertsCount;
    /* 38 */ uint32_t ExAcqResExclusiveAttempts;
    /* 3c */ uint32_t ExAcqResExclusiveAcquiresExclusive;
    /* 40 */ uint32_t ExAcqResExclusiveAcquiresExclusiveRecursive;
    /* 44 */ uint32_t ExAcqResExclusiveWaits;
    /* 48 */ uint32_t ExAcqResExclusiveNotAcquires;
    /* 4c */ uint32_t ExAcqResSharedAttempts;
    /* 50 */ uint32_t ExAcqResSharedAcquiresExclusive;
    /* 54 */ uint32_t ExAcqResSharedAcquiresShared;
    /* 58 */ uint32_t ExAcqResSharedAcquiresSharedRecursive;
    /* 5c */ uint32_t ExAcqResSharedWaits;
    /* 60 */ uint32_t ExAcqResSharedNotAcquires;
    /* 64 */ uint32_t ExAcqResSharedStarveExclusiveAttempts;
    /* 68 */ uint32_t ExAcqResSharedStarveExclusiveAcquiresExclusive;
    /* 6c */ uint32_t ExAcqResSharedStarveExclusiveAcquiresShared;
    /* 70 */ uint32_t ExAcqResSharedStarveExclusiveAcquiresSharedRecursive;
    /* 74 */ uint32_t ExAcqResSharedStarveExclusiveWaits;
    /* 78 */ uint32_t ExAcqResSharedStarveExclusiveNotAcquires;
    /* 7c */ uint32_t ExAcqResSharedWaitForExclusiveAttempts;
    /* 80 */ uint32_t ExAcqResSharedWaitForExclusiveAcquiresExclusive;
    /* 84 */ uint32_t ExAcqResSharedWaitForExclusiveAcquiresShared;
    /* 88 */ uint32_t ExAcqResSharedWaitForExclusiveAcquiresSharedRecursive;
    /* 8c */ uint32_t ExAcqResSharedWaitForExclusiveWaits;
    /* 90 */ uint32_t ExAcqResSharedWaitForExclusiveNotAcquires;
    /* 94 */ uint32_t ExSetResOwnerPointerExclusive;
    /* 98 */ uint32_t ExSetResOwnerPointerSharedNew;
    /* 9c */ uint32_t ExSetResOwnerPointerSharedOld;
    /* a0 */ uint32_t ExTryToAcqExclusiveAttempts;
    /* a4 */ uint32_t ExTryToAcqExclusiveAcquires;
    /* a8 */ uint32_t ExBoostExclusiveOwner;
    /* ac */ uint32_t ExBoostSharedOwners;
    /* b0 */ uint32_t ExEtwSynchTrackingNotificationsCount;
    /* b4 */ uint32_t ExEtwSynchTrackingNotificationsAccountedCount;
};
using SYNCH_COUNTERS  = struct _SYNCH_COUNTERS;
using PSYNCH_COUNTERS = struct _SYNCH_COUNTERS*;

struct _ETW_BUFFER_CONTEXT
{
    /* 00 */ uint8_t ProcessorNumber;
    /* 01 */ uint8_t Alignment;
    /* 00 */ uint16_t ProcessorIndex;
    /* 02 */ uint16_t LoggerId;
};
using ETW_BUFFER_CONTEXT  = struct _ETW_BUFFER_CONTEXT;
using PETW_BUFFER_CONTEXT = struct _ETW_BUFFER_CONTEXT*;

struct _PROC_PERF_CHECK_CONTEXT
{
    /* 00 */ _PROC_PERF_DOMAIN* Domain;
    /* 08 */ _PROC_PERF_CONSTRAINT* Constraint;
    /* 10 */ _PROC_PERF_CHECK* PerfCheck;
    /* 18 */ _PROC_PERF_LOAD* Load;
    /* 20 */ _PROC_PERF_HISTORY* PerfHistory;
    /* 28 */ uint32_t Utility;
    /* 2c */ uint32_t AffinitizedUtility;
    /* 30 */ uint32_t MediaUtility;
    /* 34 */ uint32_t ImportantUtility;
    /* 38 */ uint32_t IdealUtility;
    /* 3c */ uint16_t LatestAffinitizedPercent;
    /* 3e */ uint16_t AveragePerformancePercent;
    /* 40 */ uint32_t RelativePerformance;
    /* 44 */ uint8_t NtProcessor;
};
using PROC_PERF_CHECK_CONTEXT  = struct _PROC_PERF_CHECK_CONTEXT;
using PPROC_PERF_CHECK_CONTEXT = struct _PROC_PERF_CHECK_CONTEXT*;

struct _ACCESS_REASONS
{
    /* 00 */ std::array<uint32_t, 32> Data;
};
using ACCESS_REASONS  = struct _ACCESS_REASONS;
using PACCESS_REASONS = struct _ACCESS_REASONS*;

struct _WHEA_XPF_NMI_DESCRIPTOR
{
    /* 00 */ uint16_t Type;
    /* 02 */ uint8_t Enabled;
};
using WHEA_XPF_NMI_DESCRIPTOR  = struct _WHEA_XPF_NMI_DESCRIPTOR;
using PWHEA_XPF_NMI_DESCRIPTOR = struct _WHEA_XPF_NMI_DESCRIPTOR*;

struct _KCLOCK_INCREMENT_TRACE
{
    /* 00 */ uint32_t ActualIncrement;
    /* 04 */ uint32_t RequestedIncrement;
    /* 08 */ uint64_t InterruptTime;
    /* 10 */ uint64_t PerformanceCounter;
    /* 18 */ uint8_t OneShot;
};
using KCLOCK_INCREMENT_TRACE  = struct _KCLOCK_INCREMENT_TRACE;
using PKCLOCK_INCREMENT_TRACE = struct _KCLOCK_INCREMENT_TRACE*;

struct _SID_IDENTIFIER_AUTHORITY
{
    /* 00 */ std::array<uint8_t, 6> Value;
};
using SID_IDENTIFIER_AUTHORITY  = struct _SID_IDENTIFIER_AUTHORITY;
using PSID_IDENTIFIER_AUTHORITY = struct _SID_IDENTIFIER_AUTHORITY*;

struct _HEAP_OPPORTUNISTIC_LARGE_PAGE_STATS
{
    /* 00 */ uint64_t SmallPagesInUseWithinLarge;
    /* 08 */ uint64_t OpportunisticLargePageCount;
};
using HEAP_OPPORTUNISTIC_LARGE_PAGE_STATS  = struct _HEAP_OPPORTUNISTIC_LARGE_PAGE_STATS;
using PHEAP_OPPORTUNISTIC_LARGE_PAGE_STATS = struct _HEAP_OPPORTUNISTIC_LARGE_PAGE_STATS*;

struct _TXN_PARAMETER_BLOCK
{
    /* 00 */ uint16_t Length;
    /* 02 */ uint16_t TxFsContext;
    /* 08 */ void* TransactionObject;
};
using TXN_PARAMETER_BLOCK  = struct _TXN_PARAMETER_BLOCK;
using PTXN_PARAMETER_BLOCK = struct _TXN_PARAMETER_BLOCK*;

struct _ETW_SILODRIVERSTATE
{
};
using ETW_SILODRIVERSTATE  = struct _ETW_SILODRIVERSTATE;
using PETW_SILODRIVERSTATE = struct _ETW_SILODRIVERSTATE*;

struct _EXP_LICENSE_STATE
{
};
using EXP_LICENSE_STATE  = struct _EXP_LICENSE_STATE;
using PEXP_LICENSE_STATE = struct _EXP_LICENSE_STATE*;

struct _NLS_STATE
{
};
using NLS_STATE  = struct _NLS_STATE;
using PNLS_STATE = struct _NLS_STATE*;

struct _WNF_STATE_NAME
{
    /* 00 */ std::array<uint32_t, 2> Data;
};
using WNF_STATE_NAME  = struct _WNF_STATE_NAME;
using PWNF_STATE_NAME = struct _WNF_STATE_NAME*;

struct _OB_EXTENDED_PARSE_PARAMETERS
{
    /* 00 */ uint16_t Length;
    /* 04 */ uint32_t RestrictedAccessMask;
    /* 08 */ _EJOB* Silo;
};
using OB_EXTENDED_PARSE_PARAMETERS  = struct _OB_EXTENDED_PARSE_PARAMETERS;
using POB_EXTENDED_PARSE_PARAMETERS = struct _OB_EXTENDED_PARSE_PARAMETERS*;

struct _GENERIC_MAPPING
{
    /* 00 */ uint32_t GenericRead;
    /* 04 */ uint32_t GenericWrite;
    /* 08 */ uint32_t GenericExecute;
    /* 0c */ uint32_t GenericAll;
};
using GENERIC_MAPPING  = struct _GENERIC_MAPPING;
using PGENERIC_MAPPING = struct _GENERIC_MAPPING*;

struct _SEP_LOGON_SESSION_REFERENCES
{
};
using SEP_LOGON_SESSION_REFERENCES  = struct _SEP_LOGON_SESSION_REFERENCES;
using PSEP_LOGON_SESSION_REFERENCES = struct _SEP_LOGON_SESSION_REFERENCES*;

struct _CI_NGEN_PATHS
{
};
using CI_NGEN_PATHS  = struct _CI_NGEN_PATHS;
using PCI_NGEN_PATHS = struct _CI_NGEN_PATHS*;

struct _SEP_SILOSTATE
{
    /* 00 */ _SEP_LOGON_SESSION_REFERENCES* SystemLogonSession;
    /* 08 */ _SEP_LOGON_SESSION_REFERENCES* AnonymousLogonSession;
    /* 10 */ void* AnonymousLogonToken;
    /* 18 */ void* AnonymousLogonTokenNoEveryone;
    /* 20 */ _UNICODE_STRING* UncSystemPaths;
    /* 28 */ _CI_NGEN_PATHS* NgenPaths;
};
using SEP_SILOSTATE  = struct _SEP_SILOSTATE;
using PSEP_SILOSTATE = struct _SEP_SILOSTATE*;

struct _KSCHEDULING_GROUP_POLICY
{
    /* 00 */ uint32_t Value;
    /* 00 */ uint16_t Weight;
    /* 00 */ uint16_t MinRate;
    /* 02 */ uint16_t MaxRate;
    /* 04 */ uint32_t AllFlags;
    /* 04:0 */ uint32_t Type     : 1;
    /* 04:1 */ uint32_t Disabled : 1;
    /* 04:2 */ uint32_t RankBias : 1;
    /* 04:3 */ uint32_t Spare1   : 29;
};
using KSCHEDULING_GROUP_POLICY  = struct _KSCHEDULING_GROUP_POLICY;
using PKSCHEDULING_GROUP_POLICY = struct _KSCHEDULING_GROUP_POLICY*;

struct _LDR_SERVICE_TAG_RECORD
{
    /* 00 */ _LDR_SERVICE_TAG_RECORD* Next;
    /* 08 */ uint32_t ServiceTag;
};
using LDR_SERVICE_TAG_RECORD  = struct _LDR_SERVICE_TAG_RECORD;
using PLDR_SERVICE_TAG_RECORD = struct _LDR_SERVICE_TAG_RECORD*;

struct _INVERTED_FUNCTION_TABLE_ENTRY
{
    /* 00 */ _IMAGE_RUNTIME_FUNCTION_ENTRY* FunctionTable;
    /* 00 */ _DYNAMIC_FUNCTION_TABLE* DynamicTable;
    /* 08 */ void* ImageBase;
    /* 10 */ uint32_t SizeOfImage;
    /* 14 */ uint32_t SizeOfTable;
};
using INVERTED_FUNCTION_TABLE_ENTRY  = struct _INVERTED_FUNCTION_TABLE_ENTRY;
using PINVERTED_FUNCTION_TABLE_ENTRY = struct _INVERTED_FUNCTION_TABLE_ENTRY*;

struct _OBJECT_DUMP_CONTROL
{
    /* 00 */ void* Stream;
    /* 08 */ uint32_t Detail;
};
using OBJECT_DUMP_CONTROL  = struct _OBJECT_DUMP_CONTROL;
using POBJECT_DUMP_CONTROL = struct _OBJECT_DUMP_CONTROL*;

struct _IMAGE_RUNTIME_FUNCTION_ENTRY
{
    /* 00 */ uint32_t BeginAddress;
    /* 04 */ uint32_t EndAddress;
    /* 08 */ uint32_t UnwindInfoAddress;
    /* 08 */ uint32_t UnwindData;
};
using IMAGE_RUNTIME_FUNCTION_ENTRY  = struct _IMAGE_RUNTIME_FUNCTION_ENTRY;
using PIMAGE_RUNTIME_FUNCTION_ENTRY = struct _IMAGE_RUNTIME_FUNCTION_ENTRY*;

struct _PROCESSOR_CYCLES_WORKLOAD_CLASS
{
    /* 00 */ uint32_t Count;
    /* 08 */ std::array<uint64_t, 1> ProcessorCyclesClass;
};
using PROCESSOR_CYCLES_WORKLOAD_CLASS  = struct _PROCESSOR_CYCLES_WORKLOAD_CLASS;
using PPROCESSOR_CYCLES_WORKLOAD_CLASS = struct _PROCESSOR_CYCLES_WORKLOAD_CLASS*;

union _KQOS_GROUPING_SETS
{
    /* 00 */ uint64_t SingleCoreSet;
    /* 08 */ uint64_t SmtSet;
};
using KQOS_GROUPING_SETS  = union _KQOS_GROUPING_SETS;
using PKQOS_GROUPING_SETS = union _KQOS_GROUPING_SETS*;

struct _RTL_BALANCED_LINKS
{
    /* 00 */ _RTL_BALANCED_LINKS* Parent;
    /* 08 */ _RTL_BALANCED_LINKS* LeftChild;
    /* 10 */ _RTL_BALANCED_LINKS* RightChild;
    /* 18 */ char Balance;
    /* 19 */ std::array<uint8_t, 3> Reserved;
};
using RTL_BALANCED_LINKS  = struct _RTL_BALANCED_LINKS;
using PRTL_BALANCED_LINKS = struct _RTL_BALANCED_LINKS*;

struct _HEAP_EXTENDED_ENTRY
{
    /* 00 */ void* Reserved;
    /* 08 */ uint16_t FunctionIndex;
    /* 0a */ uint16_t ContextValue;
    /* 08 */ uint32_t InterceptorValue;
    /* 0c */ uint16_t UnusedBytesLength;
    /* 0e */ uint8_t EntryOffset;
    /* 0f */ uint8_t ExtendedBlockSignature;
};
using HEAP_EXTENDED_ENTRY  = struct _HEAP_EXTENDED_ENTRY;
using PHEAP_EXTENDED_ENTRY = struct _HEAP_EXTENDED_ENTRY*;

union _KE_PROCESS_CONCURRENCY_COUNT
{
    /* 00:0 */ uint32_t Fraction : 20;
    /* 00:20 */ uint32_t Count   : 12;
    /* 00 */ uint32_t AllFields;
};
using KE_PROCESS_CONCURRENCY_COUNT  = union _KE_PROCESS_CONCURRENCY_COUNT;
using PKE_PROCESS_CONCURRENCY_COUNT = union _KE_PROCESS_CONCURRENCY_COUNT*;

union _XPF_MC_BANK_FLAGS
{
    /* 00:0 */ uint8_t ClearOnInitializationRW : 1;
    /* 00:1 */ uint8_t ControlDataRW           : 1;
    /* 00:2 */ uint8_t Reserved                : 6;
    /* 00 */ uint8_t AsUCHAR;
};
using XPF_MC_BANK_FLAGS  = union _XPF_MC_BANK_FLAGS;
using PXPF_MC_BANK_FLAGS = union _XPF_MC_BANK_FLAGS*;

struct _PROC_PERF_HISTORY_ENTRY
{
    /* 00 */ uint16_t Utility;
    /* 02 */ uint16_t AffinitizedUtility;
    /* 04 */ uint16_t Frequency;
    /* 06 */ uint8_t ImportantPercent;
    /* 07 */ uint8_t IdealPercent;
    /* 08 */ std::array<uint8_t, 4> TaggedPercent;
};
using PROC_PERF_HISTORY_ENTRY  = struct _PROC_PERF_HISTORY_ENTRY;
using PPROC_PERF_HISTORY_ENTRY = struct _PROC_PERF_HISTORY_ENTRY*;

struct _HEAP_UNPACKED_ENTRY
{
    /* 00 */ void* PreviousBlockPrivateData;
    /* 08 */ uint16_t Size;
    /* 0a */ uint8_t Flags;
    /* 0b */ uint8_t SmallTagIndex;
    /* 08 */ uint32_t SubSegmentCode;
    /* 0c */ uint16_t PreviousSize;
    /* 0e */ uint8_t SegmentOffset;
    /* 0e */ uint8_t LFHFlags;
    /* 0f */ uint8_t UnusedBytes;
    /* 08 */ uint64_t CompactHeader;
};
using HEAP_UNPACKED_ENTRY  = struct _HEAP_UNPACKED_ENTRY;
using PHEAP_UNPACKED_ENTRY = struct _HEAP_UNPACKED_ENTRY*;

struct _IMAGE_DATA_DIRECTORY
{
    /* 00 */ uint32_t VirtualAddress;
    /* 04 */ uint32_t Size;
};
using IMAGE_DATA_DIRECTORY  = struct _IMAGE_DATA_DIRECTORY;
using PIMAGE_DATA_DIRECTORY = struct _IMAGE_DATA_DIRECTORY*;

struct _XSTATE_FEATURE
{
    /* 00 */ uint32_t Offset;
    /* 04 */ uint32_t Size;
};
using XSTATE_FEATURE  = struct _XSTATE_FEATURE;
using PXSTATE_FEATURE = struct _XSTATE_FEATURE*;

struct _PROC_IDLE_SNAP
{
    /* 00 */ uint64_t Time;
    /* 08 */ uint64_t Idle;
};
using PROC_IDLE_SNAP  = struct _PROC_IDLE_SNAP;
using PPROC_IDLE_SNAP = struct _PROC_IDLE_SNAP*;

union _WHEA_NOTIFICATION_FLAGS
{
    /* 00:0 */ uint16_t PollIntervalRW             : 1;
    /* 00:1 */ uint16_t SwitchToPollingThresholdRW : 1;
    /* 00:2 */ uint16_t SwitchToPollingWindowRW    : 1;
    /* 00:3 */ uint16_t ErrorThresholdRW           : 1;
    /* 00:4 */ uint16_t ErrorThresholdWindowRW     : 1;
    /* 00:5 */ uint16_t Reserved                   : 11;
    /* 00 */ uint16_t AsUSHORT;
};
using WHEA_NOTIFICATION_FLAGS  = union _WHEA_NOTIFICATION_FLAGS;
using PWHEA_NOTIFICATION_FLAGS = union _WHEA_NOTIFICATION_FLAGS*;

struct _PROC_PERF_LOAD
{
    /* 00 */ uint8_t BusyPercentage;
    /* 01 */ uint8_t FrequencyPercentage;
};
using PROC_PERF_LOAD  = struct _PROC_PERF_LOAD;
using PPROC_PERF_LOAD = struct _PROC_PERF_LOAD*;

struct _KHETERO_HWFEEDBACK_CLASS
{
    /* 00 */ uint8_t PerformanceClass;
    /* 01 */ uint8_t EfficiencyClass;
    /* 02 */ uint8_t PerformanceClassRawValue;
    /* 03 */ uint8_t EfficiencyClassRawValue;
};
using KHETERO_HWFEEDBACK_CLASS  = struct _KHETERO_HWFEEDBACK_CLASS;
using PKHETERO_HWFEEDBACK_CLASS = struct _KHETERO_HWFEEDBACK_CLASS*;

struct _RTL_ACTIVATION_CONTEXT_STACK_FRAME
{
    /* 00 */ _RTL_ACTIVATION_CONTEXT_STACK_FRAME* Previous;
    /* 08 */ _ACTIVATION_CONTEXT* ActivationContext;
    /* 10 */ uint32_t Flags;
};
using RTL_ACTIVATION_CONTEXT_STACK_FRAME  = struct _RTL_ACTIVATION_CONTEXT_STACK_FRAME;
using PRTL_ACTIVATION_CONTEXT_STACK_FRAME = struct _RTL_ACTIVATION_CONTEXT_STACK_FRAME*;

struct _PROC_PERF_QOS_CLASS_POLICY
{
    /* 00 */ uint32_t MaxPolicyPercent;
    /* 04 */ uint32_t MaxEquivalentFrequencyPercent;
    /* 08 */ uint32_t MinPolicyPercent;
    /* 0c */ uint32_t AutonomousActivityWindow;
    /* 10 */ uint32_t EnergyPerfPreference;
    /* 14 */ uint8_t ProvideGuidance;
    /* 15 */ uint8_t AllowThrottling;
    /* 16 */ uint8_t PerfBoostMode;
    /* 17 */ uint8_t LatencyHintPerf;
    /* 18 */ uint8_t LatencyHintEpp;
    /* 19 */ uint8_t TrackDesiredCrossClass;
};
using PROC_PERF_QOS_CLASS_POLICY  = struct _PROC_PERF_QOS_CLASS_POLICY;
using PPROC_PERF_QOS_CLASS_POLICY = struct _PROC_PERF_QOS_CLASS_POLICY*;

struct _PERF_CONTROL_STATE_SELECTION
{
    /* 00 */ uint64_t SelectedState;
    /* 08 */ uint32_t SelectedPercent;
    /* 0c */ uint32_t SelectedFrequency;
    /* 10 */ uint32_t MinPercent;
    /* 14 */ uint32_t MaxPercent;
    /* 18 */ uint32_t TolerancePercent;
    /* 1c */ uint32_t EppPercent;
    /* 20 */ uint32_t AutonomousActivityWindow;
    /* 24 */ uint8_t Autonomous;
    /* 25 */ uint8_t InheritFromDomain;
};
using PERF_CONTROL_STATE_SELECTION  = struct _PERF_CONTROL_STATE_SELECTION;
using PPERF_CONTROL_STATE_SELECTION = struct _PERF_CONTROL_STATE_SELECTION*;

struct _PROC_PERF_CHECK_CYCLE_SNAP
{
    /* 00 */ uint64_t CyclesActive;
    /* 08 */ uint64_t CyclesAffinitized;
    /* 10 */ std::array<uint64_t, 4> TaggedThreadCycles;
    /* 30 */ uint32_t WorkloadClasses;
    /* 38 */ std::array<uint64_t, 1> ThreadTypeCycles;
};
using PROC_PERF_CHECK_CYCLE_SNAP  = struct _PROC_PERF_CHECK_CYCLE_SNAP;
using PPROC_PERF_CHECK_CYCLE_SNAP = struct _PROC_PERF_CHECK_CYCLE_SNAP*;

struct _PEBS_DS_SAVE_AREA32
{
    /* 00 */ uint32_t BtsBufferBase;
    /* 04 */ uint32_t BtsIndex;
    /* 08 */ uint32_t BtsAbsoluteMaximum;
    /* 0c */ uint32_t BtsInterruptThreshold;
    /* 10 */ uint32_t PebsBufferBase;
    /* 14 */ uint32_t PebsIndex;
    /* 18 */ uint32_t PebsAbsoluteMaximum;
    /* 1c */ uint32_t PebsInterruptThreshold;
    /* 20 */ std::array<uint64_t, 8> PebsGpCounterReset;
    /* 60 */ std::array<uint64_t, 4> PebsFixedCounterReset;
};
using PEBS_DS_SAVE_AREA32  = struct _PEBS_DS_SAVE_AREA32;
using PPEBS_DS_SAVE_AREA32 = struct _PEBS_DS_SAVE_AREA32*;

struct _MACHINE_FRAME
{
    /* 00 */ uint64_t Rip;
    /* 08 */ uint16_t SegCs;
    /* 0a */ std::array<uint16_t, 3> Fill1;
    /* 10 */ uint32_t EFlags;
    /* 14 */ uint32_t Fill2;
    /* 18 */ uint64_t Rsp;
    /* 20 */ uint16_t SegSs;
    /* 22 */ std::array<uint16_t, 3> Fill3;
};
using MACHINE_FRAME  = struct _MACHINE_FRAME;
using PMACHINE_FRAME = struct _MACHINE_FRAME*;

struct _PROC_IDLE_POLICY
{
    /* 00 */ uint8_t PromotePercent;
    /* 01 */ uint8_t DemotePercent;
    /* 02 */ uint8_t PromotePercentBase;
    /* 03 */ uint8_t DemotePercentBase;
    /* 04 */ uint8_t AllowScaling;
    /* 05 */ uint8_t ForceLightIdle;
};
using PROC_IDLE_POLICY  = struct _PROC_IDLE_POLICY;
using PPROC_IDLE_POLICY = struct _PROC_IDLE_POLICY*;

struct _DBGKP_ERROR_PORT
{
};
using DBGKP_ERROR_PORT  = struct _DBGKP_ERROR_PORT;
using PDBGKP_ERROR_PORT = struct _DBGKP_ERROR_PORT*;

struct _FAKE_HEAP_ENTRY
{
    /* 00 */ uint64_t Size;
    /* 08 */ uint64_t PreviousSize;
};
using FAKE_HEAP_ENTRY  = struct _FAKE_HEAP_ENTRY;
using PFAKE_HEAP_ENTRY = struct _FAKE_HEAP_ENTRY*;

struct _PROCESSOR_IDLE_CONSTRAINTS
{
    /* 00 */ uint64_t TotalTime;
    /* 08 */ uint64_t IdleTime;
    /* 10 */ uint64_t ExpectedIdleDuration;
    /* 18 */ uint64_t MaxIdleDuration;
    /* 20 */ uint32_t OverrideState;
    /* 24 */ uint32_t TimeCheck;
    /* 28 */ uint8_t PromotePercent;
    /* 29 */ uint8_t DemotePercent;
    /* 2a */ uint8_t Parked;
    /* 2b */ uint8_t Interruptible;
    /* 2c */ uint8_t PlatformIdle;
    /* 2d */ uint8_t ExpectedWakeReason;
    /* 2e */ uint8_t IdleStateMax;
};
using PROCESSOR_IDLE_CONSTRAINTS  = struct _PROCESSOR_IDLE_CONSTRAINTS;
using PPROCESSOR_IDLE_CONSTRAINTS = struct _PROCESSOR_IDLE_CONSTRAINTS*;

struct _KTIMER_TABLE_STATE
{
    /* 00 */ std::array<uint64_t, 2> LastTimerExpiration;
    /* 10 */ std::array<uint32_t, 2> LastTimerHand;
};
using KTIMER_TABLE_STATE  = struct _KTIMER_TABLE_STATE;
using PKTIMER_TABLE_STATE = struct _KTIMER_TABLE_STATE*;

struct _KDESCRIPTOR
{
    /* 00 */ std::array<uint16_t, 3> Pad;
    /* 06 */ uint16_t Limit;
    /* 08 */ void* Base;
};
using KDESCRIPTOR  = struct _KDESCRIPTOR;
using PKDESCRIPTOR = struct _KDESCRIPTOR*;

struct _WNF_SCOPE_MAP
{
};
using WNF_SCOPE_MAP  = struct _WNF_SCOPE_MAP;
using PWNF_SCOPE_MAP = struct _WNF_SCOPE_MAP*;

struct _EXCEPTION_RECORD
{
    /* 00 */ int32_t ExceptionCode;
    /* 04 */ uint32_t ExceptionFlags;
    /* 08 */ _EXCEPTION_RECORD* ExceptionRecord;
    /* 10 */ void* ExceptionAddress;
    /* 18 */ uint32_t NumberParameters;
    /* 20 */ std::array<uint64_t, 15> ExceptionInformation;
};
using EXCEPTION_RECORD  = struct _EXCEPTION_RECORD;
using PEXCEPTION_RECORD = struct _EXCEPTION_RECORD*;

struct _FAST_IO_DISPATCH
{
    /* 00 */ uint32_t SizeOfFastIoDispatch;
    /* 08 */ std::function<uint8_t(_FILE_OBJECT*, _LARGE_INTEGER*, uint32_t, uint8_t, uint32_t, uint8_t, _IO_STATUS_BLOCK*, _DEVICE_OBJECT*)>
        FastIoCheckIfPossible;
    /* 10 */ std::function<uint8_t(_FILE_OBJECT*, _LARGE_INTEGER*, uint32_t, uint8_t, uint32_t, void*, _IO_STATUS_BLOCK*, _DEVICE_OBJECT*)>
        FastIoRead;
    /* 18 */ std::function<uint8_t(_FILE_OBJECT*, _LARGE_INTEGER*, uint32_t, uint8_t, uint32_t, void*, _IO_STATUS_BLOCK*, _DEVICE_OBJECT*)>
        FastIoWrite;
    /* 20 */ std::function<uint8_t(_FILE_OBJECT*, uint8_t, _FILE_BASIC_INFORMATION*, _IO_STATUS_BLOCK*, _DEVICE_OBJECT*)> FastIoQueryBasicInfo;
    /* 28 */ std::function<uint8_t(_FILE_OBJECT*, uint8_t, _FILE_STANDARD_INFORMATION*, _IO_STATUS_BLOCK*, _DEVICE_OBJECT*)> FastIoQueryStandardInfo;
    /* 30 */ std::function<uint8_t(
        _FILE_OBJECT*, _LARGE_INTEGER*, _LARGE_INTEGER*, _EPROCESS*, uint32_t, uint8_t, uint8_t, _IO_STATUS_BLOCK*, _DEVICE_OBJECT*)>
        FastIoLock;
    /* 38 */ std::function<uint8_t(_FILE_OBJECT*, _LARGE_INTEGER*, _LARGE_INTEGER*, _EPROCESS*, uint32_t, _IO_STATUS_BLOCK*, _DEVICE_OBJECT*)>
        FastIoUnlockSingle;
    /* 40 */ std::function<uint8_t(_FILE_OBJECT*, _EPROCESS*, _IO_STATUS_BLOCK*, _DEVICE_OBJECT*)> FastIoUnlockAll;
    /* 48 */ std::function<uint8_t(_FILE_OBJECT*, void*, uint32_t, _IO_STATUS_BLOCK*, _DEVICE_OBJECT*)> FastIoUnlockAllByKey;
    /* 50 */ std::function<uint8_t(_FILE_OBJECT*, uint8_t, void*, uint32_t, void*, uint32_t, uint32_t, _IO_STATUS_BLOCK*, _DEVICE_OBJECT*)>
        FastIoDeviceControl;
    /* 58 */ std::function<void(_FILE_OBJECT*)> AcquireFileForNtCreateSection;
    /* 60 */ std::function<void(_FILE_OBJECT*)> ReleaseFileForNtCreateSection;
    /* 68 */ std::function<void(_DEVICE_OBJECT*, _DEVICE_OBJECT*)> FastIoDetachDevice;
    /* 70 */ std::function<uint8_t(_FILE_OBJECT*, uint8_t, _FILE_NETWORK_OPEN_INFORMATION*, _IO_STATUS_BLOCK*, _DEVICE_OBJECT*)>
        FastIoQueryNetworkOpenInfo;
    /* 78 */ std::function<int32_t(_FILE_OBJECT*, _LARGE_INTEGER*, _ERESOURCE**, _DEVICE_OBJECT*)> AcquireForModWrite;
    /* 80 */ std::function<uint8_t(_FILE_OBJECT*, _LARGE_INTEGER*, uint32_t, uint32_t, _MDL**, _IO_STATUS_BLOCK*, _DEVICE_OBJECT*)> MdlRead;
    /* 88 */ std::function<uint8_t(_FILE_OBJECT*, _MDL*, _DEVICE_OBJECT*)> MdlReadComplete;
    /* 90 */ std::function<uint8_t(_FILE_OBJECT*, _LARGE_INTEGER*, uint32_t, uint32_t, _MDL**, _IO_STATUS_BLOCK*, _DEVICE_OBJECT*)> PrepareMdlWrite;
    /* 98 */ std::function<uint8_t(_FILE_OBJECT*, _LARGE_INTEGER*, _MDL*, _DEVICE_OBJECT*)> MdlWriteComplete;
    /* a0 */ std::function<uint8_t(
        _FILE_OBJECT*, _LARGE_INTEGER*, uint32_t, uint32_t, void*, _MDL**, _IO_STATUS_BLOCK*, _COMPRESSED_DATA_INFO*, uint32_t, _DEVICE_OBJECT*)>
        FastIoReadCompressed;
    /* a8 */ std::function<uint8_t(
        _FILE_OBJECT*, _LARGE_INTEGER*, uint32_t, uint32_t, void*, _MDL**, _IO_STATUS_BLOCK*, _COMPRESSED_DATA_INFO*, uint32_t, _DEVICE_OBJECT*)>
        FastIoWriteCompressed;
    /* b0 */ std::function<uint8_t(_FILE_OBJECT*, _MDL*, _DEVICE_OBJECT*)> MdlReadCompleteCompressed;
    /* b8 */ std::function<uint8_t(_FILE_OBJECT*, _LARGE_INTEGER*, _MDL*, _DEVICE_OBJECT*)> MdlWriteCompleteCompressed;
    /* c0 */ std::function<uint8_t(_IRP*, _FILE_NETWORK_OPEN_INFORMATION*, _DEVICE_OBJECT*)> FastIoQueryOpen;
    /* c8 */ std::function<int32_t(_FILE_OBJECT*, _ERESOURCE*, _DEVICE_OBJECT*)> ReleaseForModWrite;
    /* d0 */ std::function<int32_t(_FILE_OBJECT*, _DEVICE_OBJECT*)> AcquireForCcFlush;
    /* d8 */ std::function<int32_t(_FILE_OBJECT*, _DEVICE_OBJECT*)> ReleaseForCcFlush;
};
using FAST_IO_DISPATCH  = struct _FAST_IO_DISPATCH;
using PFAST_IO_DISPATCH = struct _FAST_IO_DISPATCH*;

struct _flags
{
    /* 00:0 */ uint8_t SmtSetsPresent : 1;
    /* 00:1 */ uint8_t Fill           : 7;
};
using flags  = struct _flags;
using Pflags = struct _flags*;

struct _PPM_SELECTION_MENU
{
    /* 00 */ uint32_t Count;
    /* 08 */ _PPM_SELECTION_MENU_ENTRY* Entries;
};
using PPM_SELECTION_MENU  = struct _PPM_SELECTION_MENU;
using PPPM_SELECTION_MENU = struct _PPM_SELECTION_MENU*;

struct _CPTABLEINFO
{
    /* 00 */ uint16_t CodePage;
    /* 02 */ uint16_t MaximumCharacterSize;
    /* 04 */ uint16_t DefaultChar;
    /* 06 */ uint16_t UniDefaultChar;
    /* 08 */ uint16_t TransDefaultChar;
    /* 0a */ uint16_t TransUniDefaultChar;
    /* 0c */ uint16_t DBCSCodePage;
    /* 0e */ std::array<uint8_t, 12> LeadByte;
    /* 20 */ uint16_t* MultiByteTable;
    /* 28 */ void* WideCharTable;
    /* 30 */ uint16_t* DBCSRanges;
    /* 38 */ uint16_t* DBCSOffsets;
};
using CPTABLEINFO  = struct _CPTABLEINFO;
using PCPTABLEINFO = struct _CPTABLEINFO*;

struct _PROC_PERF_CHECK_SNAP
{
    /* 00 */ uint64_t Time;
    /* 08 */ uint64_t Active;
    /* 10 */ uint64_t Stall;
    /* 18 */ uint64_t FrequencyScaledActive;
    /* 20 */ uint64_t PerformanceScaledActive;
    /* 28 */ uint64_t PerformanceScaledKernelActive;
    /* 30 */ uint32_t ResponsivenessEvents;
};
using PROC_PERF_CHECK_SNAP  = struct _PROC_PERF_CHECK_SNAP;
using PPROC_PERF_CHECK_SNAP = struct _PROC_PERF_CHECK_SNAP*;

union _MCI_ADDR
{
    /* 00 */ uint32_t Address;
    /* 04 */ uint32_t Reserved;
    /* 00 */ uint64_t QuadPart;
};
using MCI_ADDR  = union _MCI_ADDR;
using PMCI_ADDR = union _MCI_ADDR*;

struct _PPM_SELECTION_MENU_ENTRY
{
    /* 00 */ uint8_t StrictDependency;
    /* 01 */ uint8_t InitiatingState;
    /* 02 */ uint8_t DependentState;
    /* 04 */ uint32_t StateIndex;
    /* 08 */ uint32_t Dependencies;
    /* 10 */ _PPM_SELECTION_DEPENDENCY* DependencyList;
};
using PPM_SELECTION_MENU_ENTRY  = struct _PPM_SELECTION_MENU_ENTRY;
using PPPM_SELECTION_MENU_ENTRY = struct _PPM_SELECTION_MENU_ENTRY*;

struct _PROC_IDLE_STATE_BUCKET
{
    /* 00 */ uint64_t TotalTime;
    /* 08 */ uint64_t MinTime;
    /* 10 */ uint64_t MaxTime;
    /* 18 */ uint32_t Count;
};
using PROC_IDLE_STATE_BUCKET  = struct _PROC_IDLE_STATE_BUCKET;
using PPROC_IDLE_STATE_BUCKET = struct _PROC_IDLE_STATE_BUCKET*;

struct _IO_CLIENT_EXTENSION
{
    /* 00 */ _IO_CLIENT_EXTENSION* NextExtension;
    /* 08 */ void* ClientIdentificationAddress;
};
using IO_CLIENT_EXTENSION  = struct _IO_CLIENT_EXTENSION;
using PIO_CLIENT_EXTENSION = struct _IO_CLIENT_EXTENSION*;

struct _OBP_SYSTEM_DOS_DEVICE_STATE
{
    /* 00 */ uint32_t GlobalDeviceMap;
    /* 04 */ std::array<uint32_t, 26> LocalDeviceCount;
};
using OBP_SYSTEM_DOS_DEVICE_STATE  = struct _OBP_SYSTEM_DOS_DEVICE_STATE;
using POBP_SYSTEM_DOS_DEVICE_STATE = struct _OBP_SYSTEM_DOS_DEVICE_STATE*;

struct _COMPRESSED_DATA_INFO
{
    /* 00 */ uint16_t CompressionFormatAndEngine;
    /* 02 */ uint8_t CompressionUnitShift;
    /* 03 */ uint8_t ChunkShift;
    /* 04 */ uint8_t ClusterShift;
    /* 05 */ uint8_t Reserved;
    /* 06 */ uint16_t NumberOfChunks;
    /* 08 */ std::array<uint32_t, 1> CompressedChunkSizes;
};
using COMPRESSED_DATA_INFO  = struct _COMPRESSED_DATA_INFO;
using PCOMPRESSED_DATA_INFO = struct _COMPRESSED_DATA_INFO*;

union _MCI_STATS
{
    /* 00 */ struct
    {
        /* 00 */ uint16_t McaErrorCode;
        /* 02 */ uint16_t ModelErrorCode;
        /* 04:0 */ uint32_t OtherInformation  : 25;
        /* 04:25 */ uint32_t ContextCorrupt   : 1;
        /* 04:26 */ uint32_t AddressValid     : 1;
        /* 04:27 */ uint32_t MiscValid        : 1;
        /* 04:28 */ uint32_t ErrorEnabled     : 1;
        /* 04:29 */ uint32_t UncorrectedError : 1;
        /* 04:30 */ uint32_t StatusOverFlow   : 1;
        /* 04:31 */ uint32_t Valid            : 1;
    } MciStatus;

    /* 00 */ uint64_t QuadPart;
};
using MCI_STATS  = union _MCI_STATS;
using PMCI_STATS = union _MCI_STATS*;

struct _PROCESSOR_IDLE_DEPENDENCY
{
    /* 00 */ uint32_t ProcessorIndex;
    /* 04 */ uint8_t ExpectedState;
    /* 05 */ uint8_t AllowDeeperStates;
    /* 06 */ uint8_t LooseDependency;
};
using PROCESSOR_IDLE_DEPENDENCY  = struct _PROCESSOR_IDLE_DEPENDENCY;
using PPROCESSOR_IDLE_DEPENDENCY = struct _PROCESSOR_IDLE_DEPENDENCY*;

struct _PPM_COORDINATED_SELECTION
{
    /* 00 */ uint32_t MaximumStates;
    /* 04 */ uint32_t SelectedStates;
    /* 08 */ uint32_t DefaultSelection;
    /* 10 */ uint32_t* Selection;
};
using PPM_COORDINATED_SELECTION  = struct _PPM_COORDINATED_SELECTION;
using PPPM_COORDINATED_SELECTION = struct _PPM_COORDINATED_SELECTION*;

struct _FS_FILTER_CALLBACKS
{
    /* 00 */ uint32_t SizeOfFsFilterCallbacks;
    /* 04 */ uint32_t Reserved;
    /* 08 */ std::function<int32_t(_FS_FILTER_CALLBACK_DATA*, void**)> PreAcquireForSectionSynchronization;
    /* 10 */ std::function<void(_FS_FILTER_CALLBACK_DATA*, int32_t, void*)> PostAcquireForSectionSynchronization;
    /* 18 */ std::function<int32_t(_FS_FILTER_CALLBACK_DATA*, void**)> PreReleaseForSectionSynchronization;
    /* 20 */ std::function<void(_FS_FILTER_CALLBACK_DATA*, int32_t, void*)> PostReleaseForSectionSynchronization;
    /* 28 */ std::function<int32_t(_FS_FILTER_CALLBACK_DATA*, void**)> PreAcquireForCcFlush;
    /* 30 */ std::function<void(_FS_FILTER_CALLBACK_DATA*, int32_t, void*)> PostAcquireForCcFlush;
    /* 38 */ std::function<int32_t(_FS_FILTER_CALLBACK_DATA*, void**)> PreReleaseForCcFlush;
    /* 40 */ std::function<void(_FS_FILTER_CALLBACK_DATA*, int32_t, void*)> PostReleaseForCcFlush;
    /* 48 */ std::function<int32_t(_FS_FILTER_CALLBACK_DATA*, void**)> PreAcquireForModifiedPageWriter;
    /* 50 */ std::function<void(_FS_FILTER_CALLBACK_DATA*, int32_t, void*)> PostAcquireForModifiedPageWriter;
    /* 58 */ std::function<int32_t(_FS_FILTER_CALLBACK_DATA*, void**)> PreReleaseForModifiedPageWriter;
    /* 60 */ std::function<void(_FS_FILTER_CALLBACK_DATA*, int32_t, void*)> PostReleaseForModifiedPageWriter;
    /* 68 */ std::function<int32_t(_FS_FILTER_CALLBACK_DATA*, void**)> PreQueryOpen;
    /* 70 */ std::function<void(_FS_FILTER_CALLBACK_DATA*, int32_t, void*)> PostQueryOpen;
};
using FS_FILTER_CALLBACKS  = struct _FS_FILTER_CALLBACKS;
using PFS_FILTER_CALLBACKS = struct _FS_FILTER_CALLBACKS*;

struct _PPM_SELECTION_STATISTICS
{
    /* 00 */ uint64_t SelectedCount;
    /* 08 */ uint64_t VetoCount;
    /* 10 */ uint64_t PreVetoCount;
    /* 18 */ uint64_t WrongProcessorCount;
    /* 20 */ uint64_t LatencyCount;
    /* 28 */ uint64_t IdleDurationCount;
    /* 30 */ uint64_t DeviceDependencyCount;
    /* 38 */ uint64_t ProcessorDependencyCount;
    /* 40 */ uint64_t PlatformOnlyCount;
    /* 48 */ uint64_t InterruptibleCount;
    /* 50 */ uint64_t LegacyOverrideCount;
    /* 58 */ uint64_t CstateCheckCount;
    /* 60 */ uint64_t NoCStateCount;
    /* 68 */ uint64_t CoordinatedDependencyCount;
    /* 70 */ uint64_t NotClockOwnerCount;
    /* 78 */ uint64_t DependencyIdleDurationCount;
    /* 80 */ _PPM_VETO_ACCOUNTING* PreVetoAccounting;
};
using PPM_SELECTION_STATISTICS  = struct _PPM_SELECTION_STATISTICS;
using PPPM_SELECTION_STATISTICS = struct _PPM_SELECTION_STATISTICS*;

struct _XSTATE_CONTEXT
{
    /* 00 */ uint64_t Mask;
    /* 08 */ uint32_t Length;
    /* 0c */ uint32_t Reserved1;
    /* 10 */ _XSAVE_AREA* Area;
    /* 18 */ void* Buffer;
};
using XSTATE_CONTEXT  = struct _XSTATE_CONTEXT;
using PXSTATE_CONTEXT = struct _XSTATE_CONTEXT*;

struct _TIME_FIELDS
{
    /* 00 */ int16_t Year;
    /* 02 */ int16_t Month;
    /* 04 */ int16_t Day;
    /* 06 */ int16_t Hour;
    /* 08 */ int16_t Minute;
    /* 0a */ int16_t Second;
    /* 0c */ int16_t Milliseconds;
    /* 0e */ int16_t Weekday;
};
using TIME_FIELDS  = struct _TIME_FIELDS;
using PTIME_FIELDS = struct _TIME_FIELDS*;

struct _PERFINFO_PPM_STATE_SELECTION
{
    /* 00 */ uint32_t SelectedState;
    /* 04 */ uint32_t VetoedStates;
    /* 08 */ std::array<uint32_t, 1> VetoReason;
};
using PERFINFO_PPM_STATE_SELECTION  = struct _PERFINFO_PPM_STATE_SELECTION;
using PPERFINFO_PPM_STATE_SELECTION = struct _PERFINFO_PPM_STATE_SELECTION*;

struct _FS_FILTER_SECTION_SYNC_OUTPUT
{
    /* 00 */ uint32_t StructureSize;
    /* 04 */ uint32_t SizeReturned;
    /* 08 */ uint32_t Flags;
    /* 0c */ uint32_t DesiredReadAlignment;
};
using FS_FILTER_SECTION_SYNC_OUTPUT  = struct _FS_FILTER_SECTION_SYNC_OUTPUT;
using PFS_FILTER_SECTION_SYNC_OUTPUT = struct _FS_FILTER_SECTION_SYNC_OUTPUT*;

enum SE_WS_APPX_SIGNATURE_ORIGIN : uint32_t
{
    SE_WS_APPX_SIGNATURE_ORIGIN_NOT_VALIDATED = 0,
    SE_WS_APPX_SIGNATURE_ORIGIN_UNKNOWN       = 1,
    SE_WS_APPX_SIGNATURE_ORIGIN_APPSTORE      = 2,
    SE_WS_APPX_SIGNATURE_ORIGIN_WINDOWS       = 3,
    SE_WS_APPX_SIGNATURE_ORIGIN_ENTERPRISE    = 4,
};

enum _PS_MITIGATION_OPTION : uint32_t
{
    PS_MITIGATION_OPTION_NX                                  = 0,
    PS_MITIGATION_OPTION_SEHOP                               = 1,
    PS_MITIGATION_OPTION_FORCE_RELOCATE_IMAGES               = 2,
    PS_MITIGATION_OPTION_HEAP_TERMINATE                      = 3,
    PS_MITIGATION_OPTION_BOTTOM_UP_ASLR                      = 4,
    PS_MITIGATION_OPTION_HIGH_ENTROPY_ASLR                   = 5,
    PS_MITIGATION_OPTION_STRICT_HANDLE_CHECKS                = 6,
    PS_MITIGATION_OPTION_WIN32K_SYSTEM_CALL_DISABLE          = 7,
    PS_MITIGATION_OPTION_EXTENSION_POINT_DISABLE             = 8,
    PS_MITIGATION_OPTION_PROHIBIT_DYNAMIC_CODE               = 9,
    PS_MITIGATION_OPTION_CONTROL_FLOW_GUARD                  = 10,
    PS_MITIGATION_OPTION_BLOCK_NON_MICROSOFT_BINARIES        = 11,
    PS_MITIGATION_OPTION_FONT_DISABLE                        = 12,
    PS_MITIGATION_OPTION_IMAGE_LOAD_NO_REMOTE                = 13,
    PS_MITIGATION_OPTION_IMAGE_LOAD_NO_LOW_LABEL             = 14,
    PS_MITIGATION_OPTION_IMAGE_LOAD_PREFER_SYSTEM32          = 15,
    PS_MITIGATION_OPTION_RETURN_FLOW_GUARD                   = 16,
    PS_MITIGATION_OPTION_LOADER_INTEGRITY_CONTINUITY         = 17,
    PS_MITIGATION_OPTION_STRICT_CONTROL_FLOW_GUARD           = 18,
    PS_MITIGATION_OPTION_RESTRICT_SET_THREAD_CONTEXT         = 19,
    PS_MITIGATION_OPTION_ROP_STACKPIVOT                      = 20,
    PS_MITIGATION_OPTION_ROP_CALLER_CHECK                    = 21,
    PS_MITIGATION_OPTION_ROP_SIMEXEC                         = 22,
    PS_MITIGATION_OPTION_EXPORT_ADDRESS_FILTER               = 23,
    PS_MITIGATION_OPTION_EXPORT_ADDRESS_FILTER_PLUS          = 24,
    PS_MITIGATION_OPTION_RESTRICT_CHILD_PROCESS_CREATION     = 25,
    PS_MITIGATION_OPTION_IMPORT_ADDRESS_FILTER               = 26,
    PS_MITIGATION_OPTION_MODULE_TAMPERING_PROTECTION         = 27,
    PS_MITIGATION_OPTION_RESTRICT_INDIRECT_BRANCH_PREDICTION = 28,
    PS_MITIGATION_OPTION_SPECULATIVE_STORE_BYPASS_DISABLE    = 29,
    PS_MITIGATION_OPTION_ALLOW_DOWNGRADE_DYNAMIC_CODE_POLICY = 30,
    PS_MITIGATION_OPTION_CET_USER_SHADOW_STACKS              = 31,
    PS_MITIGATION_OPTION_USER_CET_SET_CONTEXT_IP_VALIDATION  = 32,
    PS_MITIGATION_OPTION_BLOCK_NON_CET_BINARIES              = 33,
    PS_MITIGATION_OPTION_XTENDED_CONTROL_FLOW_GUARD          = 34,
    PS_MITIGATION_OPTION_POINTER_AUTH_USER_IP                = 35,
    PS_MITIGATION_OPTION_CET_DYNAMIC_APIS_OUT_OF_PROC_ONLY   = 36,
    PS_MITIGATION_OPTION_REDIRECTION_TRUST                   = 37,
    PS_MITIGATION_OPTION_RESTRICT_CORE_SHARING               = 38,
    PS_MITIGATION_OPTION_FSCTL_SYSTEM_CALL_DISABLE           = 39,
};

enum _NT_PRODUCT_TYPE : uint32_t
{
    NtProductWinNt    = 1,
    NtProductLanManNt = 2,
    NtProductServer   = 3,
};

enum _ALTERNATIVE_ARCHITECTURE_TYPE : uint32_t
{
    StandardDesign  = 0,
    NEC98x86        = 1,
    EndAlternatives = 2,
};

enum _TP_CALLBACK_PRIORITY : uint32_t
{
    TP_CALLBACK_PRIORITY_HIGH    = 0,
    TP_CALLBACK_PRIORITY_NORMAL  = 1,
    TP_CALLBACK_PRIORITY_LOW     = 2,
    TP_CALLBACK_PRIORITY_INVALID = 3,
    TP_CALLBACK_PRIORITY_COUNT   = 3,
};

enum _MODE : uint32_t
{
    KernelMode  = 0,
    UserMode    = 1,
    MaximumMode = 2,
};

enum _POOL_TYPE : uint32_t
{
    NonPagedPool                         = 0,
    NonPagedPoolExecute                  = 0,
    PagedPool                            = 1,
    NonPagedPoolMustSucceed              = 2,
    DontUseThisType                      = 3,
    NonPagedPoolCacheAligned             = 4,
    PagedPoolCacheAligned                = 5,
    NonPagedPoolCacheAlignedMustS        = 6,
    MaxPoolType                          = 7,
    NonPagedPoolBase                     = 0,
    NonPagedPoolBaseMustSucceed          = 2,
    NonPagedPoolBaseCacheAligned         = 4,
    NonPagedPoolBaseCacheAlignedMustS    = 6,
    NonPagedPoolSession                  = 32,
    PagedPoolSession                     = 33,
    NonPagedPoolMustSucceedSession       = 34,
    DontUseThisTypeSession               = 35,
    NonPagedPoolCacheAlignedSession      = 36,
    PagedPoolCacheAlignedSession         = 37,
    NonPagedPoolCacheAlignedMustSSession = 38,
    NonPagedPoolNx                       = 512,
    NonPagedPoolNxCacheAligned           = 516,
    NonPagedPoolSessionNx                = 544,
};

enum _EX_POOL_PRIORITY : uint32_t
{
    LowPoolPriority                       = 0,
    LowPoolPrioritySpecialPoolOverrun     = 8,
    LowPoolPrioritySpecialPoolUnderrun    = 9,
    NormalPoolPriority                    = 16,
    NormalPoolPrioritySpecialPoolOverrun  = 24,
    NormalPoolPrioritySpecialPoolUnderrun = 25,
    HighPoolPriority                      = 32,
    HighPoolPrioritySpecialPoolOverrun    = 40,
    HighPoolPrioritySpecialPoolUnderrun   = 41,
};

enum _EVENT_TYPE : uint32_t
{
    NotificationEvent    = 0,
    SynchronizationEvent = 1,
};

enum _PP_NPAGED_LOOKASIDE_NUMBER : uint32_t
{
    LookasideSmallIrpList      = 0,
    LookasideMediumIrpList     = 1,
    LookasideLargeIrpList      = 2,
    LookasideMdlList           = 3,
    LookasideCreateInfoList    = 4,
    LookasideNameBufferList    = 5,
    LookasideTwilightList      = 6,
    LookasideCompletionList    = 7,
    LookasideScratchBufferList = 8,
    LookasideMaximumList       = 9,
};

enum _EX_GEN_RANDOM_DOMAIN : uint32_t
{
    ExGenRandomDomainKernel      = 0,
    ExGenRandomDomainFirst       = 0,
    ExGenRandomDomainUserVisible = 1,
    ExGenRandomDomainMax         = 2,
};

enum _SYSTEM_DLL_TYPE : uint32_t
{
    PsNativeSystemDll       = 0,
    PsWowX86SystemDll       = 1,
    PsWowArm32SystemDll     = 2,
    PsWowChpeX86SystemDll   = 3,
    PsChpeV2SystemDll       = 4,
    PsVsmEnclaveRuntimeDll  = 5,
    PsTrustedAppsRuntimeDll = 6,
    PsSystemDllTotalTypes   = 7,
};

enum _FILE_INFORMATION_CLASS : uint32_t
{
    FileDirectoryInformation                     = 1,
    FileFullDirectoryInformation                 = 2,
    FileBothDirectoryInformation                 = 3,
    FileBasicInformation                         = 4,
    FileStandardInformation                      = 5,
    FileInternalInformation                      = 6,
    FileEaInformation                            = 7,
    FileAccessInformation                        = 8,
    FileNameInformation                          = 9,
    FileRenameInformation                        = 10,
    FileLinkInformation                          = 11,
    FileNamesInformation                         = 12,
    FileDispositionInformation                   = 13,
    FilePositionInformation                      = 14,
    FileFullEaInformation                        = 15,
    FileModeInformation                          = 16,
    FileAlignmentInformation                     = 17,
    FileAllInformation                           = 18,
    FileAllocationInformation                    = 19,
    FileEndOfFileInformation                     = 20,
    FileAlternateNameInformation                 = 21,
    FileStreamInformation                        = 22,
    FilePipeInformation                          = 23,
    FilePipeLocalInformation                     = 24,
    FilePipeRemoteInformation                    = 25,
    FileMailslotQueryInformation                 = 26,
    FileMailslotSetInformation                   = 27,
    FileCompressionInformation                   = 28,
    FileObjectIdInformation                      = 29,
    FileCompletionInformation                    = 30,
    FileMoveClusterInformation                   = 31,
    FileQuotaInformation                         = 32,
    FileReparsePointInformation                  = 33,
    FileNetworkOpenInformation                   = 34,
    FileAttributeTagInformation                  = 35,
    FileTrackingInformation                      = 36,
    FileIdBothDirectoryInformation               = 37,
    FileIdFullDirectoryInformation               = 38,
    FileValidDataLengthInformation               = 39,
    FileShortNameInformation                     = 40,
    FileIoCompletionNotificationInformation      = 41,
    FileIoStatusBlockRangeInformation            = 42,
    FileIoPriorityHintInformation                = 43,
    FileSfioReserveInformation                   = 44,
    FileSfioVolumeInformation                    = 45,
    FileHardLinkInformation                      = 46,
    FileProcessIdsUsingFileInformation           = 47,
    FileNormalizedNameInformation                = 48,
    FileNetworkPhysicalNameInformation           = 49,
    FileIdGlobalTxDirectoryInformation           = 50,
    FileIsRemoteDeviceInformation                = 51,
    FileUnusedInformation                        = 52,
    FileNumaNodeInformation                      = 53,
    FileStandardLinkInformation                  = 54,
    FileRemoteProtocolInformation                = 55,
    FileRenameInformationBypassAccessCheck       = 56,
    FileLinkInformationBypassAccessCheck         = 57,
    FileVolumeNameInformation                    = 58,
    FileIdInformation                            = 59,
    FileIdExtdDirectoryInformation               = 60,
    FileReplaceCompletionInformation             = 61,
    FileHardLinkFullIdInformation                = 62,
    FileIdExtdBothDirectoryInformation           = 63,
    FileDispositionInformationEx                 = 64,
    FileRenameInformationEx                      = 65,
    FileRenameInformationExBypassAccessCheck     = 66,
    FileDesiredStorageClassInformation           = 67,
    FileStatInformation                          = 68,
    FileMemoryPartitionInformation               = 69,
    FileStatLxInformation                        = 70,
    FileCaseSensitiveInformation                 = 71,
    FileLinkInformationEx                        = 72,
    FileLinkInformationExBypassAccessCheck       = 73,
    FileStorageReserveIdInformation              = 74,
    FileCaseSensitiveInformationForceAccessCheck = 75,
    FileKnownFolderInformation                   = 76,
    FileStatBasicInformation                     = 77,
    FileId64ExtdDirectoryInformation             = 78,
    FileId64ExtdBothDirectoryInformation         = 79,
    FileIdAllExtdDirectoryInformation            = 80,
    FileIdAllExtdBothDirectoryInformation        = 81,
    FileMaximumInformation                       = 82,
};

enum _DIRECTORY_NOTIFY_INFORMATION_CLASS : uint32_t
{
    DirectoryNotifyInformation         = 1,
    DirectoryNotifyExtendedInformation = 2,
    DirectoryNotifyFullInformation     = 3,
    DirectoryNotifyMaximumInformation  = 4,
};

enum _FSINFOCLASS : uint32_t
{
    FileFsVolumeInformation       = 1,
    FileFsLabelInformation        = 2,
    FileFsSizeInformation         = 3,
    FileFsDeviceInformation       = 4,
    FileFsAttributeInformation    = 5,
    FileFsControlInformation      = 6,
    FileFsFullSizeInformation     = 7,
    FileFsObjectIdInformation     = 8,
    FileFsDriverPathInformation   = 9,
    FileFsVolumeFlagsInformation  = 10,
    FileFsSectorSizeInformation   = 11,
    FileFsDataCopyInformation     = 12,
    FileFsMetadataSizeInformation = 13,
    FileFsFullSizeInformationEx   = 14,
    FileFsGuidInformation         = 15,
    FileFsMaximumInformation      = 16,
};

enum _DEVICE_RELATION_TYPE : uint32_t
{
    BusRelations         = 0,
    EjectionRelations    = 1,
    PowerRelations       = 2,
    RemovalRelations     = 3,
    TargetDeviceRelation = 4,
    SingleBusRelations   = 5,
    TransportRelations   = 6,
};

enum BUS_QUERY_ID_TYPE : uint32_t
{
    BusQueryDeviceID           = 0,
    BusQueryHardwareIDs        = 1,
    BusQueryCompatibleIDs      = 2,
    BusQueryInstanceID         = 3,
    BusQueryDeviceSerialNumber = 4,
    BusQueryContainerID        = 5,
};

enum DEVICE_TEXT_TYPE : uint32_t
{
    DeviceTextDescription         = 0,
    DeviceTextLocationInformation = 1,
};

enum _DEVICE_USAGE_NOTIFICATION_TYPE : uint32_t
{
    DeviceUsageTypeUndefined     = 0,
    DeviceUsageTypePaging        = 1,
    DeviceUsageTypeHibernation   = 2,
    DeviceUsageTypeDumpFile      = 3,
    DeviceUsageTypeBoot          = 4,
    DeviceUsageTypePostDisplay   = 5,
    DeviceUsageTypeGuestAssigned = 6,
};

enum _SYSTEM_POWER_STATE : uint32_t
{
    PowerSystemUnspecified = 0,
    PowerSystemWorking     = 1,
    PowerSystemSleeping1   = 2,
    PowerSystemSleeping2   = 3,
    PowerSystemSleeping3   = 4,
    PowerSystemHibernate   = 5,
    PowerSystemShutdown    = 6,
    PowerSystemMaximum     = 7,
};

enum _POWER_STATE_TYPE : uint32_t
{
    SystemPowerState = 0,
    DevicePowerState = 1,
};

enum POWER_ACTION : uint32_t
{
    PowerActionNone          = 0,
    PowerActionReserved      = 1,
    PowerActionSleep         = 2,
    PowerActionHibernate     = 3,
    PowerActionShutdown      = 4,
    PowerActionShutdownReset = 5,
    PowerActionShutdownOff   = 6,
    PowerActionWarmEject     = 7,
    PowerActionDisplayOff    = 8,
};

enum _IO_PRIORITY_HINT : uint32_t
{
    IoPriorityVeryLow  = 0,
    IoPriorityLow      = 1,
    IoPriorityNormal   = 2,
    IoPriorityHigh     = 3,
    IoPriorityCritical = 4,
    MaxIoPriorityTypes = 5,
};

enum _MEMORY_CACHING_TYPE : uint32_t
{
    MmNonCached              = 0,
    MmCached                 = 1,
    MmWriteCombined          = 2,
    MmHardwareCoherentCached = 3,
    MmNonCachedUnordered     = 4,
    MmUSWCCached             = 5,
    MmMaximumCacheType       = 6,
    MmNotMapped              = 0xffffffff,
};

enum _MM_PAGE_ACCESS_TYPE : uint32_t
{
    MmPteAccessType         = 0,
    MmCcReadAheadType       = 1,
    MmPfnRepurposeType      = 2,
    MmMaximumPageAccessType = 3,
};

enum _PF_FILE_ACCESS_TYPE : uint32_t
{
    PfFileAccessTypeRead  = 0,
    PfFileAccessTypeWrite = 1,
    PfFileAccessTypeMax   = 2,
};

enum _DEVICE_POWER_STATE : uint32_t
{
    PowerDeviceUnspecified = 0,
    PowerDeviceD0          = 1,
    PowerDeviceD1          = 2,
    PowerDeviceD2          = 3,
    PowerDeviceD3          = 4,
    PowerDeviceMaximum     = 5,
};

enum _DEVICE_WAKE_DEPTH : uint32_t
{
    DeviceWakeDepthNotWakeable = 0,
    DeviceWakeDepthD0          = 1,
    DeviceWakeDepthD1          = 2,
    DeviceWakeDepthD2          = 3,
    DeviceWakeDepthD3hot       = 4,
    DeviceWakeDepthD3cold      = 5,
    DeviceWakeDepthMaximum     = 6,
};

enum _WHEA_ERROR_SOURCE_TYPE : uint32_t
{
    WheaErrSrcTypeMCE          = 0,
    WheaErrSrcTypeCMC          = 1,
    WheaErrSrcTypeCPE          = 2,
    WheaErrSrcTypeNMI          = 3,
    WheaErrSrcTypePCIe         = 4,
    WheaErrSrcTypeGeneric      = 5,
    WheaErrSrcTypeINIT         = 6,
    WheaErrSrcTypeBOOT         = 7,
    WheaErrSrcTypeSCIGeneric   = 8,
    WheaErrSrcTypeIPFMCA       = 9,
    WheaErrSrcTypeIPFCMC       = 10,
    WheaErrSrcTypeIPFCPE       = 11,
    WheaErrSrcTypeGenericV2    = 12,
    WheaErrSrcTypeSCIGenericV2 = 13,
    WheaErrSrcTypeBMC          = 14,
    WheaErrSrcTypePMEM         = 15,
    WheaErrSrcTypeDeviceDriver = 16,
    WheaErrSrcTypeSea          = 17,
    WheaErrSrcTypeSei          = 18,
    WheaErrSrcTypeMax          = 19,
};

enum _WHEA_ERROR_SOURCE_STATE : uint32_t
{
    WheaErrSrcStateStopped       = 1,
    WheaErrSrcStateStarted       = 2,
    WheaErrSrcStateRemoved       = 3,
    WheaErrSrcStateRemovePending = 4,
};

enum _WHEA_EVENT_LOG_ENTRY_TYPE : uint32_t
{
    WheaEventLogEntryTypeInformational = 0,
    WheaEventLogEntryTypeWarning       = 1,
    WheaEventLogEntryTypeError         = 2,
};

enum _WHEA_EVENT_LOG_ENTRY_ID : uint32_t
{
    WheaEventLogEntryIdCmcPollingTimeout       = 0x80000001,
    WheaEventLogEntryIdWheaInit                = 0x80000002,
    WheaEventLogEntryIdCmcSwitchToPolling      = 0x80000003,
    WheaEventLogEntryIdDroppedCorrectedError   = 0x80000004,
    WheaEventLogEntryIdStartedReportHwError    = 0x80000005,
    WheaEventLogEntryIdPFAMemoryOfflined       = 0x80000006,
    WheaEventLogEntryIdPFAMemoryRemoveMonitor  = 0x80000007,
    WheaEventLogEntryIdPFAMemoryPolicy         = 0x80000008,
    WheaEventLogEntryIdPshedInjectError        = 0x80000009,
    WheaEventLogEntryIdOscCapabilities         = 0x8000000a,
    WheaEventLogEntryIdPshedPluginRegister     = 0x8000000b,
    WheaEventLogEntryIdAddRemoveErrorSource    = 0x8000000c,
    WheaEventLogEntryIdWorkQueueItem           = 0x8000000d,
    WheaEventLogEntryIdAttemptErrorRecovery    = 0x8000000e,
    WheaEventLogEntryIdMcaFoundErrorInBank     = 0x8000000f,
    WheaEventLogEntryIdMcaStuckErrorCheck      = 0x80000010,
    WheaEventLogEntryIdMcaErrorCleared         = 0x80000011,
    WheaEventLogEntryIdClearedPoison           = 0x80000012,
    WheaEventLogEntryIdProcessEINJ             = 0x80000013,
    WheaEventLogEntryIdProcessHEST             = 0x80000014,
    WheaEventLogEntryIdCreateGenericRecord     = 0x80000015,
    WheaEventLogEntryIdErrorRecord             = 0x80000016,
    WheaEventLogEntryIdErrorRecordLimit        = 0x80000017,
    WheaEventLogEntryIdAerNotGrantedToOs       = 0x80000018,
    WheaEventLogEntryIdErrSrcArrayInvalid      = 0x80000019,
    WheaEventLogEntryIdAcpiTimeOut             = 0x8000001a,
    WheaEventLogCmciRestart                    = 0x8000001b,
    WheaEventLogCmciFinalRestart               = 0x8000001c,
    WheaEventLogEntryEtwOverFlow               = 0x8000001d,
    WheaEventLogAzccRootBusSearchErr           = 0x8000001e,
    WheaEventLogAzccRootBusList                = 0x8000001f,
    WheaEventLogEntryIdErrSrcInvalid           = 0x80000020,
    WheaEventLogEntryIdGenericErrMemMap        = 0x80000021,
    WheaEventLogEntryIdPshedCallbackCollision  = 0x80000022,
    WheaEventLogEntryIdSELBugCheckProgress     = 0x80000023,
    WheaEventLogEntryIdPshedPluginLoad         = 0x80000024,
    WheaEventLogEntryIdPshedPluginUnload       = 0x80000025,
    WheaEventLogEntryIdPshedPluginSupported    = 0x80000026,
    WheaEventLogEntryIdDeviceDriver            = 0x80000027,
    WheaEventLogEntryIdCmciImplPresent         = 0x80000028,
    WheaEventLogEntryIdCmciInitError           = 0x80000029,
    WheaEventLogEntryIdSELBugCheckRecovery     = 0x8000002a,
    WheaEventLogEntryIdDrvErrSrcInvalid        = 0x8000002b,
    WheaEventLogEntryIdDrvHandleBusy           = 0x8000002c,
    WheaEventLogEntryIdWheaHeartbeat           = 0x8000002d,
    WheaEventLogAzccRootBusPoisonSet           = 0x8000002e,
    WheaEventLogEntryIdSELBugCheckInfo         = 0x8000002f,
    WheaEventLogEntryIdErrDimmInfoMismatch     = 0x80000030,
    WheaEventLogEntryIdeDpcEnabled             = 0x80000031,
    WheaEventLogEntryPageOfflineDone           = 0x80000032,
    WheaEventLogEntryPageOfflinePendMax        = 0x80000033,
    WheaEventLogEntryIdBadPageLimitReached     = 0x80000034,
    WheaEventLogEntrySrarDetail                = 0x80000035,
    WheaEventLogEntryEarlyError                = 0x80000036,
    WheaEventLogEntryIdPcieOverrideInfo        = 0x80000037,
    WheaEventLogEntryIdReadPcieOverridesErr    = 0x80000038,
    WheaEventLogEntryIdPcieConfigInfo          = 0x80000039,
    WheaEventLogEntryIdPcieSummaryFailed       = 0x80000040,
    WheaEventLogEntryIdThrottleRegCorrupt      = 0x80000041,
    WheaEventLogEntryIdThrottleAddErrSrcFailed = 0x80000042,
    WheaEventLogEntryIdThrottleRegDataIgnored  = 0x80000043,
    WheaEventLogEntryIdEnableKeyNotifFailed    = 0x80000044,
    WheaEventLogEntryIdKeyNotificationFailed   = 0x80000045,
    WheaEventLogEntryIdPcieRemoveDevice        = 0x80000046,
    WheaEventLogEntryIdPcieAddDevice           = 0x80000047,
    WheaEventLogEntryIdPcieSpuriousErrSource   = 0x80000048,
    WheaEventLogEntryIdMemoryAddDevice         = 0x80000049,
    WheaEventLogEntryIdMemoryRemoveDevice      = 0x8000004a,
    WheaEventLogEntryIdMemorySummaryFailed     = 0x8000004b,
    WheaEventLogEntryIdPcieDpcError            = 0x8000004c,
    WheaEventLogEntryIdCpuBusesInitFailed      = 0x8000004d,
    WheaEventLogEntryIdPshedPluginInitFailed   = 0x8000004e,
    WheaEventLogEntryIdFailedAddToDefectList   = 0x8000004f,
    WheaEventLogEntryIdDefectListFull          = 0x80000050,
    WheaEventLogEntryIdDefectListUEFIVarFailed = 0x80000051,
    WheaEventLogEntryIdDefectListCorrupt       = 0x80000052,
    WheaEventLogEntryIdBadHestNotifyData       = 0x80000053,
    WheaEventLogEntryIdSrasTableNotFound       = 0x80000054,
    WheaEventLogEntryIdSrasTableError          = 0x80000055,
    WheaEventLogEntryIdSrasTableEntries        = 0x80000056,
    WheaEventLogEntryIdRowFailure              = 0x80000057,
    WheaEventLogEntryIdCpusFrozen              = 0x80000060,
    WheaEventLogEntryIdCpusFrozenNoCrashDump   = 0x80000061,
    WheaEventLogEntryIdPshedPiTraceLog         = 0x80040010,
};

enum _WHEA_ERROR_TYPE : uint32_t
{
    WheaErrTypeProcessor  = 0,
    WheaErrTypeMemory     = 1,
    WheaErrTypePCIExpress = 2,
    WheaErrTypeNMI        = 3,
    WheaErrTypePCIXBus    = 4,
    WheaErrTypePCIXDevice = 5,
    WheaErrTypeGeneric    = 6,
    WheaErrTypePmem       = 7,
};

enum _WHEA_ERROR_SEVERITY : uint32_t
{
    WheaErrSevRecoverable   = 0,
    WheaErrSevFatal         = 1,
    WheaErrSevCorrected     = 2,
    WheaErrSevInformational = 3,
};

enum _WHEA_ERROR_PACKET_DATA_FORMAT : uint32_t
{
    WheaDataFormatIPFSalRecord = 0,
    WheaDataFormatXPFMCA       = 1,
    WheaDataFormatMemory       = 2,
    WheaDataFormatPCIExpress   = 3,
    WheaDataFormatNMIPort      = 4,
    WheaDataFormatPCIXBus      = 5,
    WheaDataFormatPCIXDevice   = 6,
    WheaDataFormatGeneric      = 7,
    WheaDataFormatMax          = 8,
};

enum RTLP_CSPARSE_BITMAP_STATE : uint32_t
{
    CommitBitmapInvalid = 0,
    UserBitmapInvalid   = 1,
    UserBitmapValid     = 2,
};

enum _RTLP_HP_ADDRESS_SPACE_TYPE : uint32_t
{
    HeapAddressUser    = 0,
    HeapAddressKernel  = 1,
    HeapAddressSession = 2,
    HeapAddressSecure  = 3,
    HeapAddressTypeMax = 4,
};

enum _RTLP_HP_LOCK_TYPE : uint32_t
{
    HeapLockPaged    = 0,
    HeapLockNonPaged = 1,
    HeapLockTypeMax  = 2,
};

enum _HEAP_FAILURE_TYPE : uint32_t
{
    heap_failure_internal                      = 0,
    heap_failure_unknown                       = 1,
    heap_failure_generic                       = 2,
    heap_failure_entry_corruption              = 3,
    heap_failure_multiple_entries_corruption   = 4,
    heap_failure_virtual_block_corruption      = 5,
    heap_failure_buffer_overrun                = 6,
    heap_failure_buffer_underrun               = 7,
    heap_failure_block_not_busy                = 8,
    heap_failure_invalid_argument              = 9,
    heap_failure_invalid_allocation_type       = 10,
    heap_failure_usage_after_free              = 11,
    heap_failure_cross_heap_operation          = 12,
    heap_failure_freelists_corruption          = 13,
    heap_failure_listentry_corruption          = 14,
    heap_failure_lfh_bitmap_mismatch           = 15,
    heap_failure_segment_lfh_bitmap_corruption = 16,
    heap_failure_segment_lfh_double_free       = 17,
    heap_failure_vs_subsegment_corruption      = 18,
    heap_failure_null_heap                     = 19,
    heap_failure_allocation_limit              = 20,
    heap_failure_commit_limit                  = 21,
    heap_failure_invalid_va_mgr_query          = 22,
};

enum _LDR_DLL_LOAD_REASON : uint32_t
{
    LoadReasonStaticDependency           = 0,
    LoadReasonStaticForwarderDependency  = 1,
    LoadReasonDynamicForwarderDependency = 2,
    LoadReasonDelayloadDependency        = 3,
    LoadReasonDynamicLoad                = 4,
    LoadReasonAsImageLoad                = 5,
    LoadReasonAsDataLoad                 = 6,
    LoadReasonEnclavePrimary             = 7,
    LoadReasonEnclaveDependency          = 8,
    LoadReasonPatchImage                 = 9,
    LoadReasonUnknown                    = 0xffffffff,
};

enum _LDR_HOT_PATCH_STATE : uint32_t
{
    LdrHotPatchBaseImage      = 0,
    LdrHotPatchNotApplied     = 1,
    LdrHotPatchAppliedReverse = 2,
    LdrHotPatchAppliedForward = 3,
    LdrHotPatchFailedToPatch  = 4,
    LdrHotPatchStateMax       = 5,
};

enum _HEAP_LFH_LOCKMODE : uint32_t
{
    HeapLockNotHeld   = 0,
    HeapLockShared    = 1,
    HeapLockExclusive = 2,
};

enum _HEAP_SEG_RANGE_TYPE : uint32_t
{
    HeapSegRangeUser     = 0,
    HeapSegRangeInternal = 1,
    HeapSegRangeLFH      = 2,
    HeapSegRangeVS       = 3,
    HeapSegRangeTypeMax  = 3,
};

enum _RTLP_HP_ALLOCATOR : uint32_t
{
    RtlpHpSegmentSm     = 0,
    RtlpHpSegmentLg     = 1,
    RtlpHpSegmentTypes  = 2,
    RtlpHpHugeAllocator = 2,
    RtlpHpAllocatorMax  = 3,
};

enum _RTLP_HP_MEMORY_TYPE : uint32_t
{
    HeapMemoryPaged      = 0,
    HeapMemoryNonPaged   = 1,
    HeapMemory64KPage    = 2,
    HeapMemoryLargePage  = 3,
    HeapMemoryHugePage   = 4,
    HeapMemoryTypeCustom = 5,
    HeapMemoryTypeMax    = 6,
};

enum _KCLOCK_TIMER_DEADLINE_TYPE : uint32_t
{
    KClockTimerKTimerExpirationNonHr        = 0,
    KClockTimerKTimerExpirationPseudoHr     = 1,
    KClockTimerKTimer2ExpirationHr          = 2,
    KClockTimerKTimersMax                   = 2,
    KClockTimerQuantumEnd                   = 3,
    KClockTimerGroupSchedulingGenerationEnd = 4,
    KClockTimerIdlePromotion                = 5,
    KClockTimerBamQosHysteresisEnd          = 6,
    KClockTimerMax                          = 7,
};

enum _IO_RATE_CONTROL_TYPE : uint32_t
{
    IoRateControlTypeCapMin                         = 0,
    IoRateControlTypeIopsCap                        = 0,
    IoRateControlTypeBandwidthCap                   = 1,
    IoRateControlTypeTimePercentCap                 = 2,
    IoRateControlTypeCapMax                         = 2,
    IoRateControlTypeReservationMin                 = 3,
    IoRateControlTypeIopsReservation                = 3,
    IoRateControlTypeBandwidthReservation           = 4,
    IoRateControlTypeTimePercentReservation         = 5,
    IoRateControlTypeReservationMax                 = 5,
    IoRateControlTypeCriticalReservationMin         = 6,
    IoRateControlTypeIopsCriticalReservation        = 6,
    IoRateControlTypeBandwidthCriticalReservation   = 7,
    IoRateControlTypeTimePercentCriticalReservation = 8,
    IoRateControlTypeCriticalReservationMax         = 8,
    IoRateControlTypeSoftCapMin                     = 9,
    IoRateControlTypeIopsSoftCap                    = 9,
    IoRateControlTypeBandwidthSoftCap               = 10,
    IoRateControlTypeTimePercentSoftCap             = 11,
    IoRateControlTypeSoftCapMax                     = 11,
    IoRateControlTypeLimitExcessNotifyMin           = 12,
    IoRateControlTypeIopsLimitExcessNotify          = 12,
    IoRateControlTypeBandwidthLimitExcessNotify     = 13,
    IoRateControlTypeTimePercentLimitExcessNotify   = 14,
    IoRateControlTypeLimitExcessNotifyMax           = 14,
    IoRateControlTypeMax                            = 15,
};

enum _KINTERRUPT_POLARITY : uint32_t
{
    InterruptPolarityUnknown       = 0,
    InterruptActiveHigh            = 1,
    InterruptRisingEdge            = 1,
    InterruptActiveLow             = 2,
    InterruptFallingEdge           = 2,
    InterruptActiveBoth            = 3,
    InterruptActiveBothTriggerLow  = 3,
    InterruptActiveBothTriggerHigh = 4,
};

enum _JOBOBJECTINFOCLASS : uint32_t
{
    JobObjectBasicAccountingInformation         = 1,
    JobObjectBasicLimitInformation              = 2,
    JobObjectBasicProcessIdList                 = 3,
    JobObjectBasicUIRestrictions                = 4,
    JobObjectSecurityLimitInformation           = 5,
    JobObjectEndOfJobTimeInformation            = 6,
    JobObjectAssociateCompletionPortInformation = 7,
    JobObjectBasicAndIoAccountingInformation    = 8,
    JobObjectExtendedLimitInformation           = 9,
    JobObjectJobSetInformation                  = 10,
    JobObjectGroupInformation                   = 11,
    JobObjectNotificationLimitInformation       = 12,
    JobObjectLimitViolationInformation          = 13,
    JobObjectGroupInformationEx                 = 14,
    JobObjectCpuRateControlInformation          = 15,
    JobObjectCompletionFilter                   = 16,
    JobObjectCompletionCounter                  = 17,
    JobObjectFreezeInformation                  = 18,
    JobObjectExtendedAccountingInformation      = 19,
    JobObjectWakeInformation                    = 20,
    JobObjectBackgroundInformation              = 21,
    JobObjectSchedulingRankBiasInformation      = 22,
    JobObjectTimerVirtualizationInformation     = 23,
    JobObjectCycleTimeNotification              = 24,
    JobObjectClearEvent                         = 25,
    JobObjectInterferenceInformation            = 26,
    JobObjectClearPeakJobMemoryUsed             = 27,
    JobObjectMemoryUsageInformation             = 28,
    JobObjectSharedCommit                       = 29,
    JobObjectContainerId                        = 30,
    JobObjectIoRateControlInformation           = 31,
    JobObjectSiloRootDirectory                  = 37,
    JobObjectServerSiloBasicInformation         = 38,
    JobObjectServerSiloUserSharedData           = 39,
    JobObjectServerSiloInitialize               = 40,
    JobObjectServerSiloRunningState             = 41,
    JobObjectIoAttribution                      = 42,
    JobObjectMemoryPartitionInformation         = 43,
    JobObjectContainerTelemetryId               = 44,
    JobObjectSiloSystemRoot                     = 45,
    JobObjectEnergyTrackingState                = 46,
    JobObjectThreadImpersonationInformation     = 47,
    JobObjectIoPriorityLimit                    = 48,
    JobObjectPagePriorityLimit                  = 49,
    JobObjectReserved1Information               = 18,
    JobObjectReserved2Information               = 19,
    JobObjectReserved3Information               = 20,
    JobObjectReserved4Information               = 21,
    JobObjectReserved5Information               = 22,
    JobObjectReserved6Information               = 23,
    JobObjectReserved7Information               = 24,
    JobObjectReserved8Information               = 25,
    JobObjectReserved9Information               = 26,
    JobObjectReserved10Information              = 27,
    JobObjectReserved11Information              = 28,
    JobObjectReserved12Information              = 29,
    JobObjectReserved13Information              = 30,
    JobObjectReserved14Information              = 31,
    JobObjectNetRateControlInformation          = 32,
    JobObjectNotificationLimitInformation2      = 33,
    JobObjectLimitViolationInformation2         = 34,
    JobObjectCreateSilo                         = 35,
    JobObjectSiloBasicInformation               = 36,
    JobObjectReserved15Information              = 37,
    JobObjectReserved16Information              = 38,
    JobObjectReserved17Information              = 39,
    JobObjectReserved18Information              = 40,
    JobObjectReserved19Information              = 41,
    JobObjectReserved20Information              = 42,
    JobObjectReserved21Information              = 43,
    JobObjectReserved22Information              = 44,
    JobObjectReserved23Information              = 45,
    JobObjectReserved24Information              = 46,
    JobObjectReserved25Information              = 47,
    JobObjectReserved26Information              = 48,
    JobObjectReserved27Information              = 49,
    MaxJobObjectInfoClass                       = 50,
};

enum _KE_WAKE_SOURCE_TYPE : uint32_t
{
    KeWakeSourceTypeSpuriousWake      = 0,
    KeWakeSourceTypeSpuriousClock     = 1,
    KeWakeSourceTypeSpuriousInterrupt = 2,
    KeWakeSourceTypeQueryFailure      = 3,
    KeWakeSourceTypeAccountingFailure = 4,
    KeWakeSourceTypeNonIrTimer        = 5,
    KeWakeSourceTypeDebugPoll         = 6,
    KeWakeSourceTypeClockWatchdog     = 7,
    KeWakeSourceTypeClockInternal     = 8,
    KeWakeSourceTypeClockNotOwner     = 9,
    KeWakeSourceTypeClockNotArmed     = 10,
    KeWakeSourceTypeExTimer           = 11,
    KeWakeSourceTypeStaticSourceMax   = 11,
    KeWakeSourceTypeInterrupt         = 128,
    KeWakeSourceTypeIRTimer           = 129,
    KeWakeSourceTypeMax               = 130,
};

enum _PROCESS_SECTION_TYPE : uint32_t
{
    ProcessSectionData           = 0,
    ProcessSectionImage          = 1,
    ProcessSectionImageNx        = 2,
    ProcessSectionPagefileBacked = 3,
    ProcessSectionMax            = 4,
};

enum _KCLOCK_TIMER_ONE_SHOT_STATE : uint32_t
{
    KClockTimerOneShotUnarmed       = 0,
    KClockTimerOneShotArmed         = 1,
    KClockTimerOneShotRearmRequired = 2,
    KClockTimerOneShotInvalid       = 3,
};

enum _KWAIT_BLOCK_STATE : uint32_t
{
    WaitBlockBypassStart           = 0,
    WaitBlockBypassComplete        = 1,
    WaitBlockSuspendBypassStart    = 2,
    WaitBlockSuspendBypassComplete = 3,
    WaitBlockActive                = 4,
    WaitBlockInactive              = 5,
    WaitBlockSuspended             = 6,
    WaitBlockAllStates             = 7,
};

enum _RTL_FEATURE_CONFIGURATION_PRIORITY : uint32_t
{
    FeatureConfigurationPriorityImageDefault  = 0,
    FeatureConfigurationPriorityEKB           = 1,
    FeatureConfigurationPrioritySafeguard     = 2,
    FeatureConfigurationPriorityPersistent    = 2,
    FeatureConfigurationPriorityReserved3     = 3,
    FeatureConfigurationPriorityService       = 4,
    FeatureConfigurationPriorityReserved5     = 5,
    FeatureConfigurationPriorityDynamic       = 6,
    FeatureConfigurationPriorityReserved7     = 7,
    FeatureConfigurationPriorityUser          = 8,
    FeatureConfigurationPrioritySecurity      = 9,
    FeatureConfigurationPriorityUserPolicy    = 10,
    FeatureConfigurationPriorityReserved11    = 11,
    FeatureConfigurationPriorityTest          = 12,
    FeatureConfigurationPriorityReserved13    = 13,
    FeatureConfigurationPriorityReserved14    = 14,
    FeatureConfigurationPriorityImageOverride = 15,
    FeatureConfigurationPriorityMax           = 15,
};

enum _KHETERO_CPU_POLICY : uint32_t
{
    KHeteroCpuPolicyAll         = 0,
    KHeteroCpuPolicyLarge       = 1,
    KHeteroCpuPolicyLargeOrIdle = 2,
    KHeteroCpuPolicySmall       = 3,
    KHeteroCpuPolicySmallOrIdle = 4,
    KHeteroCpuPolicyDynamic     = 5,
    KHeteroCpuPolicyStaticMax   = 5,
    KHeteroCpuPolicyBiasedSmall = 6,
    KHeteroCpuPolicyBiasedLarge = 7,
    KHeteroCpuPolicyDefault     = 8,
    KHeteroCpuPolicyMax         = 9,
};

enum JOB_OBJECT_IO_RATE_CONTROL_FLAGS : uint32_t
{
    JOB_OBJECT_IO_RATE_CONTROL_ENABLE                        = 1,
    JOB_OBJECT_IO_RATE_CONTROL_STANDALONE_VOLUME             = 2,
    JOB_OBJECT_IO_RATE_CONTROL_FORCE_UNIT_ACCESS_ALL         = 4,
    JOB_OBJECT_IO_RATE_CONTROL_FORCE_UNIT_ACCESS_ON_SOFT_CAP = 8,
    JOB_OBJECT_IO_RATE_CONTROL_VALID_FLAGS                   = 15,
};

enum _LDR_DDAG_STATE : uint32_t
{
    LdrModulesMerged                 = 0xfffffffb,
    LdrModulesInitError              = 0xfffffffc,
    LdrModulesSnapError              = 0xfffffffd,
    LdrModulesUnloaded               = 0xfffffffe,
    LdrModulesUnloading              = 0xffffffff,
    LdrModulesPlaceHolder            = 0,
    LdrModulesMapping                = 1,
    LdrModulesMapped                 = 2,
    LdrModulesWaitingForDependencies = 3,
    LdrModulesSnapping               = 4,
    LdrModulesSnapped                = 5,
    LdrModulesCondensed              = 6,
    LdrModulesReadyToInit            = 7,
    LdrModulesInitializing           = 8,
    LdrModulesReadyToRun             = 9,
};

enum _KOBJECTS : uint32_t
{
    EventNotificationObject     = 0,
    EventSynchronizationObject  = 1,
    MutantObject                = 2,
    ProcessObject               = 3,
    QueueObject                 = 4,
    SemaphoreObject             = 5,
    ThreadObject                = 6,
    GateObject                  = 7,
    TimerNotificationObject     = 8,
    TimerSynchronizationObject  = 9,
    Spare2Object                = 10,
    Spare3Object                = 11,
    Spare4Object                = 12,
    Spare5Object                = 13,
    Spare6Object                = 14,
    Spare7Object                = 15,
    Spare8Object                = 16,
    ProfileCallbackObject       = 17,
    ApcObject                   = 18,
    DpcObject                   = 19,
    DeviceQueueObject           = 20,
    PriQueueObject              = 21,
    InterruptObject             = 22,
    ProfileObject               = 23,
    Timer2NotificationObject    = 24,
    Timer2SynchronizationObject = 25,
    ThreadedDpcObject           = 26,
    MaximumKernelObject         = 27,
};

enum _PS_STD_HANDLE_STATE : uint32_t
{
    PsNeverDuplicate     = 0,
    PsRequestDuplicate   = 1,
    PsAlwaysDuplicate    = 2,
    PsMaxStdHandleStates = 3,
};

enum _MEMORY_PHYSICAL_CONTIGUITY_UNIT_STATE : uint32_t
{
    MemoryNotContiguous               = 0,
    MemoryAlignedAndContiguous        = 1,
    MemoryNotResident                 = 2,
    MemoryNotEligibleToMakeContiguous = 3,
    MemoryContiguityStateMax          = 4,
};

enum _PS_WAKE_REASON : uint32_t
{
    PsWakeReasonUser              = 0,
    PsWakeReasonExecutionRequired = 1,
    PsWakeReasonKernel            = 2,
    PsWakeReasonInstrumentation   = 3,
    PsWakeReasonPreserveProcess   = 4,
    PsWakeReasonActivityReference = 5,
    PsWakeReasonWorkOnBehalf      = 6,
    PsMaxWakeReasons              = 7,
};

enum _RTL_MEMORY_TYPE : uint32_t
{
    MemoryTypePaged     = 0,
    MemoryTypeNonPaged  = 1,
    MemoryType64KPage   = 2,
    MemoryTypeLargePage = 3,
    MemoryTypeHugePage  = 4,
    MemoryTypeCustom    = 5,
    MemoryTypeMax       = 6,
};

enum _KHETERO_RUNNING_TYPE : uint32_t
{
    KHeteroShortRunning   = 0,
    KHeteroLongRunning    = 1,
    KHeteroRunningTypeMax = 2,
};

enum _HARDWARE_COUNTER_TYPE : uint32_t
{
    PMCCounter             = 0,
    MaxHardwareCounterType = 1,
};

enum _REFS_SET_VOLUME_COMPRESSION_INFO_FLAGS : uint32_t
{
    REFS_SET_VOLUME_COMPRESSION_INFO_FLAG_START_COMPRESSION = 1,
    REFS_SET_VOLUME_COMPRESSION_INFO_FLAG_STOP_COMPRESSION  = 2,
    REFS_SET_VOLUME_COMPRESSION_INFO_FLAG_GC_ONLY           = 4,
    REFS_SET_VOLUME_COMPRESSION_INFO_FLAG_MAX               = 2,
};

enum _REG_NOTIFY_CLASS : uint32_t
{
    RegNtDeleteKey                    = 0,
    RegNtPreDeleteKey                 = 0,
    RegNtSetValueKey                  = 1,
    RegNtPreSetValueKey               = 1,
    RegNtDeleteValueKey               = 2,
    RegNtPreDeleteValueKey            = 2,
    RegNtSetInformationKey            = 3,
    RegNtPreSetInformationKey         = 3,
    RegNtRenameKey                    = 4,
    RegNtPreRenameKey                 = 4,
    RegNtEnumerateKey                 = 5,
    RegNtPreEnumerateKey              = 5,
    RegNtEnumerateValueKey            = 6,
    RegNtPreEnumerateValueKey         = 6,
    RegNtQueryKey                     = 7,
    RegNtPreQueryKey                  = 7,
    RegNtQueryValueKey                = 8,
    RegNtPreQueryValueKey             = 8,
    RegNtQueryMultipleValueKey        = 9,
    RegNtPreQueryMultipleValueKey     = 9,
    RegNtPreCreateKey                 = 10,
    RegNtPostCreateKey                = 11,
    RegNtPreOpenKey                   = 12,
    RegNtPostOpenKey                  = 13,
    RegNtKeyHandleClose               = 14,
    RegNtPreKeyHandleClose            = 14,
    RegNtPostDeleteKey                = 15,
    RegNtPostSetValueKey              = 16,
    RegNtPostDeleteValueKey           = 17,
    RegNtPostSetInformationKey        = 18,
    RegNtPostRenameKey                = 19,
    RegNtPostEnumerateKey             = 20,
    RegNtPostEnumerateValueKey        = 21,
    RegNtPostQueryKey                 = 22,
    RegNtPostQueryValueKey            = 23,
    RegNtPostQueryMultipleValueKey    = 24,
    RegNtPostKeyHandleClose           = 25,
    RegNtPreCreateKeyEx               = 26,
    RegNtPostCreateKeyEx              = 27,
    RegNtPreOpenKeyEx                 = 28,
    RegNtPostOpenKeyEx                = 29,
    RegNtPreFlushKey                  = 30,
    RegNtPostFlushKey                 = 31,
    RegNtPreLoadKey                   = 32,
    RegNtPostLoadKey                  = 33,
    RegNtPreUnLoadKey                 = 34,
    RegNtPostUnLoadKey                = 35,
    RegNtPreQueryKeySecurity          = 36,
    RegNtPostQueryKeySecurity         = 37,
    RegNtPreSetKeySecurity            = 38,
    RegNtPostSetKeySecurity           = 39,
    RegNtCallbackObjectContextCleanup = 40,
    RegNtPreRestoreKey                = 41,
    RegNtPostRestoreKey               = 42,
    RegNtPreSaveKey                   = 43,
    RegNtPostSaveKey                  = 44,
    RegNtPreReplaceKey                = 45,
    RegNtPostReplaceKey               = 46,
    RegNtPreQueryKeyName              = 47,
    RegNtPostQueryKeyName             = 48,
    RegNtPreSaveMergedKey             = 49,
    RegNtPostSaveMergedKey            = 50,
    MaxRegNtNotifyClass               = 51,
};

enum _KTHREAD_TAG : uint32_t
{
    KThreadTagNone           = 0,
    KThreadTagMediaBuffering = 1,
    KThreadTagDeadline       = 2,
    KThreadTagMediaOther     = 3,
    KThreadTagMax            = 4,
};

enum _KSOFTWARE_INTERRUPT_TARGET : uint32_t
{
    KSoftwareInterruptTargetNone               = 0,
    KSoftwareInterruptTargetSingleProcessor    = 1,
    KSoftwareInterruptTargetMultipleProcessors = 2,
    KSoftwareInterruptTargetMax                = 3,
};

enum _PS_PROTECTED_TYPE : uint32_t
{
    PsProtectedTypeNone           = 0,
    PsProtectedTypeProtectedLight = 1,
    PsProtectedTypeProtected      = 2,
    PsProtectedTypeMax            = 3,
};

enum _PROCESS_VA_TYPE : uint32_t
{
    ProcessVAImage   = 0,
    ProcessVASection = 1,
    ProcessVAPrivate = 2,
    ProcessVAMax     = 3,
};

enum _PS_RESOURCE_TYPE : uint32_t
{
    PsResourceNonPagedPool = 0,
    PsResourcePagedPool    = 1,
    PsResourcePageFile     = 2,
    PsResourceWorkingSet   = 3,
    PsResourceMax          = 4,
};

enum _HEAP_SEGMGR_LARGE_PAGE_POLICY : uint32_t
{
    HeapSegMgrNoLargePages       = 0,
    HeapSegMgrEnableLargePages   = 1,
    HeapSegMgrNormalPolicy       = 1,
    HeapSegMgrForceSmall         = 2,
    HeapSegMgrForceLarge         = 3,
    HeapSegMgrForceRandom        = 4,
    HeapSegMgrLargePagePolicyMax = 5,
};

enum _PERFINFO_KERNELMEMORY_USAGE_TYPE : uint32_t
{
    PerfInfoMemUsagePfnMetadata = 0,
    PerfInfoMemUsageMax         = 1,
};

enum _REFS_STREAM_SNAPSHOT_OPERATION : uint32_t
{
    REFS_STREAM_SNAPSHOT_OPERATION_INVALID            = 0,
    REFS_STREAM_SNAPSHOT_OPERATION_CREATE             = 1,
    REFS_STREAM_SNAPSHOT_OPERATION_LIST               = 2,
    REFS_STREAM_SNAPSHOT_OPERATION_QUERY_DELTAS       = 3,
    REFS_STREAM_SNAPSHOT_OPERATION_REVERT             = 4,
    REFS_STREAM_SNAPSHOT_OPERATION_SET_SHADOW_BTREE   = 5,
    REFS_STREAM_SNAPSHOT_OPERATION_CLEAR_SHADOW_BTREE = 6,
    REFS_STREAM_SNAPSHOT_OPERATION_MAX                = 6,
};

enum _IO_ALLOCATION_ACTION : uint32_t
{
    KeepObject                    = 1,
    DeallocateObject              = 2,
    DeallocateObjectKeepRegisters = 3,
};

enum _PS_PROTECTED_SIGNER : uint32_t
{
    PsProtectedSignerNone         = 0,
    PsProtectedSignerAuthenticode = 1,
    PsProtectedSignerCodeGen      = 2,
    PsProtectedSignerAntimalware  = 3,
    PsProtectedSignerLsa          = 4,
    PsProtectedSignerWindows      = 5,
    PsProtectedSignerWinTcb       = 6,
    PsProtectedSignerWinSystem    = 7,
    PsProtectedSignerApp          = 8,
    PsProtectedSignerMax          = 9,
};

enum _WORKING_SET_TYPE : uint32_t
{
    WorkingSetTypeUser           = 0,
    WorkingSetTypeSession        = 1,
    WorkingSetTypeSystemTypes    = 2,
    WorkingSetTypeSystemCache    = 2,
    WorkingSetTypePagedPool      = 3,
    WorkingSetTypeSystemViews    = 4,
    WorkingSetTypePagableMaximum = 4,
    WorkingSetTypeSystemPtes     = 5,
    WorkingSetTypeKernelStacks   = 6,
    WorkingSetTypeNonPagedPool   = 7,
    WorkingSetTypeMaximum        = 8,
};

enum _JOBOBJECT_PAGE_PRIORITY_LIMIT_FLAGS : uint32_t
{
    JOBOBJECT_PAGE_PRIORITY_LIMIT_ENABLE      = 1,
    JOBOBJECT_PAGE_PRIORITY_LIMIT_VALID_FLAGS = 1,
};

enum DISPLAYCONFIG_SCANLINE_ORDERING : uint32_t
{
    DISPLAYCONFIG_SCANLINE_ORDERING_UNSPECIFIED                = 0,
    DISPLAYCONFIG_SCANLINE_ORDERING_PROGRESSIVE                = 1,
    DISPLAYCONFIG_SCANLINE_ORDERING_INTERLACED                 = 2,
    DISPLAYCONFIG_SCANLINE_ORDERING_INTERLACED_UPPERFIELDFIRST = 2,
    DISPLAYCONFIG_SCANLINE_ORDERING_INTERLACED_LOWERFIELDFIRST = 3,
    DISPLAYCONFIG_SCANLINE_ORDERING_FORCE_UINT32               = 0xffffffff,
};

enum PS_CREATE_STATE : uint32_t
{
    PsCreateInitialState        = 0,
    PsCreateFailOnFileOpen      = 1,
    PsCreateFailOnSectionCreate = 2,
    PsCreateFailExeFormat       = 3,
    PsCreateFailMachineMismatch = 4,
    PsCreateFailExeName         = 5,
    PsCreateSuccess             = 6,
    PsCreateMaximumStates       = 7,
};

enum _KTHREAD_PPM_POLICY : uint32_t
{
    ThreadPpmDefault         = 0,
    ThreadPpmThrottle        = 1,
    ThreadPpmSemiThrottle    = 2,
    ThreadPpmNoThrottle      = 3,
    ThreadPpmMaximumThrottle = 4,
    MaxThreadPpmPolicy       = 5,
};

enum _VRF_RULE_CLASS_ID : uint32_t
{
    DifPluginSpecialPool              = 0,
    DifPluginIrqlRuleClass            = 1,
    VrfAllocationFailuresRuleClass    = 2,
    DifPluginPoolTracking             = 3,
    DifPluginIoRuleClass              = 4,
    DifPluginDeadlock                 = 5,
    VrfEnhancedIORuleClass            = 6,
    DifPluginDmaRuleClass             = 7,
    DifPluginSecurity                 = 8,
    VrfForcePendingIORequestRuleClass = 9,
    VrfIRPTrackingRuleClass           = 10,
    DifPluginMiscellaneous            = 11,
    VrfMoreDebuggingRuleClass         = 12,
    VrfMDLInvariantStackRuleClass     = 13,
    VrfMDLInvariantDriverRuleClass    = 14,
    DifPluginPowerDelayFuzzing        = 15,
    VrfPortMiniportRuleClass          = 16,
    DifPluginDdiStandard              = 17,
    DifPluginAutoFail                 = 18,
    DifPluginDdiStateful              = 19,
    VrfRuleClassBase                  = 20,
    VrfNdisWifiRuleClass              = 21,
    DifPluginDriverLogging            = 22,
    DifPluginSyncDelayFuzzing         = 23,
    VrfVMSwitchingRuleClass           = 24,
    VrfCodeIntegrityRuleClass         = 25,
    VrfBelow4GBAllocationRuleClass    = 26,
    VrfProcessorBranchTraceRuleClass  = 27,
    VrfAdvancedMMRuleClass            = 28,
    VrfExtendingXDVTimeLimit          = 29,
    VrfSystemBIOSRuleClass            = 30,
    VrfHardwareRuleClass              = 31,
    DifPluginDriverIsolation          = 32,
    DifPluginWdfRuleClass             = 33,
    DifPluginDdiMoreirql              = 34,
    DifPluginMode                     = 35,
    ReservedForDVRF36                 = 36,
    DifPluginTest                     = 37,
    DifPluginInfoDisclosureIRPRule    = 38,
    DifPluginLwSP                     = 39,
    DifPluginAvxCorruption            = 40,
    DifPluginAccessModeMismatch       = 41,
    ReservedForDVRF42                 = 42,
    ReservedForDVRF43                 = 43,
    ReservedForDVRF44                 = 44,
    ReservedForDVRF45                 = 45,
    ReservedForDVRF46                 = 46,
    ReservedForDVRF47                 = 47,
    ReservedForDVRF48                 = 48,
    ReservedForDVRF49                 = 49,
    ReservedForDVRF50                 = 50,
    ReservedForDVRF51                 = 51,
    ReservedForDVRF52                 = 52,
    ReservedForDVRF53                 = 53,
    ReservedForDVRF54                 = 54,
    ReservedForDVRF55                 = 55,
    ReservedForDVRF56                 = 56,
    ReservedForDVRF57                 = 57,
    ReservedForDVRF58                 = 58,
    ReservedForDVRF59                 = 59,
    ReservedForDVRF60                 = 60,
    ReservedForDVRF61                 = 61,
    ReservedForDVRF62                 = 62,
    ReservedForDVRF63                 = 63,
    VrfRuleClassSizeMax               = 64,
};

enum _KPROCESS_PPM_POLICY : uint32_t
{
    ProcessPpmDefault         = 0,
    ProcessPpmThrottle        = 1,
    ProcessPpmSemiThrottle    = 2,
    ProcessPpmNoThrottle      = 3,
    ProcessPpmWindowMinimized = 4,
    ProcessPpmWindowOccluded  = 5,
    ProcessPpmWindowVisible   = 6,
    ProcessPpmWindowInFocus   = 7,
    ProcessPpmMaximumThrottle = 8,
    MaxProcessPpmPolicy       = 9,
};

enum _MEMORY_CACHING_TYPE_ORIG : uint32_t
{
    MmFrameBufferCached = 2,
};

enum _INTERLOCKED_RESULT : uint32_t
{
    ResultNegative = 1,
    ResultZero     = 0,
    ResultPositive = 2,
};

enum _SYSTEM_PROCESS_CLASSIFICATION : uint32_t
{
    SystemProcessClassificationNormal         = 0,
    SystemProcessClassificationSystem         = 1,
    SystemProcessClassificationSecureSystem   = 2,
    SystemProcessClassificationMemCompression = 3,
    SystemProcessClassificationRegistry       = 4,
    SystemProcessClassificationMaximum        = 5,
};

enum _WOW64_SHARED_INFORMATION : uint32_t
{
    SharedNtdll32LdrInitializeThunk                  = 0,
    SharedNtdll32KiUserExceptionDispatcher           = 1,
    SharedNtdll32KiUserApcDispatcher                 = 2,
    SharedNtdll32KiUserCallbackDispatcher            = 3,
    SharedNtdll32RtlUserThreadStart                  = 4,
    SharedNtdll32pQueryProcessDebugInformationRemote = 5,
    SharedNtdll32BaseAddress                         = 6,
    SharedNtdll32LdrSystemDllInitBlock               = 7,
    SharedNtdll32RtlpFreezeTimeBias                  = 8,
    Wow64SharedPageEntriesCount                      = 9,
};

enum _PROCESSOR_CACHE_TYPE : uint32_t
{
    CacheUnified     = 0,
    CacheInstruction = 1,
    CacheData        = 2,
    CacheTrace       = 3,
};

enum _KWAIT_STATE : uint32_t
{
    WaitInProgress        = 0,
    WaitCommitted         = 1,
    WaitAborted           = 2,
    WaitSuspendInProgress = 3,
    WaitSuspended         = 4,
    WaitResumeInProgress  = 5,
    WaitResumeAborted     = 6,
    WaitFirstSuspendState = 3,
    WaitLastSuspendState  = 6,
    MaximumWaitState      = 7,
};

enum _USER_ACTIVITY_PRESENCE : uint32_t
{
    PowerUserPresent    = 0,
    PowerUserNotPresent = 1,
    PowerUserInactive   = 2,
    PowerUserMaximum    = 3,
    PowerUserInvalid    = 3,
};

enum _INTERFACE_TYPE : uint32_t
{
    InterfaceTypeUndefined = 0xffffffff,
    Internal               = 0,
    Isa                    = 1,
    Eisa                   = 2,
    MicroChannel           = 3,
    TurboChannel           = 4,
    PCIBus                 = 5,
    VMEBus                 = 6,
    NuBus                  = 7,
    PCMCIABus              = 8,
    CBus                   = 9,
    MPIBus                 = 10,
    MPSABus                = 11,
    ProcessorInternal      = 12,
    InternalPowerBus       = 13,
    PNPISABus              = 14,
    PNPBus                 = 15,
    Vmcs                   = 16,
    ACPIBus                = 17,
    MaximumInterfaceType   = 18,
};

enum _KPROCESS_STATE : uint32_t
{
    ProcessInMemory      = 0,
    ProcessOutOfMemory   = 1,
    ProcessInTransition  = 2,
    ProcessOutTransition = 3,
    ProcessInSwap        = 4,
    ProcessOutSwap       = 5,
    ProcessRetryOutSwap  = 6,
    ProcessAllSwapStates = 7,
};

enum _INVPCID_TYPE : uint32_t
{
    InvpcidIndividualAddress    = 0,
    InvpcidSingleContext        = 1,
    InvpcidAllContextAndGlobals = 2,
    InvpcidAllContext           = 3,
};

enum _TRACE_INFORMATION_CLASS : uint32_t
{
    TraceIdClass                   = 0,
    TraceHandleClass               = 1,
    TraceEnableFlagsClass          = 2,
    TraceEnableLevelClass          = 3,
    GlobalLoggerHandleClass        = 4,
    EventLoggerHandleClass         = 5,
    AllLoggerHandlesClass          = 6,
    TraceHandleByNameClass         = 7,
    LoggerEventsLostClass          = 8,
    TraceSessionSettingsClass      = 9,
    LoggerEventsLoggedClass        = 10,
    DiskIoNotifyRoutinesClass      = 11,
    TraceInformationClassReserved1 = 12,
    AllPossibleNotifyRoutinesClass = 12,
    FltIoNotifyRoutinesClass       = 13,
    TraceInformationClassReserved2 = 14,
    WdfNotifyRoutinesClass         = 15,
    MaxTraceInformationClass       = 16,
};

enum _EXCEPTION_DISPOSITION : uint32_t
{
    ExceptionContinueExecution = 0,
    ExceptionContinueSearch    = 1,
    ExceptionNestedException   = 2,
    ExceptionCollidedUnwind    = 3,
};

enum _KISOLATION_WIDTH : uint32_t
{
    KiIsolationWidthLogicalProcessor = 0,
    KiIsolationWidthCore             = 1,
    KiIsolationWidthMax              = 2,
};

enum _KERNEL_SHADOW_STACK_TYPE : uint32_t
{
    KernelShadowStackTypeUserThread               = 0,
    KernelShadowStackTypeKernelThread             = 1,
    KernelShadowStackTypeRstorssp                 = 2,
    KernelShadowStackTypeSetssbsy                 = 3,
    KernelShadowStackTypeSetssbsyForSystemStartup = 4,
    KernelShadowStackTypeMax                      = 5,
};

enum _SECURITY_IMPERSONATION_LEVEL : uint32_t
{
    SecurityAnonymous      = 0,
    SecurityIdentification = 1,
    SecurityImpersonation  = 2,
    SecurityDelegation     = 3,
};

enum _PERFINFO_MM_STAT : uint32_t
{
    PerfInfoMMStatNotUsed              = 0,
    PerfInfoMMStatAggregatePageCombine = 1,
    PerfInfoMMStatIterationPageCombine = 2,
    PerfInfoMMStatMax                  = 3,
};

enum _SYSTEM_POOL_LIMIT_MEM_TYPE : uint32_t
{
    SysPlMemPaged    = 0,
    SysPlMemNonPaged = 1,
    SysPlMemTypeMax  = 2,
};

enum _PROC_HYPERVISOR_STATE : uint32_t
{
    ProcHypervisorNone       = 0,
    ProcHypervisorPresent    = 1,
    ProcHypervisorPower      = 2,
    ProcHypervisorHvCounters = 3,
};

enum _KHETERO_CPU_QOS : uint32_t
{
    KHeteroCpuQosDefault    = 0,
    KHeteroCpuQosHigh       = 0,
    KHeteroCpuQosMedium     = 1,
    KHeteroCpuQosLow        = 2,
    KHeteroCpuQosMultimedia = 3,
    KHeteroCpuQosDeadline   = 4,
    KHeteroCpuQosEco        = 5,
    KHeteroCpuQosUtility    = 6,
    KHeteroCpuQosDynamic    = 7,
    KHeteroCpuQosMax        = 7,
};

enum _THREAD_WORKLOAD_CLASS : uint32_t
{
    ThreadWorkloadClassDefault  = 0,
    ThreadWorkloadClassGraphics = 1,
    MaxThreadWorkloadClass      = 2,
};

enum _KTOPOLOGY_LEVEL : uint32_t
{
    KTopologyLevelProcessor = 0,
    KTopologyLevelCore      = 1,
    KTopologyLevelModule    = 2,
    KTopologyLevelDie       = 3,
    KTopologyLevelPackage   = 4,
    KTopologyLevelCount     = 5,
};

enum _SYSTEM_FEATURE_CONFIGURATION_SECTION_TYPE : uint32_t
{
    SystemFeatureConfigurationSectionTypeBoot          = 0,
    SystemFeatureConfigurationSectionTypeRuntime       = 1,
    SystemFeatureConfigurationSectionTypeUsageTriggers = 2,
    SystemFeatureConfigurationSectionTypeCount         = 3,
};

enum _PS_ATTRIBUTE_NUM : uint32_t
{
    PsAttributeParentProcess                = 0,
    PsAttributeDebugObject                  = 1,
    PsAttributeToken                        = 2,
    PsAttributeClientId                     = 3,
    PsAttributeTebAddress                   = 4,
    PsAttributeImageName                    = 5,
    PsAttributeImageInfo                    = 6,
    PsAttributeMemoryReserve                = 7,
    PsAttributePriorityClass                = 8,
    PsAttributeErrorMode                    = 9,
    PsAttributeStdHandleInfo                = 10,
    PsAttributeHandleList                   = 11,
    PsAttributeGroupAffinity                = 12,
    PsAttributePreferredNode                = 13,
    PsAttributeIdealProcessor               = 14,
    PsAttributeUmsThread                    = 15,
    PsAttributeMitigationOptions            = 16,
    PsAttributeProtectionLevel              = 17,
    PsAttributeSecureProcess                = 18,
    PsAttributeJobList                      = 19,
    PsAttributeChildProcessPolicy           = 20,
    PsAttributeAllApplicationPackagesPolicy = 21,
    PsAttributeWin32kFilter                 = 22,
    PsAttributeSafeOpenPromptOriginClaim    = 23,
    PsAttributeBnoIsolation                 = 24,
    PsAttributeDesktopAppPolicy             = 25,
    PsAttributeChpe                         = 26,
    PsAttributeMitigationAuditOptions       = 27,
    PsAttributeMachineType                  = 28,
    PsAttributeComponentFilter              = 29,
    PsAttributeEnableOptionalXStateFeatures = 30,
    PsAttributeMax                          = 31,
};

enum _SYSTEM_INFORMATION_CLASS : uint32_t
{
    SystemBasicInformation                                = 0,
    SystemProcessorInformation                            = 1,
    SystemPerformanceInformation                          = 2,
    SystemTimeOfDayInformation                            = 3,
    SystemPathInformation                                 = 4,
    SystemProcessInformation                              = 5,
    SystemCallCountInformation                            = 6,
    SystemDeviceInformation                               = 7,
    SystemProcessorPerformanceInformation                 = 8,
    SystemFlagsInformation                                = 9,
    SystemCallTimeInformation                             = 10,
    SystemModuleInformation                               = 11,
    SystemLocksInformation                                = 12,
    SystemStackTraceInformation                           = 13,
    SystemPagedPoolInformation                            = 14,
    SystemNonPagedPoolInformation                         = 15,
    SystemHandleInformation                               = 16,
    SystemObjectInformation                               = 17,
    SystemPageFileInformation                             = 18,
    SystemVdmInstemulInformation                          = 19,
    SystemVdmBopInformation                               = 20,
    SystemFileCacheInformation                            = 21,
    SystemPoolTagInformation                              = 22,
    SystemInterruptInformation                            = 23,
    SystemDpcBehaviorInformation                          = 24,
    SystemFullMemoryInformation                           = 25,
    SystemLoadGdiDriverInformation                        = 26,
    SystemUnloadGdiDriverInformation                      = 27,
    SystemTimeAdjustmentInformation                       = 28,
    SystemSummaryMemoryInformation                        = 29,
    SystemMirrorMemoryInformation                         = 30,
    SystemPerformanceTraceInformation                     = 31,
    SystemObsolete0                                       = 32,
    SystemExceptionInformation                            = 33,
    SystemCrashDumpStateInformation                       = 34,
    SystemKernelDebuggerInformation                       = 35,
    SystemContextSwitchInformation                        = 36,
    SystemRegistryQuotaInformation                        = 37,
    SystemExtendServiceTableInformation                   = 38,
    SystemPrioritySeperation                              = 39,
    SystemVerifierAddDriverInformation                    = 40,
    SystemVerifierRemoveDriverInformation                 = 41,
    SystemProcessorIdleInformation                        = 42,
    SystemLegacyDriverInformation                         = 43,
    SystemCurrentTimeZoneInformation                      = 44,
    SystemLookasideInformation                            = 45,
    SystemTimeSlipNotification                            = 46,
    SystemSessionCreate                                   = 47,
    SystemSessionDetach                                   = 48,
    SystemSessionInformation                              = 49,
    SystemRangeStartInformation                           = 50,
    SystemVerifierInformation                             = 51,
    SystemVerifierThunkExtend                             = 52,
    SystemSessionProcessInformation                       = 53,
    SystemLoadGdiDriverInSystemSpace                      = 54,
    SystemNumaProcessorMap                                = 55,
    SystemPrefetcherInformation                           = 56,
    SystemExtendedProcessInformation                      = 57,
    SystemRecommendedSharedDataAlignment                  = 58,
    SystemComPlusPackage                                  = 59,
    SystemNumaAvailableMemory                             = 60,
    SystemProcessorPowerInformation                       = 61,
    SystemEmulationBasicInformation                       = 62,
    SystemEmulationProcessorInformation                   = 63,
    SystemExtendedHandleInformation                       = 64,
    SystemLostDelayedWriteInformation                     = 65,
    SystemBigPoolInformation                              = 66,
    SystemSessionPoolTagInformation                       = 67,
    SystemSessionMappedViewInformation                    = 68,
    SystemHotpatchInformation                             = 69,
    SystemObjectSecurityMode                              = 70,
    SystemWatchdogTimerHandler                            = 71,
    SystemWatchdogTimerInformation                        = 72,
    SystemLogicalProcessorInformation                     = 73,
    SystemWow64SharedInformationObsolete                  = 74,
    SystemRegisterFirmwareTableInformationHandler         = 75,
    SystemFirmwareTableInformation                        = 76,
    SystemModuleInformationEx                             = 77,
    SystemVerifierTriageInformation                       = 78,
    SystemSuperfetchInformation                           = 79,
    SystemMemoryListInformation                           = 80,
    SystemFileCacheInformationEx                          = 81,
    SystemThreadPriorityClientIdInformation               = 82,
    SystemProcessorIdleCycleTimeInformation               = 83,
    SystemVerifierCancellationInformation                 = 84,
    SystemProcessorPowerInformationEx                     = 85,
    SystemRefTraceInformation                             = 86,
    SystemSpecialPoolInformation                          = 87,
    SystemProcessIdInformation                            = 88,
    SystemErrorPortInformation                            = 89,
    SystemBootEnvironmentInformation                      = 90,
    SystemHypervisorInformation                           = 91,
    SystemVerifierInformationEx                           = 92,
    SystemTimeZoneInformation                             = 93,
    SystemImageFileExecutionOptionsInformation            = 94,
    SystemCoverageInformation                             = 95,
    SystemPrefetchPatchInformation                        = 96,
    SystemVerifierFaultsInformation                       = 97,
    SystemSystemPartitionInformation                      = 98,
    SystemSystemDiskInformation                           = 99,
    SystemProcessorPerformanceDistribution                = 100,
    SystemNumaProximityNodeInformation                    = 101,
    SystemDynamicTimeZoneInformation                      = 102,
    SystemCodeIntegrityInformation                        = 103,
    SystemProcessorMicrocodeUpdateInformation             = 104,
    SystemProcessorBrandString                            = 105,
    SystemVirtualAddressInformation                       = 106,
    SystemLogicalProcessorAndGroupInformation             = 107,
    SystemProcessorCycleTimeInformation                   = 108,
    SystemStoreInformation                                = 109,
    SystemRegistryAppendString                            = 110,
    SystemAitSamplingValue                                = 111,
    SystemVhdBootInformation                              = 112,
    SystemCpuQuotaInformation                             = 113,
    SystemNativeBasicInformation                          = 114,
    SystemErrorPortTimeouts                               = 115,
    SystemLowPriorityIoInformation                        = 116,
    SystemBootEntropyInformation                          = 117,
    SystemVerifierCountersInformation                     = 118,
    SystemPagedPoolInformationEx                          = 119,
    SystemSystemPtesInformationEx                         = 120,
    SystemNodeDistanceInformation                         = 121,
    SystemAcpiAuditInformation                            = 122,
    SystemBasicPerformanceInformation                     = 123,
    SystemQueryPerformanceCounterInformation              = 124,
    SystemSessionBigPoolInformation                       = 125,
    SystemBootGraphicsInformation                         = 126,
    SystemScrubPhysicalMemoryInformation                  = 127,
    SystemBadPageInformation                              = 128,
    SystemProcessorProfileControlArea                     = 129,
    SystemCombinePhysicalMemoryInformation                = 130,
    SystemEntropyInterruptTimingInformation               = 131,
    SystemConsoleInformation                              = 132,
    SystemPlatformBinaryInformation                       = 133,
    SystemPolicyInformation                               = 134,
    SystemHypervisorProcessorCountInformation             = 135,
    SystemDeviceDataInformation                           = 136,
    SystemDeviceDataEnumerationInformation                = 137,
    SystemMemoryTopologyInformation                       = 138,
    SystemMemoryChannelInformation                        = 139,
    SystemBootLogoInformation                             = 140,
    SystemProcessorPerformanceInformationEx               = 141,
    SystemCriticalProcessErrorLogInformation              = 142,
    SystemSecureBootPolicyInformation                     = 143,
    SystemPageFileInformationEx                           = 144,
    SystemSecureBootInformation                           = 145,
    SystemEntropyInterruptTimingRawInformation            = 146,
    SystemPortableWorkspaceEfiLauncherInformation         = 147,
    SystemFullProcessInformation                          = 148,
    SystemKernelDebuggerInformationEx                     = 149,
    SystemBootMetadataInformation                         = 150,
    SystemSoftRebootInformation                           = 151,
    SystemElamCertificateInformation                      = 152,
    SystemOfflineDumpConfigInformation                    = 153,
    SystemProcessorFeaturesInformation                    = 154,
    SystemRegistryReconciliationInformation               = 155,
    SystemEdidInformation                                 = 156,
    SystemManufacturingInformation                        = 157,
    SystemEnergyEstimationConfigInformation               = 158,
    SystemHypervisorDetailInformation                     = 159,
    SystemProcessorCycleStatsInformation                  = 160,
    SystemVmGenerationCountInformation                    = 161,
    SystemTrustedPlatformModuleInformation                = 162,
    SystemKernelDebuggerFlags                             = 163,
    SystemCodeIntegrityPolicyInformation                  = 164,
    SystemIsolatedUserModeInformation                     = 165,
    SystemHardwareSecurityTestInterfaceResultsInformation = 166,
    SystemSingleModuleInformation                         = 167,
    SystemAllowedCpuSetsInformation                       = 168,
    SystemVsmProtectionInformation                        = 169,
    SystemInterruptCpuSetsInformation                     = 170,
    SystemSecureBootPolicyFullInformation                 = 171,
    SystemCodeIntegrityPolicyFullInformation              = 172,
    SystemAffinitizedInterruptProcessorInformation        = 173,
    SystemRootSiloInformation                             = 174,
    SystemCpuSetInformation                               = 175,
    SystemCpuSetTagInformation                            = 176,
    SystemWin32WerStartCallout                            = 177,
    SystemSecureKernelProfileInformation                  = 178,
    SystemCodeIntegrityPlatformManifestInformation        = 179,
    SystemInterruptSteeringInformation                    = 180,
    SystemSupportedProcessorArchitectures                 = 181,
    SystemMemoryUsageInformation                          = 182,
    SystemCodeIntegrityCertificateInformation             = 183,
    SystemPhysicalMemoryInformation                       = 184,
    SystemControlFlowTransition                           = 185,
    SystemKernelDebuggingAllowed                          = 186,
    SystemActivityModerationExeState                      = 187,
    SystemActivityModerationUserSettings                  = 188,
    SystemCodeIntegrityPoliciesFullInformation            = 189,
    SystemCodeIntegrityUnlockInformation                  = 190,
    SystemIntegrityQuotaInformation                       = 191,
    SystemFlushInformation                                = 192,
    SystemProcessorIdleMaskInformation                    = 193,
    SystemSecureDumpEncryptionInformation                 = 194,
    SystemWriteConstraintInformation                      = 195,
    SystemKernelVaShadowInformation                       = 196,
    SystemHypervisorSharedPageInformation                 = 197,
    SystemFirmwareBootPerformanceInformation              = 198,
    SystemCodeIntegrityVerificationInformation            = 199,
    SystemFirmwarePartitionInformation                    = 200,
    SystemSpeculationControlInformation                   = 201,
    SystemDmaGuardPolicyInformation                       = 202,
    SystemEnclaveLaunchControlInformation                 = 203,
    SystemWorkloadAllowedCpuSetsInformation               = 204,
    SystemCodeIntegrityUnlockModeInformation              = 205,
    SystemLeapSecondInformation                           = 206,
    SystemFlags2Information                               = 207,
    SystemSecurityModelInformation                        = 208,
    SystemCodeIntegritySyntheticCacheInformation          = 209,
    SystemFeatureConfigurationInformation                 = 210,
    SystemFeatureConfigurationSectionInformation          = 211,
    SystemFeatureUsageSubscriptionInformation             = 212,
    SystemSecureSpeculationControlInformation             = 213,
    SystemSpacesBootInformation                           = 214,
    SystemFwRamdiskInformation                            = 215,
    SystemWheaIpmiHardwareInformation                     = 216,
    SystemDifSetRuleClassInformation                      = 217,
    SystemDifClearRuleClassInformation                    = 218,
    SystemDifApplyPluginVerificationOnDriver              = 219,
    SystemDifRemovePluginVerificationOnDriver             = 220,
    SystemShadowStackInformation                          = 221,
    SystemBuildVersionInformation                         = 222,
    SystemPoolLimitInformation                            = 223,
    SystemCodeIntegrityAddDynamicStore                    = 224,
    SystemCodeIntegrityClearDynamicStores                 = 225,
    SystemDifPoolTrackingInformation                      = 226,
    SystemPoolZeroingInformation                          = 227,
    SystemDpcWatchdogInformation                          = 228,
    SystemDpcWatchdogInformation2                         = 229,
    SystemSupportedProcessorArchitectures2                = 230,
    SystemSingleProcessorRelationshipInformation          = 231,
    SystemXfgCheckFailureInformation                      = 232,
    SystemIommuStateInformation                           = 233,
    SystemHypervisorMinrootInformation                    = 234,
    SystemHypervisorBootPagesInformation                  = 235,
    SystemPointerAuthInformation                          = 236,
    SystemSecureKernelDebuggerInformation                 = 237,
    SystemOriginalImageFeatureInformation                 = 238,
    MaxSystemInfoClass                                    = 239,
};

enum _PROCESS_TERMINATE_REQUEST_REASON : uint32_t
{
    ProcessTerminateRequestReasonNone            = 0,
    ProcessTerminateCommitFail                   = 1,
    ProcessTerminateWriteToExecuteMemory         = 2,
    ProcessTerminateAttachedWriteToExecuteMemory = 3,
    ProcessTerminateRequestReasonMax             = 4,
};

enum _VRF_TRIAGE_CONTEXT : uint32_t
{
    VRF_TRIAGE_CONTEXT_NONE                 = 0,
    VRF_TRIAGE_CONTEXT_DEFAULT              = 1,
    VRF_TRIAGE_CONTEXT_DEVELOPMENT          = 1,
    VRF_TRIAGE_CONTEXT_CERTIFICATION        = 2,
    VRF_TRIAGE_CONTEXT_CERTIFICATION_STRICT = 3,
    VRF_TRIAGE_CONTEXT_FLIGHT_TARGETED      = 4,
    VRF_TRIAGE_CONTEXT_FLIGHT_DIAGNOSTICS   = 5,
    VRF_TRIAGE_CONTEXT_FLIGHT_MONITORING    = 6,
    NUM_VRF_TRIAGE_CONTEXTS                 = 7,
};

enum _EXQUEUEINDEX : uint32_t
{
    ExPoolUntrusted = 0,
    IoPoolUntrusted = 1,
    ExPoolMax       = 8,
};

enum ReplacesCorHdrNumericDefines : uint32_t
{
    COMIMAGE_FLAGS_ILONLY                      = 1,
    COMIMAGE_FLAGS_32BITREQUIRED               = 2,
    COMIMAGE_FLAGS_IL_LIBRARY                  = 4,
    COMIMAGE_FLAGS_STRONGNAMESIGNED            = 8,
    COMIMAGE_FLAGS_NATIVE_ENTRYPOINT           = 16,
    COMIMAGE_FLAGS_TRACKDEBUGDATA              = 65536,
    COMIMAGE_FLAGS_32BITPREFERRED              = 131072,
    COR_VERSION_MAJOR_V2                       = 2,
    COR_VERSION_MAJOR                          = 2,
    COR_VERSION_MINOR                          = 5,
    COR_DELETED_NAME_LENGTH                    = 8,
    COR_VTABLEGAP_NAME_LENGTH                  = 8,
    NATIVE_TYPE_MAX_CB                         = 1,
    COR_ILMETHOD_SECT_SMALL_MAX_DATASIZE       = 255,
    IMAGE_COR_MIH_METHODRVA                    = 1,
    IMAGE_COR_MIH_EHRVA                        = 2,
    IMAGE_COR_MIH_BASICBLOCK                   = 8,
    COR_VTABLE_32BIT                           = 1,
    COR_VTABLE_64BIT                           = 2,
    COR_VTABLE_FROM_UNMANAGED                  = 4,
    COR_VTABLE_FROM_UNMANAGED_RETAIN_APPDOMAIN = 8,
    COR_VTABLE_CALL_MOST_DERIVED               = 16,
    IMAGE_COR_EATJ_THUNK_SIZE                  = 32,
    MAX_CLASS_NAME                             = 1024,
    MAX_PACKAGE_NAME                           = 1024,
};

enum JOB_OBJECT_NET_RATE_CONTROL_FLAGS : uint32_t
{
    JOB_OBJECT_NET_RATE_CONTROL_ENABLE        = 1,
    JOB_OBJECT_NET_RATE_CONTROL_MAX_BANDWIDTH = 2,
    JOB_OBJECT_NET_RATE_CONTROL_DSCP_TAG      = 4,
    JOB_OBJECT_NET_RATE_CONTROL_VALID_FLAGS   = 7,
};

enum _KCONTINUE_TYPE : uint32_t
{
    KCONTINUE_UNWIND   = 0,
    KCONTINUE_RESUME   = 1,
    KCONTINUE_LONGJUMP = 2,
    KCONTINUE_SET      = 3,
    KCONTINUE_LAST     = 4,
    KCONTINUE_INVALID  = 4,
};

enum PPM_IDLE_BUCKET_TIME_TYPE : uint32_t
{
    PpmIdleBucketTimeInQpc   = 0,
    PpmIdleBucketTimeIn100ns = 1,
    PpmIdleBucketTimeMaximum = 2,
};

enum _OB_OPEN_REASON : uint32_t
{
    ObCreateHandle    = 0,
    ObOpenHandle      = 1,
    ObDuplicateHandle = 2,
    ObInheritHandle   = 3,
    ObMaxOpenReason   = 4,
};

enum _SECURITY_OPERATION_CODE : uint32_t
{
    SetSecurityDescriptor    = 0,
    QuerySecurityDescriptor  = 1,
    DeleteSecurityDescriptor = 2,
    AssignSecurityDescriptor = 3,
};

enum _SERVERSILO_STATE : uint32_t
{
    SERVERSILO_INITING       = 0,
    SERVERSILO_STARTED       = 1,
    SERVERSILO_SHUTTING_DOWN = 2,
    SERVERSILO_TERMINATING   = 3,
    SERVERSILO_TERMINATED    = 4,
};

enum _RTL_GENERIC_COMPARE_RESULTS : uint32_t
{
    GenericLessThan    = 0,
    GenericGreaterThan = 1,
    GenericEqual       = 2,
};

enum MCA_EXCEPTION_TYPE : uint32_t
{
    HAL_MCE_RECORD = 0,
    HAL_MCA_RECORD = 1,
};

enum _FUNCTION_TABLE_TYPE : uint32_t
{
    RF_SORTED         = 0,
    RF_UNSORTED       = 1,
    RF_CALLBACK       = 2,
    RF_KERNEL_DYNAMIC = 3,
};

enum _PROCESSOR_PRESENCE : uint32_t
{
    ProcessorPresenceNt     = 0,
    ProcessorPresenceHv     = 1,
    ProcessorPresenceHidden = 2,
};

enum LSA_FOREST_TRUST_RECORD_TYPE : uint32_t
{
    ForestTrustTopLevelName   = 0,
    ForestTrustTopLevelNameEx = 1,
    ForestTrustDomainInfo     = 2,
    ForestTrustBinaryInfo     = 3,
    ForestTrustScannerInfo    = 4,
    ForestTrustRecordTypeLast = 4,
};

enum _JOBOBJECT_IO_PRIORITY_LIMIT_FLAGS : uint32_t
{
    JOBOBJECT_IO_PRIORITY_LIMIT_ENABLE      = 1,
    JOBOBJECT_IO_PRIORITY_LIMIT_VALID_FLAGS = 1,
};

enum _MACHINE_CHECK_NESTING_LEVEL : uint32_t
{
    McheckNormal        = 0,
    McheckNmi           = 1,
    McheckNestingLevels = 2,
};

enum _MEM_DEDICATED_ATTRIBUTE_TYPE : uint32_t
{
    MemDedicatedAttributeReadBandwidth  = 0,
    MemDedicatedAttributeReadLatency    = 1,
    MemDedicatedAttributeWriteBandwidth = 2,
    MemDedicatedAttributeWriteLatency   = 3,
    MemDedicatedAttributeMax            = 4,
};

enum _IRQ_PRIORITY : uint32_t
{
    IrqPriorityUndefined = 0,
    IrqPriorityLow       = 1,
    IrqPriorityNormal    = 2,
    IrqPriorityHigh      = 3,
};

enum _FS_FILTER_SECTION_SYNC_TYPE : uint32_t
{
    SyncTypeOther         = 0,
    SyncTypeCreateSection = 1,
};

struct _ACTIVATION_CONTEXT_STACK64
{
    /* 00 */ uint64_t ActiveFrame;
    /* 08 */ LIST_ENTRY64 FrameListCache;
    /* 18 */ uint32_t Flags;
    /* 1c */ uint32_t NextCookieSequenceNumber;
    /* 20 */ uint32_t StackId;
};
using ACTIVATION_CONTEXT_STACK64  = struct _ACTIVATION_CONTEXT_STACK64;
using PACTIVATION_CONTEXT_STACK64 = struct _ACTIVATION_CONTEXT_STACK64*;

struct _ACTIVATION_CONTEXT_STACK32
{
    /* 00 */ uint32_t ActiveFrame;
    /* 04 */ LIST_ENTRY32 FrameListCache;
    /* 0c */ uint32_t Flags;
    /* 10 */ uint32_t NextCookieSequenceNumber;
    /* 14 */ uint32_t StackId;
};
using ACTIVATION_CONTEXT_STACK32  = struct _ACTIVATION_CONTEXT_STACK32;
using PACTIVATION_CONTEXT_STACK32 = struct _ACTIVATION_CONTEXT_STACK32*;

struct _MM_DRIVER_VERIFIER_DATA
{
    /* 00 */ uint32_t Level;
    /* 04 */ uint32_t RaiseIrqls;
    /* 08 */ uint32_t AcquireSpinLocks;
    /* 0c */ uint32_t SynchronizeExecutions;
    /* 10 */ uint32_t AllocationsAttempted;
    /* 14 */ uint32_t AllocationsSucceeded;
    /* 18 */ uint32_t AllocationsSucceededSpecialPool;
    /* 1c */ uint32_t AllocationsWithNoTag;
    /* 20 */ uint32_t TrimRequests;
    /* 24 */ uint32_t Trims;
    /* 28 */ uint32_t AllocationsFailed;
    /* 2c */ uint32_t AllocationsFailedDeliberately;
    /* 30 */ uint32_t AllocationFreed;
    /* 34 */ uint32_t Loads;
    /* 38 */ uint32_t Unloads;
    /* 3c */ uint32_t UnTrackedPool;
    /* 40 */ uint32_t UserTrims;
    /* 44 */ uint32_t CurrentPagedPoolAllocations;
    /* 48 */ uint32_t CurrentNonPagedPoolAllocations;
    /* 4c */ uint32_t PeakPagedPoolAllocations;
    /* 50 */ uint32_t PeakNonPagedPoolAllocations;
    /* 58 */ uint64_t PagedBytes;
    /* 60 */ uint64_t NonPagedBytes;
    /* 68 */ uint64_t PeakPagedBytes;
    /* 70 */ uint64_t PeakNonPagedBytes;
    /* 78 */ uint32_t BurstAllocationsFailedDeliberately;
    /* 7c */ uint32_t SessionTrims;
    /* 80 */ uint32_t OptionChanges;
    /* 84 */ uint32_t VerifyMode;
    /* 88 */ _UNICODE_STRING PreviousBucketName;
    /* 98 */ uint32_t ExecutePoolTypes;
    /* 9c */ uint32_t ExecutePageProtections;
    /* a0 */ uint32_t ExecutePageMappings;
    /* a4 */ uint32_t ExecuteWriteSections;
    /* a8 */ uint32_t SectionAlignmentFailures;
    /* ac */ uint32_t IATInExecutableSection;
};
using MM_DRIVER_VERIFIER_DATA  = struct _MM_DRIVER_VERIFIER_DATA;
using PMM_DRIVER_VERIFIER_DATA = struct _MM_DRIVER_VERIFIER_DATA*;

struct _DRIVER_OBJECT
{
    /* 00 */ int16_t Type;
    /* 02 */ int16_t Size;
    /* 08 */ _DEVICE_OBJECT* DeviceObject;
    /* 10 */ uint32_t Flags;
    /* 18 */ void* DriverStart;
    /* 20 */ uint32_t DriverSize;
    /* 28 */ void* DriverSection;
    /* 30 */ _DRIVER_EXTENSION* DriverExtension;
    /* 38 */ _UNICODE_STRING DriverName;
    /* 48 */ _UNICODE_STRING* HardwareDatabase;
    /* 50 */ _FAST_IO_DISPATCH* FastIoDispatch;
    /* 58 */ std::function<int32_t(_DRIVER_OBJECT*, _UNICODE_STRING*)> DriverInit;
    /* 60 */ std::function<void(_DEVICE_OBJECT*, _IRP*)> DriverStartIo;
    /* 68 */ std::function<void(_DRIVER_OBJECT*)> DriverUnload;
    /* 70 */ std::array<std::function<int32_t(_DEVICE_OBJECT*, _IRP*)>, 28> MajorFunction;
};
using DRIVER_OBJECT  = struct _DRIVER_OBJECT;
using PDRIVER_OBJECT = struct _DRIVER_OBJECT*;

struct _CURDIR
{
    /* 00 */ _UNICODE_STRING DosPath;
    /* 10 */ void* Handle;
};
using CURDIR  = struct _CURDIR;
using PCURDIR = struct _CURDIR*;

struct _DRIVER_EXTENSION
{
    /* 00 */ _DRIVER_OBJECT* DriverObject;
    /* 08 */ std::function<int32_t(_DRIVER_OBJECT*, _DEVICE_OBJECT*)> AddDevice;
    /* 10 */ uint32_t Count;
    /* 18 */ _UNICODE_STRING ServiceKeyName;
    /* 28 */ _IO_CLIENT_EXTENSION* ClientDriverExtension;
    /* 30 */ _FS_FILTER_CALLBACKS* FsFilterCallbacks;
    /* 38 */ void* KseCallbacks;
    /* 40 */ void* DvCallbacks;
    /* 48 */ void* VerifierContext;
};
using DRIVER_EXTENSION  = struct _DRIVER_EXTENSION;
using PDRIVER_EXTENSION = struct _DRIVER_EXTENSION*;

struct _OBJECT_NAME_INFORMATION
{
    /* 00 */ _UNICODE_STRING Name;
};
using OBJECT_NAME_INFORMATION  = struct _OBJECT_NAME_INFORMATION;
using POBJECT_NAME_INFORMATION = struct _OBJECT_NAME_INFORMATION*;

struct _RTL_DRIVE_LETTER_CURDIR
{
    /* 00 */ uint16_t Flags;
    /* 02 */ uint16_t Length;
    /* 04 */ uint32_t TimeStamp;
    /* 08 */ _STRING DosPath;
};
using RTL_DRIVE_LETTER_CURDIR  = struct _RTL_DRIVE_LETTER_CURDIR;
using PRTL_DRIVE_LETTER_CURDIR = struct _RTL_DRIVE_LETTER_CURDIR*;

struct _WORK_QUEUE_ITEM
{
    /* 00 */ _LIST_ENTRY List;
    /* 10 */ std::function<void(void*)> WorkerRoutine;
    /* 18 */ void* Parameter;
};
using WORK_QUEUE_ITEM  = struct _WORK_QUEUE_ITEM;
using PWORK_QUEUE_ITEM = struct _WORK_QUEUE_ITEM*;

struct _MCUPDATE_INFO
{
    /* 00 */ _LIST_ENTRY List;
    /* 10 */ uint32_t Status;
    /* 18 */ uint64_t Id;
    /* 20 */ std::array<uint64_t, 2> VendorScratch;
};
using MCUPDATE_INFO  = struct _MCUPDATE_INFO;
using PMCUPDATE_INFO = struct _MCUPDATE_INFO*;

struct _PEB_LDR_DATA
{
    /* 00 */ uint32_t Length;
    /* 04 */ uint8_t Initialized;
    /* 08 */ void* SsHandle;
    /* 10 */ _LIST_ENTRY InLoadOrderModuleList;
    /* 20 */ _LIST_ENTRY InMemoryOrderModuleList;
    /* 30 */ _LIST_ENTRY InInitializationOrderModuleList;
    /* 40 */ void* EntryInProgress;
    /* 48 */ uint8_t ShutdownInProgress;
    /* 50 */ void* ShutdownThreadId;
};
using PEB_LDR_DATA  = struct _PEB_LDR_DATA;
using PPEB_LDR_DATA = struct _PEB_LDR_DATA*;

struct _HEAP_LFH_SUBSEGMENT_OWNER
{
    /* 00:0 */ uint8_t IsBucket : 1;
    /* 00:1 */ uint8_t Spare0   : 7;
    /* 01 */ uint8_t BucketIndex;
    /* 02 */ uint8_t SlotCount;
    /* 02 */ uint8_t SlotIndex;
    /* 03 */ uint8_t Spare1;
    /* 08 */ uint64_t AvailableSubsegmentCount;
    /* 10 */ uint64_t Lock;
    /* 18 */ _LIST_ENTRY AvailableSubsegmentList;
    /* 28 */ _LIST_ENTRY FullSubsegmentList;
};
using HEAP_LFH_SUBSEGMENT_OWNER  = struct _HEAP_LFH_SUBSEGMENT_OWNER;
using PHEAP_LFH_SUBSEGMENT_OWNER = struct _HEAP_LFH_SUBSEGMENT_OWNER*;

struct _HEAP_VS_SUBSEGMENT
{
    /* 00 */ _LIST_ENTRY ListEntry;
    /* 10 */ uint64_t CommitBitmap;
    /* 18 */ uint64_t CommitLock;
    /* 20 */ uint16_t Size;
    /* 22:0 */ uint16_t Signature   : 15;
    /* 22:15 */ uint16_t FullCommit : 1;
};
using HEAP_VS_SUBSEGMENT  = struct _HEAP_VS_SUBSEGMENT;
using PHEAP_VS_SUBSEGMENT = struct _HEAP_VS_SUBSEGMENT*;

struct _RTL_DYNAMIC_HASH_TABLE_ENTRY
{
    /* 00 */ _LIST_ENTRY Linkage;
    /* 10 */ uint64_t Signature;
};
using RTL_DYNAMIC_HASH_TABLE_ENTRY  = struct _RTL_DYNAMIC_HASH_TABLE_ENTRY;
using PRTL_DYNAMIC_HASH_TABLE_ENTRY = struct _RTL_DYNAMIC_HASH_TABLE_ENTRY*;

struct _PS_PROPERTY_SET
{
    /* 00 */ _LIST_ENTRY ListHead;
    /* 10 */ uint64_t Lock;
};
using PS_PROPERTY_SET  = struct _PS_PROPERTY_SET;
using PPS_PROPERTY_SET = struct _PS_PROPERTY_SET*;

struct _ACTIVATION_CONTEXT_STACK
{
    /* 00 */ _RTL_ACTIVATION_CONTEXT_STACK_FRAME* ActiveFrame;
    /* 08 */ _LIST_ENTRY FrameListCache;
    /* 18 */ uint32_t Flags;
    /* 1c */ uint32_t NextCookieSequenceNumber;
    /* 20 */ uint32_t StackId;
};
using ACTIVATION_CONTEXT_STACK  = struct _ACTIVATION_CONTEXT_STACK;
using PACTIVATION_CONTEXT_STACK = struct _ACTIVATION_CONTEXT_STACK*;

struct _DISPATCHER_HEADER
{
    /* 00 */ int32_t Lock;
    /* 00 */ int32_t LockNV;
    /* 00 */ uint8_t Type;
    /* 01 */ uint8_t Signalling;
    /* 02 */ uint8_t Size;
    /* 03 */ uint8_t Reserved1;
    /* 00 */ uint8_t TimerType;
    /* 01 */ uint8_t TimerControlFlags;
    /* 01:0 */ uint8_t Absolute              : 1;
    /* 01:1 */ uint8_t Wake                  : 1;
    /* 01:2 */ uint8_t EncodedTolerableDelay : 6;
    /* 02 */ uint8_t Hand;
    /* 03 */ uint8_t TimerMiscFlags;
    /* 03:0 */ uint8_t Index    : 6;
    /* 03:6 */ uint8_t Inserted : 1;
    /* 03:7 */ uint8_t Expired  : 1;
    /* 00 */ uint8_t Timer2Type;
    /* 01 */ uint8_t Timer2Flags;
    /* 01:0 */ uint8_t Timer2Inserted      : 1;
    /* 01:1 */ uint8_t Timer2Expiring      : 1;
    /* 01:2 */ uint8_t Timer2CancelPending : 1;
    /* 01:3 */ uint8_t Timer2SetPending    : 1;
    /* 01:4 */ uint8_t Timer2Running       : 1;
    /* 01:5 */ uint8_t Timer2Disabled      : 1;
    /* 01:6 */ uint8_t Timer2ReservedFlags : 2;
    /* 02 */ uint8_t Timer2ComponentId;
    /* 03 */ uint8_t Timer2RelativeId;
    /* 00 */ uint8_t QueueType;
    /* 01 */ uint8_t QueueControlFlags;
    /* 01:0 */ uint8_t Abandoned                 : 1;
    /* 01:1 */ uint8_t DisableIncrement          : 1;
    /* 01:2 */ uint8_t QueueReservedControlFlags : 6;
    /* 02 */ uint8_t QueueSize;
    /* 03 */ uint8_t QueueReserved;
    /* 00 */ uint8_t ThreadType;
    /* 01 */ uint8_t ThreadReserved;
    /* 02 */ uint8_t ThreadControlFlags;
    /* 02:0 */ uint8_t CycleProfiling             : 1;
    /* 02:1 */ uint8_t CounterProfiling           : 1;
    /* 02:2 */ uint8_t GroupScheduling            : 1;
    /* 02:3 */ uint8_t AffinitySet                : 1;
    /* 02:4 */ uint8_t Tagged                     : 1;
    /* 02:5 */ uint8_t EnergyProfiling            : 1;
    /* 02:6 */ uint8_t SchedulerAssist            : 1;
    /* 02:7 */ uint8_t ThreadReservedControlFlags : 1;
    /* 03 */ uint8_t DebugActive;
    /* 03:0 */ uint8_t ActiveDR7    : 1;
    /* 03:1 */ uint8_t Instrumented : 1;
    /* 03:2 */ uint8_t Minimal      : 1;
    /* 03:3 */ uint8_t Reserved4    : 2;
    /* 03:5 */ uint8_t AltSyscall   : 1;
    /* 03:6 */ uint8_t Emulation    : 1;
    /* 03:7 */ uint8_t Reserved5    : 1;
    /* 00 */ uint8_t MutantType;
    /* 01 */ uint8_t MutantSize;
    /* 02 */ uint8_t DpcActive;
    /* 03 */ uint8_t MutantReserved;
    /* 04 */ int32_t SignalState;
    /* 08 */ _LIST_ENTRY WaitListHead;
};
using DISPATCHER_HEADER  = struct _DISPATCHER_HEADER;
using PDISPATCHER_HEADER = struct _DISPATCHER_HEADER*;

struct _IO_TIMER
{
    /* 00 */ int16_t Type;
    /* 02 */ int16_t TimerFlag;
    /* 08 */ _LIST_ENTRY TimerList;
    /* 18 */ std::function<void(_DEVICE_OBJECT*, void*)> TimerRoutine;
    /* 20 */ void* Context;
    /* 28 */ _DEVICE_OBJECT* DeviceObject;
};
using IO_TIMER  = struct _IO_TIMER;
using PIO_TIMER = struct _IO_TIMER*;

struct _KDEVICE_QUEUE
{
    /* 00 */ int16_t Type;
    /* 02 */ int16_t Size;
    /* 08 */ _LIST_ENTRY DeviceListHead;
    /* 18 */ uint64_t Lock;
    /* 20 */ uint8_t Busy;
    /* 20:0 */ int64_t Reserved : 8;
    /* 20:8 */ int64_t Hint     : 56;
};
using KDEVICE_QUEUE  = struct _KDEVICE_QUEUE;
using PKDEVICE_QUEUE = struct _KDEVICE_QUEUE*;

struct _KAPC
{
    /* 00 */ uint8_t Type;
    /* 01 */ uint8_t AllFlags;
    /* 01:0 */ uint8_t CallbackDataContext : 1;
    /* 01:1 */ uint8_t Unused              : 7;
    /* 02 */ uint8_t Size;
    /* 03 */ uint8_t SpareByte1;
    /* 04 */ uint32_t SpareLong0;
    /* 08 */ _KTHREAD* Thread;
    /* 10 */ _LIST_ENTRY ApcListEntry;
    /* 20 */ std::function<void(_KAPC*, std::function<void(void*, void*, void*)>*, void**, void**, void**)> KernelRoutine;
    /* 28 */ std::function<void(_KAPC*)> RundownRoutine;
    /* 30 */ std::function<void(void*, void*, void*)> NormalRoutine;
    /* 20 */ std::array<void*, 3> Reserved;
    /* 38 */ void* NormalContext;
    /* 40 */ void* SystemArgument1;
    /* 48 */ void* SystemArgument2;
    /* 50 */ char ApcStateIndex;
    /* 51 */ char ApcMode;
    /* 52 */ uint8_t Inserted;
};
using KAPC  = struct _KAPC;
using PKAPC = struct _KAPC*;

struct _KAPC_STATE
{
    /* 00 */ std::array<_LIST_ENTRY, 2> ApcListHead;
    /* 20 */ _KPROCESS* Process;
    /* 28 */ uint8_t InProgressFlags;
    /* 28:0 */ uint8_t KernelApcInProgress  : 1;
    /* 28:1 */ uint8_t SpecialApcInProgress : 1;
    /* 29 */ uint8_t KernelApcPending;
    /* 2a */ uint8_t UserApcPendingAll;
    /* 2a:0 */ uint8_t SpecialUserApcPending : 1;
    /* 2a:1 */ uint8_t UserApcPending        : 1;
};
using KAPC_STATE  = struct _KAPC_STATE;
using PKAPC_STATE = struct _KAPC_STATE*;

struct _KDEVICE_QUEUE_ENTRY
{
    /* 00 */ _LIST_ENTRY DeviceListEntry;
    /* 10 */ uint32_t SortKey;
    /* 14 */ uint8_t Inserted;
};
using KDEVICE_QUEUE_ENTRY  = struct _KDEVICE_QUEUE_ENTRY;
using PKDEVICE_QUEUE_ENTRY = struct _KDEVICE_QUEUE_ENTRY*;

struct _KWAIT_BLOCK
{
    /* 00 */ _LIST_ENTRY WaitListEntry;
    /* 10 */ uint8_t WaitType;
    /* 11 */ uint8_t BlockState;
    /* 12 */ uint16_t WaitKey;
    /* 14 */ int32_t SpareLong;
    /* 18 */ _KTHREAD* Thread;
    /* 18 */ _KQUEUE* NotificationQueue;
    /* 18 */ _KDPC* Dpc;
    /* 20 */ void* Object;
    /* 28 */ void* SparePtr;
};
using KWAIT_BLOCK  = struct _KWAIT_BLOCK;
using PKWAIT_BLOCK = struct _KWAIT_BLOCK*;

struct _RTL_CRITICAL_SECTION_DEBUG
{
    /* 00 */ uint16_t Type;
    /* 02 */ uint16_t CreatorBackTraceIndex;
    /* 08 */ _RTL_CRITICAL_SECTION* CriticalSection;
    /* 10 */ _LIST_ENTRY ProcessLocksList;
    /* 20 */ uint32_t EntryCount;
    /* 24 */ uint32_t ContentionCount;
    /* 28 */ uint32_t Flags;
    /* 2c */ uint16_t CreatorBackTraceIndexHigh;
    /* 2e */ uint16_t Identifier;
};
using RTL_CRITICAL_SECTION_DEBUG  = struct _RTL_CRITICAL_SECTION_DEBUG;
using PRTL_CRITICAL_SECTION_DEBUG = struct _RTL_CRITICAL_SECTION_DEBUG*;

struct _LFH_BLOCK_ZONE
{
    /* 00 */ _LIST_ENTRY ListEntry;
    /* 10 */ int32_t NextIndex;
};
using LFH_BLOCK_ZONE  = struct _LFH_BLOCK_ZONE;
using PLFH_BLOCK_ZONE = struct _LFH_BLOCK_ZONE*;

struct _HEAP_UCR_DESCRIPTOR
{
    /* 00 */ _LIST_ENTRY ListEntry;
    /* 10 */ _LIST_ENTRY SegmentEntry;
    /* 20 */ void* Address;
    /* 28 */ uint64_t Size;
};
using HEAP_UCR_DESCRIPTOR  = struct _HEAP_UCR_DESCRIPTOR;
using PHEAP_UCR_DESCRIPTOR = struct _HEAP_UCR_DESCRIPTOR*;

struct _IO_MINI_COMPLETION_PACKET_USER
{
    /* 00 */ _LIST_ENTRY ListEntry;
    /* 10 */ uint32_t PacketType;
    /* 18 */ void* KeyContext;
    /* 20 */ void* ApcContext;
    /* 28 */ int32_t IoStatus;
    /* 30 */ uint64_t IoStatusInformation;
    /* 38 */ std::function<void(_IO_MINI_COMPLETION_PACKET_USER*, void*)> MiniPacketCallback;
    /* 40 */ void* Context;
    /* 48 */ uint8_t Allocated;
};
using IO_MINI_COMPLETION_PACKET_USER  = struct _IO_MINI_COMPLETION_PACKET_USER;
using PIO_MINI_COMPLETION_PACKET_USER = struct _IO_MINI_COMPLETION_PACKET_USER*;

struct _KTIMER_TABLE_ENTRY
{
    /* 00 */ uint64_t Lock;
    /* 08 */ _LIST_ENTRY Entry;
    /* 18 */ _ULARGE_INTEGER Time;
};
using KTIMER_TABLE_ENTRY  = struct _KTIMER_TABLE_ENTRY;
using PKTIMER_TABLE_ENTRY = struct _KTIMER_TABLE_ENTRY*;

struct _PPM_VETO_ACCOUNTING
{
    /* 00 */ int32_t VetoPresent;
    /* 08 */ _LIST_ENTRY VetoListHead;
    /* 18 */ uint8_t CsAccountingBlocks;
    /* 19 */ uint8_t BlocksDrips;
    /* 1c */ uint32_t PreallocatedVetoCount;
    /* 20 */ _PPM_VETO_ENTRY* PreallocatedVetoList;
};
using PPM_VETO_ACCOUNTING  = struct _PPM_VETO_ACCOUNTING;
using PPPM_VETO_ACCOUNTING = struct _PPM_VETO_ACCOUNTING*;

struct _PPM_VETO_ENTRY
{
    /* 00 */ _LIST_ENTRY Link;
    /* 10 */ uint32_t VetoReason;
    /* 14 */ uint32_t ReferenceCount;
    /* 18 */ uint64_t HitCount;
    /* 20 */ uint64_t LastActivationTime;
    /* 28 */ uint64_t TotalActiveTime;
    /* 30 */ uint64_t CsActivationTime;
    /* 38 */ uint64_t CsActiveTime;
};
using PPM_VETO_ENTRY  = struct _PPM_VETO_ENTRY;
using PPPM_VETO_ENTRY = struct _PPM_VETO_ENTRY*;

struct _KDPC
{
    /* 00 */ uint32_t TargetInfoAsUlong;
    /* 00 */ uint8_t Type;
    /* 01 */ uint8_t Importance;
    /* 02 */ uint16_t Number;
    /* 08 */ _SINGLE_LIST_ENTRY DpcListEntry;
    /* 10 */ uint64_t ProcessorHistory;
    /* 18 */ std::function<void(_KDPC*, void*, void*, void*)> DeferredRoutine;
    /* 20 */ void* DeferredContext;
    /* 28 */ void* SystemArgument1;
    /* 30 */ void* SystemArgument2;
    /* 38 */ void* DpcData;
};
using KDPC  = struct _KDPC;
using PKDPC = struct _KDPC*;

struct _RTL_HASH_ENTRY
{
    /* 00 */ _SINGLE_LIST_ENTRY BucketLink;
    /* 08 */ uint64_t Key;
};
using RTL_HASH_ENTRY  = struct _RTL_HASH_ENTRY;
using PRTL_HASH_ENTRY = struct _RTL_HASH_ENTRY*;

struct _KDPC_LIST
{
    /* 00 */ _SINGLE_LIST_ENTRY ListHead;
    /* 08 */ _SINGLE_LIST_ENTRY* LastEntry;
};
using KDPC_LIST  = struct _KDPC_LIST;
using PKDPC_LIST = struct _KDPC_LIST*;

struct _PEB
{
    /* 00 */ uint8_t InheritedAddressSpace;
    /* 01 */ uint8_t ReadImageFileExecOptions;
    /* 02 */ uint8_t BeingDebugged;
    /* 03 */ uint8_t BitField;
    /* 03:0 */ uint8_t ImageUsesLargePages          : 1;
    /* 03:1 */ uint8_t IsProtectedProcess           : 1;
    /* 03:2 */ uint8_t IsImageDynamicallyRelocated  : 1;
    /* 03:3 */ uint8_t SkipPatchingUser32Forwarders : 1;
    /* 03:4 */ uint8_t IsPackagedProcess            : 1;
    /* 03:5 */ uint8_t IsAppContainer               : 1;
    /* 03:6 */ uint8_t IsProtectedProcessLight      : 1;
    /* 03:7 */ uint8_t IsLongPathAwareProcess       : 1;
    /* 04 */ std::array<uint8_t, 4> Padding0;
    /* 08 */ void* Mutant;
    /* 10 */ void* ImageBaseAddress;
    /* 18 */ _PEB_LDR_DATA* Ldr;
    /* 20 */ _RTL_USER_PROCESS_PARAMETERS* ProcessParameters;
    /* 28 */ void* SubSystemData;
    /* 30 */ void* ProcessHeap;
    /* 38 */ _RTL_CRITICAL_SECTION* FastPebLock;
    /* 40 */ _SLIST_HEADER* AtlThunkSListPtr;
    /* 48 */ void* IFEOKey;
    /* 50 */ uint32_t CrossProcessFlags;
    /* 50:0 */ uint32_t ProcessInJob               : 1;
    /* 50:1 */ uint32_t ProcessInitializing        : 1;
    /* 50:2 */ uint32_t ProcessUsingVEH            : 1;
    /* 50:3 */ uint32_t ProcessUsingVCH            : 1;
    /* 50:4 */ uint32_t ProcessUsingFTH            : 1;
    /* 50:5 */ uint32_t ProcessPreviouslyThrottled : 1;
    /* 50:6 */ uint32_t ProcessCurrentlyThrottled  : 1;
    /* 50:7 */ uint32_t ProcessImagesHotPatched    : 1;
    /* 50:8 */ uint32_t ReservedBits0              : 24;
    /* 54 */ std::array<uint8_t, 4> Padding1;
    /* 58 */ void* KernelCallbackTable;
    /* 58 */ void* UserSharedInfoPtr;
    /* 60 */ uint32_t SystemReserved;
    /* 64 */ uint32_t AtlThunkSListPtr32;
    /* 68 */ void* ApiSetMap;
    /* 70 */ uint32_t TlsExpansionCounter;
    /* 74 */ std::array<uint8_t, 4> Padding2;
    /* 78 */ _RTL_BITMAP* TlsBitmap;
    /* 80 */ std::array<uint32_t, 2> TlsBitmapBits;
    /* 88 */ void* ReadOnlySharedMemoryBase;
    /* 90 */ void* SharedData;
    /* 98 */ void** ReadOnlyStaticServerData;
    /* a0 */ void* AnsiCodePageData;
    /* a8 */ void* OemCodePageData;
    /* b0 */ void* UnicodeCaseTableData;
    /* b8 */ uint32_t NumberOfProcessors;
    /* bc */ uint32_t NtGlobalFlag;
    /* c0 */ _LARGE_INTEGER CriticalSectionTimeout;
    /* c8 */ uint64_t HeapSegmentReserve;
    /* d0 */ uint64_t HeapSegmentCommit;
    /* d8 */ uint64_t HeapDeCommitTotalFreeThreshold;
    /* e0 */ uint64_t HeapDeCommitFreeBlockThreshold;
    /* e8 */ uint32_t NumberOfHeaps;
    /* ec */ uint32_t MaximumNumberOfHeaps;
    /* f0 */ void** ProcessHeaps;
    /* f8 */ void* GdiSharedHandleTable;
    /* 100 */ void* ProcessStarterHelper;
    /* 108 */ uint32_t GdiDCAttributeList;
    /* 10c */ std::array<uint8_t, 4> Padding3;
    /* 110 */ _RTL_CRITICAL_SECTION* LoaderLock;
    /* 118 */ uint32_t OSMajorVersion;
    /* 11c */ uint32_t OSMinorVersion;
    /* 120 */ uint16_t OSBuildNumber;
    /* 122 */ uint16_t OSCSDVersion;
    /* 124 */ uint32_t OSPlatformId;
    /* 128 */ uint32_t ImageSubsystem;
    /* 12c */ uint32_t ImageSubsystemMajorVersion;
    /* 130 */ uint32_t ImageSubsystemMinorVersion;
    /* 134 */ std::array<uint8_t, 4> Padding4;
    /* 138 */ uint64_t ActiveProcessAffinityMask;
    /* 140 */ std::array<uint32_t, 60> GdiHandleBuffer;
    /* 230 */ std::function<void()> PostProcessInitRoutine;
    /* 238 */ _RTL_BITMAP* TlsExpansionBitmap;
    /* 240 */ std::array<uint32_t, 32> TlsExpansionBitmapBits;
    /* 2c0 */ uint32_t SessionId;
    /* 2c4 */ std::array<uint8_t, 4> Padding5;
    /* 2c8 */ _ULARGE_INTEGER AppCompatFlags;
    /* 2d0 */ _ULARGE_INTEGER AppCompatFlagsUser;
    /* 2d8 */ void* pShimData;
    /* 2e0 */ void* AppCompatInfo;
    /* 2e8 */ _UNICODE_STRING CSDVersion;
    /* 2f8 */ _ACTIVATION_CONTEXT_DATA* ActivationContextData;
    /* 300 */ _ASSEMBLY_STORAGE_MAP* ProcessAssemblyStorageMap;
    /* 308 */ _ACTIVATION_CONTEXT_DATA* SystemDefaultActivationContextData;
    /* 310 */ _ASSEMBLY_STORAGE_MAP* SystemAssemblyStorageMap;
    /* 318 */ uint64_t MinimumStackCommit;
    /* 320 */ std::array<void*, 2> SparePointers;
    /* 330 */ void* PatchLoaderData;
    /* 338 */ _CHPEV2_PROCESS_INFO* ChpeV2ProcessInfo;
    /* 340 */ uint32_t AppModelFeatureState;
    /* 344 */ std::array<uint32_t, 2> SpareUlongs;
    /* 34c */ uint16_t ActiveCodePage;
    /* 34e */ uint16_t OemCodePage;
    /* 350 */ uint16_t UseCaseMapping;
    /* 352 */ uint16_t UnusedNlsField;
    /* 358 */ void* WerRegistrationData;
    /* 360 */ void* WerShipAssertPtr;
    /* 368 */ void* EcCodeBitMap;
    /* 370 */ void* pImageHeaderHash;
    /* 378 */ uint32_t TracingFlags;
    /* 378:0 */ uint32_t HeapTracingEnabled      : 1;
    /* 378:1 */ uint32_t CritSecTracingEnabled   : 1;
    /* 378:2 */ uint32_t LibLoaderTracingEnabled : 1;
    /* 378:3 */ uint32_t SpareTracingBits        : 29;
    /* 37c */ std::array<uint8_t, 4> Padding6;
    /* 380 */ uint64_t CsrServerReadOnlySharedMemoryBase;
    /* 388 */ uint64_t TppWorkerpListLock;
    /* 390 */ _LIST_ENTRY TppWorkerpList;
    /* 3a0 */ std::array<void*, 128> WaitOnAddressHashTable;
    /* 7a0 */ void* TelemetryCoverageHeader;
    /* 7a8 */ uint32_t CloudFileFlags;
    /* 7ac */ uint32_t CloudFileDiagFlags;
    /* 7b0 */ char PlaceholderCompatibilityMode;
    /* 7b1 */ std::array<char, 7> PlaceholderCompatibilityModeReserved;
    /* 7b8 */ _LEAP_SECOND_DATA* LeapSecondData;
    /* 7c0 */ uint32_t LeapSecondFlags;
    /* 7c0:0 */ uint32_t SixtySecondEnabled : 1;
    /* 7c0:1 */ uint32_t Reserved           : 31;
    /* 7c4 */ uint32_t NtGlobalFlag2;
    /* 7c8 */ uint64_t ExtendedFeatureDisableMask;
};
using PEB  = struct _PEB;
using PPEB = struct _PEB*;

struct _CC_FILE_SIZES
{
    /* 00 */ _LARGE_INTEGER AllocationSize;
    /* 08 */ _LARGE_INTEGER FileSize;
    /* 10 */ _LARGE_INTEGER ValidDataLength;
};
using CC_FILE_SIZES  = struct _CC_FILE_SIZES;
using PCC_FILE_SIZES = struct _CC_FILE_SIZES*;

union _WHEA_TIMESTAMP
{
    /* 00:0 */ uint64_t Seconds   : 8;
    /* 00:8 */ uint64_t Minutes   : 8;
    /* 00:16 */ uint64_t Hours    : 8;
    /* 00:24 */ uint64_t Precise  : 1;
    /* 00:25 */ uint64_t Reserved : 7;
    /* 00:32 */ uint64_t Day      : 8;
    /* 00:40 */ uint64_t Month    : 8;
    /* 00:48 */ uint64_t Year     : 8;
    /* 00:56 */ uint64_t Century  : 8;
    /* 00 */ _LARGE_INTEGER AsLARGE_INTEGER;
};
using WHEA_TIMESTAMP  = union _WHEA_TIMESTAMP;
using PWHEA_TIMESTAMP = union _WHEA_TIMESTAMP*;

struct _NAMED_PIPE_CREATE_PARAMETERS
{
    /* 00 */ uint32_t NamedPipeType;
    /* 04 */ uint32_t ReadMode;
    /* 08 */ uint32_t CompletionMode;
    /* 0c */ uint32_t MaximumInstances;
    /* 10 */ uint32_t InboundQuota;
    /* 14 */ uint32_t OutboundQuota;
    /* 18 */ _LARGE_INTEGER DefaultTimeout;
    /* 20 */ uint8_t TimeoutSpecified;
};
using NAMED_PIPE_CREATE_PARAMETERS  = struct _NAMED_PIPE_CREATE_PARAMETERS;
using PNAMED_PIPE_CREATE_PARAMETERS = struct _NAMED_PIPE_CREATE_PARAMETERS*;

struct _MAILSLOT_CREATE_PARAMETERS
{
    /* 00 */ uint32_t MailslotQuota;
    /* 04 */ uint32_t MaximumMessageSize;
    /* 08 */ _LARGE_INTEGER ReadTimeout;
    /* 10 */ uint8_t TimeoutSpecified;
};
using MAILSLOT_CREATE_PARAMETERS  = struct _MAILSLOT_CREATE_PARAMETERS;
using PMAILSLOT_CREATE_PARAMETERS = struct _MAILSLOT_CREATE_PARAMETERS*;

struct _LEAP_SECOND_DATA
{
    /* 00 */ uint8_t Enabled;
    /* 04 */ uint32_t Count;
    /* 08 */ std::array<_LARGE_INTEGER, 1> Data;
};
using LEAP_SECOND_DATA  = struct _LEAP_SECOND_DATA;
using PLEAP_SECOND_DATA = struct _LEAP_SECOND_DATA*;

struct _KTIMER_EXPIRATION_TRACE
{
    /* 00 */ uint64_t InterruptTime;
    /* 08 */ _LARGE_INTEGER PerformanceCounter;
};
using KTIMER_EXPIRATION_TRACE  = struct _KTIMER_EXPIRATION_TRACE;
using PKTIMER_EXPIRATION_TRACE = struct _KTIMER_EXPIRATION_TRACE*;

struct _PPM_FFH_THROTTLE_STATE_INFO
{
    /* 00 */ uint8_t EnableLogging;
    /* 04 */ uint32_t MismatchCount;
    /* 08 */ uint8_t Initialized;
    /* 10 */ uint64_t LastValue;
    /* 18 */ _LARGE_INTEGER LastLogTickCount;
};
using PPM_FFH_THROTTLE_STATE_INFO  = struct _PPM_FFH_THROTTLE_STATE_INFO;
using PPPM_FFH_THROTTLE_STATE_INFO = struct _PPM_FFH_THROTTLE_STATE_INFO*;

struct _SEP_RM_LSA_CONNECTION_STATE
{
    /* 00 */ void* LsaProcessHandle;
    /* 08 */ void* LsaCommandPortHandle;
    /* 10 */ void* SepRmThreadHandle;
    /* 18 */ void* RmCommandPortHandle;
    /* 20 */ void* RmCommandServerPortHandle;
    /* 28 */ void* LsaCommandPortSectionHandle;
    /* 30 */ _LARGE_INTEGER LsaCommandPortSectionSize;
    /* 38 */ void* LsaViewPortMemory;
    /* 40 */ void* RmViewPortMemory;
    /* 48 */ int32_t LsaCommandPortMemoryDelta;
    /* 4c */ uint8_t LsaCommandPortActive;
};
using SEP_RM_LSA_CONNECTION_STATE  = struct _SEP_RM_LSA_CONNECTION_STATE;
using PSEP_RM_LSA_CONNECTION_STATE = struct _SEP_RM_LSA_CONNECTION_STATE*;

struct _FILE_BASIC_INFORMATION
{
    /* 00 */ _LARGE_INTEGER CreationTime;
    /* 08 */ _LARGE_INTEGER LastAccessTime;
    /* 10 */ _LARGE_INTEGER LastWriteTime;
    /* 18 */ _LARGE_INTEGER ChangeTime;
    /* 20 */ uint32_t FileAttributes;
};
using FILE_BASIC_INFORMATION  = struct _FILE_BASIC_INFORMATION;
using PFILE_BASIC_INFORMATION = struct _FILE_BASIC_INFORMATION*;

struct _FILE_NETWORK_OPEN_INFORMATION
{
    /* 00 */ _LARGE_INTEGER CreationTime;
    /* 08 */ _LARGE_INTEGER LastAccessTime;
    /* 10 */ _LARGE_INTEGER LastWriteTime;
    /* 18 */ _LARGE_INTEGER ChangeTime;
    /* 20 */ _LARGE_INTEGER AllocationSize;
    /* 28 */ _LARGE_INTEGER EndOfFile;
    /* 30 */ uint32_t FileAttributes;
};
using FILE_NETWORK_OPEN_INFORMATION  = struct _FILE_NETWORK_OPEN_INFORMATION;
using PFILE_NETWORK_OPEN_INFORMATION = struct _FILE_NETWORK_OPEN_INFORMATION*;

struct _FILE_STANDARD_INFORMATION
{
    /* 00 */ _LARGE_INTEGER AllocationSize;
    /* 08 */ _LARGE_INTEGER EndOfFile;
    /* 10 */ uint32_t NumberOfLinks;
    /* 14 */ uint8_t DeletePending;
    /* 15 */ uint8_t Directory;
};
using FILE_STANDARD_INFORMATION  = struct _FILE_STANDARD_INFORMATION;
using PFILE_STANDARD_INFORMATION = struct _FILE_STANDARD_INFORMATION*;

struct _CM_PARTIAL_RESOURCE_DESCRIPTOR
{
    /* 00 */ uint8_t Type;
    /* 01 */ uint8_t ShareDisposition;
    /* 02 */ uint16_t Flags;
    /* 04 */ union
    {
        /* 00 */ struct
        {
            /* 00 */ _LARGE_INTEGER Start;
            /* 08 */ uint32_t Length;
        } Generic;

        /* 00 */ struct
        {
            /* 00 */ _LARGE_INTEGER Start;
            /* 08 */ uint32_t Length;
        } Port;

        /* 00 */ struct
        {
            /* 00 */ uint16_t Level;
            /* 02 */ uint16_t Group;
            /* 04 */ uint32_t Vector;
            /* 08 */ uint64_t Affinity;
        } Interrupt;

        /* 00 */ struct
        {
            /* 00 */ struct
            {
                /* 00 */ uint16_t Group;
                /* 02 */ uint16_t MessageCount;
                /* 04 */ uint32_t Vector;
                /* 08 */ uint64_t Affinity;
            } Raw;

            /* 00 */ struct
            {
                /* 00 */ uint16_t Level;
                /* 02 */ uint16_t Group;
                /* 04 */ uint32_t Vector;
                /* 08 */ uint64_t Affinity;
            } Translated;
        } MessageInterrupt;

        /* 00 */ struct
        {
            /* 00 */ _LARGE_INTEGER Start;
            /* 08 */ uint32_t Length;
        } Memory;

        /* 00 */ struct
        {
            /* 00 */ uint32_t Channel;
            /* 04 */ uint32_t Port;
            /* 08 */ uint32_t Reserved1;
        } Dma;

        /* 00 */ struct
        {
            /* 00 */ uint32_t Channel;
            /* 04 */ uint32_t RequestLine;
            /* 08 */ uint8_t TransferWidth;
            /* 09 */ uint8_t Reserved1;
            /* 0a */ uint8_t Reserved2;
            /* 0b */ uint8_t Reserved3;
        } DmaV3;

        /* 00 */ struct
        {
            /* 00 */ std::array<uint32_t, 3> Data;
        } DevicePrivate;

        /* 00 */ struct
        {
            /* 00 */ uint32_t Start;
            /* 04 */ uint32_t Length;
            /* 08 */ uint32_t Reserved;
        } BusNumber;

        /* 00 */ struct
        {
            /* 00 */ uint32_t DataSize;
            /* 04 */ uint32_t Reserved1;
            /* 08 */ uint32_t Reserved2;
        } DeviceSpecificData;

        /* 00 */ struct
        {
            /* 00 */ _LARGE_INTEGER Start;
            /* 08 */ uint32_t Length40;
        } Memory40;

        /* 00 */ struct
        {
            /* 00 */ _LARGE_INTEGER Start;
            /* 08 */ uint32_t Length48;
        } Memory48;

        /* 00 */ struct
        {
            /* 00 */ _LARGE_INTEGER Start;
            /* 08 */ uint32_t Length64;
        } Memory64;

        /* 00 */ struct
        {
            /* 00 */ uint8_t Class;
            /* 01 */ uint8_t Type;
            /* 02 */ uint8_t Reserved1;
            /* 03 */ uint8_t Reserved2;
            /* 04 */ uint32_t IdLowPart;
            /* 08 */ uint32_t IdHighPart;
        } Connection;
    } u;
};
using CM_PARTIAL_RESOURCE_DESCRIPTOR  = struct _CM_PARTIAL_RESOURCE_DESCRIPTOR;
using PCM_PARTIAL_RESOURCE_DESCRIPTOR = struct _CM_PARTIAL_RESOURCE_DESCRIPTOR*;

struct _JOB_RATE_CONTROL_HEADER
{
    /* 00 */ void* RateControlQuotaReference;
    /* 08 */ _RTL_BITMAP OverQuotaHistory;
    /* 18 */ uint8_t* BitMapBuffer;
    /* 20 */ uint64_t BitMapBufferSize;
};
using JOB_RATE_CONTROL_HEADER  = struct _JOB_RATE_CONTROL_HEADER;
using PJOB_RATE_CONTROL_HEADER = struct _JOB_RATE_CONTROL_HEADER*;

struct _LUID_AND_ATTRIBUTES
{
    /* 00 */ _LUID Luid;
    /* 08 */ uint32_t Attributes;
};
using LUID_AND_ATTRIBUTES  = struct _LUID_AND_ATTRIBUTES;
using PLUID_AND_ATTRIBUTES = struct _LUID_AND_ATTRIBUTES*;

struct _HEAP_VAMGR_ALLOCATOR
{
    /* 00 */ uint64_t TreeLock;
    /* 08 */ _RTL_RB_TREE FreeRanges;
    /* 18 */ _HEAP_VAMGR_VASPACE* VaSpace;
    /* 20 */ void* ContextHandle;
    /* 28 */ uint16_t ChunksPerRegion;
    /* 2a */ uint16_t RefCount;
    /* 2c */ uint8_t AllocatorIndex;
    /* 2d */ uint8_t NumaNode;
    /* 2e:0 */ uint8_t LockType      : 1;
    /* 2e:1 */ uint8_t MemoryType    : 3;
    /* 2e:4 */ uint8_t ConstrainedVA : 1;
    /* 2e:5 */ uint8_t AllowFreeHead : 1;
    /* 2e:6 */ uint8_t Spare0        : 2;
    /* 2f */ uint8_t Spare1;
};
using HEAP_VAMGR_ALLOCATOR  = struct _HEAP_VAMGR_ALLOCATOR;
using PHEAP_VAMGR_ALLOCATOR = struct _HEAP_VAMGR_ALLOCATOR*;

struct _HEAP_VAMGR_RANGE
{
    /* 00 */ _RTL_BALANCED_NODE RbNode;
    /* 00 */ _SINGLE_LIST_ENTRY Next;
    /* 00:0 */ uint8_t Allocated  : 1;
    /* 00:1 */ uint8_t Internal   : 1;
    /* 00:2 */ uint8_t Standalone : 1;
    /* 00:3 */ uint8_t Spare0     : 5;
    /* 01 */ uint8_t AllocatorIndex;
    /* 08 */ std::array<uint64_t, 2> OwnerCtx;
    /* 18 */ uint64_t SizeInChunks;
    /* 18 */ uint16_t ChunkCount;
    /* 1a */ uint16_t PrevChunkCount;
    /* 18 */ uint64_t Signature;
};
using HEAP_VAMGR_RANGE  = struct _HEAP_VAMGR_RANGE;
using PHEAP_VAMGR_RANGE = struct _HEAP_VAMGR_RANGE*;

struct _HEAP_LARGE_ALLOC_DATA
{
    /* 00 */ _RTL_BALANCED_NODE TreeNode;
    /* 18 */ uint64_t VirtualAddress;
    /* 18:0 */ uint64_t UnusedBytes        : 16;
    /* 20:0 */ uint64_t ExtraPresent       : 1;
    /* 20:1 */ uint64_t GuardPageCount     : 1;
    /* 20:2 */ uint64_t GuardPageAlignment : 6;
    /* 20:8 */ uint64_t Spare              : 4;
    /* 20:12 */ uint64_t AllocatedPages    : 52;
};
using HEAP_LARGE_ALLOC_DATA  = struct _HEAP_LARGE_ALLOC_DATA;
using PHEAP_LARGE_ALLOC_DATA = struct _HEAP_LARGE_ALLOC_DATA*;

struct _KSCB
{
    /* 00 */ uint64_t GenerationCycles;
    /* 08 */ uint64_t MinQuotaCycleTarget;
    /* 10 */ uint64_t MaxQuotaCycleTarget;
    /* 18 */ uint64_t RankCycleTarget;
    /* 20 */ uint64_t LongTermCycles;
    /* 28 */ uint64_t LastReportedCycles;
    /* 30 */ uint64_t OverQuotaHistory;
    /* 38 */ uint64_t ReadyTime;
    /* 40 */ uint64_t InsertTime;
    /* 48 */ _LIST_ENTRY PerProcessorList;
    /* 58 */ _RTL_BALANCED_NODE QueueNode;
    /* 70:0 */ uint8_t Inserted              : 1;
    /* 70:1 */ uint8_t MaxOverQuota          : 1;
    /* 70:2 */ uint8_t MinOverQuota          : 1;
    /* 70:3 */ uint8_t RankBias              : 1;
    /* 70:4 */ uint8_t UnconstrainedMaxQuota : 1;
    /* 70:5 */ uint8_t UnconstrainedMinQuota : 1;
    /* 70:6 */ uint8_t ShareRankOwner        : 1;
    /* 70:7 */ uint8_t Spare1                : 1;
    /* 71 */ uint8_t Depth;
    /* 72 */ uint16_t ReadySummary;
    /* 74 */ uint32_t Rank;
    /* 78 */ uint32_t* ShareRank;
    /* 80 */ uint32_t OwnerShareRank;
    /* 88 */ std::array<_LIST_ENTRY, 16> ReadyListHead;
    /* 188 */ _RTL_RB_TREE ChildScbQueue;
    /* 198 */ _KSCB* Parent;
    /* 1a0 */ _KSCB* Root;
};
using KSCB  = struct _KSCB;
using PKSCB = struct _KSCB*;

struct _KSTATIC_AFFINITY_BLOCK
{
    /* 00 */ _KAFFINITY_EX KeFlushTbAffinity;
    /* 00 */ _KAFFINITY_EX KeFlushWbAffinity;
    /* 00 */ _KAFFINITY_EX KeSyncContextAffinity;
    /* 108 */ _KAFFINITY_EX KeFlushTbDeepIdleAffinity;
    /* 210 */ _KAFFINITY_EX KeIpiSendAffinity;
    /* 318 */ _KAFFINITY_EX KeIpiSendIpiSet;
};
using KSTATIC_AFFINITY_BLOCK  = struct _KSTATIC_AFFINITY_BLOCK;
using PKSTATIC_AFFINITY_BLOCK = struct _KSTATIC_AFFINITY_BLOCK*;

struct _KSOFTWARE_INTERRUPT_BATCH
{
    /* 00 */ uint8_t Level;
    /* 01 */ uint8_t TargetType;
    /* 02 */ uint8_t ReservedBatchInProgress;
    /* 03 */ uint8_t Spare;
    /* 04 */ uint32_t SingleTargetIndex;
    /* 08 */ _KAFFINITY_EX MultipleTargetAffinity;
};
using KSOFTWARE_INTERRUPT_BATCH  = struct _KSOFTWARE_INTERRUPT_BATCH;
using PKSOFTWARE_INTERRUPT_BATCH = struct _KSOFTWARE_INTERRUPT_BATCH*;

struct _KLOCK_QUEUE_HANDLE
{
    /* 00 */ _KSPIN_LOCK_QUEUE LockQueue;
    /* 10 */ uint8_t OldIrql;
};
using KLOCK_QUEUE_HANDLE  = struct _KLOCK_QUEUE_HANDLE;
using PKLOCK_QUEUE_HANDLE = struct _KLOCK_QUEUE_HANDLE*;

struct _HEAP_LOCAL_DATA
{
    /* 00 */ _SLIST_HEADER DeletedSubSegments;
    /* 10 */ _LFH_BLOCK_ZONE* CrtZone;
    /* 18 */ _LFH_HEAP* LowFragHeap;
    /* 20 */ uint32_t Sequence;
    /* 24 */ uint32_t DeleteRateThreshold;
};
using HEAP_LOCAL_DATA  = struct _HEAP_LOCAL_DATA;
using PHEAP_LOCAL_DATA = struct _HEAP_LOCAL_DATA*;

struct _HEAP_VS_DELAY_FREE_CONTEXT
{
    /* 00 */ _SLIST_HEADER ListHead;
};
using HEAP_VS_DELAY_FREE_CONTEXT  = struct _HEAP_VS_DELAY_FREE_CONTEXT;
using PHEAP_VS_DELAY_FREE_CONTEXT = struct _HEAP_VS_DELAY_FREE_CONTEXT*;

struct _USER_MEMORY_CACHE_ENTRY
{
    /* 00 */ _SLIST_HEADER UserBlocks;
    /* 10 */ uint32_t AvailableBlocks;
    /* 14 */ uint32_t MinimumDepth;
    /* 18 */ uint32_t CacheShiftThreshold;
    /* 1c */ uint16_t Allocations;
    /* 1e */ uint16_t Frees;
    /* 20 */ uint16_t CacheHits;
};
using USER_MEMORY_CACHE_ENTRY  = struct _USER_MEMORY_CACHE_ENTRY;
using PUSER_MEMORY_CACHE_ENTRY = struct _USER_MEMORY_CACHE_ENTRY*;

struct _HANDLE_TABLE_FREE_LIST
{
    /* 00 */ _EX_PUSH_LOCK FreeListLock;
    /* 08 */ _HANDLE_TABLE_ENTRY* FirstFreeHandleEntry;
    /* 10 */ _HANDLE_TABLE_ENTRY* LastFreeHandleEntry;
    /* 18 */ int32_t HandleCount;
    /* 1c */ uint32_t HighWaterMark;
};
using HANDLE_TABLE_FREE_LIST  = struct _HANDLE_TABLE_FREE_LIST;
using PHANDLE_TABLE_FREE_LIST = struct _HANDLE_TABLE_FREE_LIST*;

struct _PS_DYNAMIC_ENFORCED_ADDRESS_RANGES
{
    /* 00 */ _RTL_AVL_TREE Tree;
    /* 08 */ _EX_PUSH_LOCK Lock;
};
using PS_DYNAMIC_ENFORCED_ADDRESS_RANGES  = struct _PS_DYNAMIC_ENFORCED_ADDRESS_RANGES;
using PPS_DYNAMIC_ENFORCED_ADDRESS_RANGES = struct _PS_DYNAMIC_ENFORCED_ADDRESS_RANGES*;

struct _ALPC_PROCESS_CONTEXT
{
    /* 00 */ _EX_PUSH_LOCK Lock;
    /* 08 */ _LIST_ENTRY ViewListHead;
    /* 18 */ uint64_t PagedPoolQuotaCache;
};
using ALPC_PROCESS_CONTEXT  = struct _ALPC_PROCESS_CONTEXT;
using PALPC_PROCESS_CONTEXT = struct _ALPC_PROCESS_CONTEXT*;

struct _DBGK_SILOSTATE
{
    /* 00 */ _EX_PUSH_LOCK ErrorPortLock;
    /* 08 */ _DBGKP_ERROR_PORT* ErrorPort;
    /* 10 */ _EPROCESS* ErrorProcess;
    /* 18 */ _KEVENT* ErrorPortRegisteredEvent;
};
using DBGK_SILOSTATE  = struct _DBGK_SILOSTATE;
using PDBGK_SILOSTATE = struct _DBGK_SILOSTATE*;

struct _WNF_LOCK
{
    /* 00 */ _EX_PUSH_LOCK PushLock;
};
using WNF_LOCK  = struct _WNF_LOCK;
using PWNF_LOCK = struct _WNF_LOCK*;

struct _OBJECT_NAMESPACE_LOOKUPTABLE
{
    /* 00 */ std::array<_LIST_ENTRY, 37> HashBuckets;
    /* 250 */ _EX_PUSH_LOCK Lock;
    /* 258 */ uint32_t NumberOfPrivateSpaces;
};
using OBJECT_NAMESPACE_LOOKUPTABLE  = struct _OBJECT_NAMESPACE_LOOKUPTABLE;
using POBJECT_NAMESPACE_LOOKUPTABLE = struct _OBJECT_NAMESPACE_LOOKUPTABLE*;

struct _DPH_BLOCK_INFORMATION
{
    /* 00 */ uint32_t StartStamp;
    /* 08 */ void* Heap;
    /* 10 */ uint64_t RequestedSize;
    /* 18 */ uint64_t ActualSize;
    /* 20 */ _LIST_ENTRY FreeQueue;
    /* 20 */ _SLIST_ENTRY FreePushList;
    /* 20 */ uint16_t TraceIndex;
    /* 30 */ void* StackTrace;
    /* 38 */ uint32_t Padding;
    /* 3c */ uint32_t EndStamp;
};
using DPH_BLOCK_INFORMATION  = struct _DPH_BLOCK_INFORMATION;
using PDPH_BLOCK_INFORMATION = struct _DPH_BLOCK_INFORMATION*;

struct _EVENT_HEADER
{
    /* 00 */ uint16_t Size;
    /* 02 */ uint16_t HeaderType;
    /* 04 */ uint16_t Flags;
    /* 06 */ uint16_t EventProperty;
    /* 08 */ uint32_t ThreadId;
    /* 0c */ uint32_t ProcessId;
    /* 10 */ _LARGE_INTEGER TimeStamp;
    /* 18 */ _GUID ProviderId;
    /* 28 */ _EVENT_DESCRIPTOR EventDescriptor;
    /* 38 */ uint32_t KernelTime;
    /* 3c */ uint32_t UserTime;
    /* 38 */ uint64_t ProcessorTime;
    /* 40 */ _GUID ActivityId;
};
using EVENT_HEADER  = struct _EVENT_HEADER;
using PEVENT_HEADER = struct _EVENT_HEADER*;

struct _PS_IO_CONTROL_ENTRY
{
    /* 00 */ _RTL_BALANCED_NODE VolumeTreeNode;
    /* 00 */ _LIST_ENTRY FreeListEntry;
    /* 10 */ uint64_t ReservedForParentValue;
    /* 18 */ uint64_t VolumeKey;
    /* 20 */ _EX_RUNDOWN_REF Rundown;
    /* 28 */ void* IoControl;
    /* 30 */ void* VolumeIoAttribution;
};
using PS_IO_CONTROL_ENTRY  = struct _PS_IO_CONTROL_ENTRY;
using PPS_IO_CONTROL_ENTRY = struct _PS_IO_CONTROL_ENTRY*;

struct _RTL_SPARSE_ARRAY
{
    /* 00 */ uint64_t ElementCount;
    /* 08 */ uint32_t ElementSizeShift;
    /* 10 */ _RTL_CSPARSE_BITMAP Bitmap;
};
using RTL_SPARSE_ARRAY  = struct _RTL_SPARSE_ARRAY;
using PRTL_SPARSE_ARRAY = struct _RTL_SPARSE_ARRAY*;

struct _RTLP_HP_ALLOC_TRACKER
{
    /* 00 */ uint64_t BaseAddress;
    /* 08 */ _RTL_CSPARSE_BITMAP AllocTrackerBitmap;
    /* 08 */ std::array<uint8_t, 72> AllocTrackerBitmapBuffer;
};
using RTLP_HP_ALLOC_TRACKER  = struct _RTLP_HP_ALLOC_TRACKER;
using PRTLP_HP_ALLOC_TRACKER = struct _RTLP_HP_ALLOC_TRACKER*;

struct _HEAP_LOCK
{
    /* 00 */ union
    {
        /* 00 */ _RTL_CRITICAL_SECTION CriticalSection;
    } Lock;
};
using HEAP_LOCK  = struct _HEAP_LOCK;
using PHEAP_LOCK = struct _HEAP_LOCK*;

struct _RTL_TRACE_DATABASE
{
    /* 00 */ uint32_t Magic;
    /* 04 */ uint32_t Flags;
    /* 08 */ uint32_t Tag;
    /* 10 */ _RTL_TRACE_SEGMENT* SegmentList;
    /* 18 */ uint64_t MaximumSize;
    /* 20 */ uint64_t CurrentSize;
    /* 28 */ void* Owner;
    /* 30 */ _RTL_CRITICAL_SECTION Lock;
    /* 58 */ uint32_t NoOfBuckets;
    /* 60 */ _RTL_TRACE_BLOCK** Buckets;
    /* 68 */ std::function<uint32_t(uint32_t, void**)> HashFunction;
    /* 70 */ uint64_t NoOfTraces;
    /* 78 */ uint64_t NoOfHits;
    /* 80 */ std::array<uint32_t, 16> HashCounter;
};
using RTL_TRACE_DATABASE  = struct _RTL_TRACE_DATABASE;
using PRTL_TRACE_DATABASE = struct _RTL_TRACE_DATABASE*;

struct _HEAP_SUBSEGMENT
{
    /* 00 */ _HEAP_LOCAL_SEGMENT_INFO* LocalInfo;
    /* 08 */ _HEAP_USERDATA_HEADER* UserBlocks;
    /* 10 */ _SLIST_HEADER DelayFreeList;
    /* 20 */ _INTERLOCK_SEQ AggregateExchg;
    /* 24 */ uint16_t BlockSize;
    /* 26 */ uint16_t Flags;
    /* 28 */ uint16_t BlockCount;
    /* 2a */ uint8_t SizeIndex;
    /* 2b */ uint8_t AffinityIndex;
    /* 24 */ std::array<uint32_t, 2> Alignment;
    /* 2c */ uint32_t Lock;
    /* 30 */ _SINGLE_LIST_ENTRY SFreeListEntry;
};
using HEAP_SUBSEGMENT  = struct _HEAP_SUBSEGMENT;
using PHEAP_SUBSEGMENT = struct _HEAP_SUBSEGMENT*;

struct _HEAP_VS_CHUNK_HEADER
{
    /* 00 */ _HEAP_VS_CHUNK_HEADER_SIZE Sizes;
    /* 08:0 */ uint32_t EncodedSegmentPageOffset : 8;
    /* 08:8 */ uint32_t UnusedBytes              : 1;
    /* 08:9 */ uint32_t SkipDuringWalk           : 1;
    /* 08:10 */ uint32_t Spare                   : 22;
    /* 08 */ uint32_t AllocatedChunkBits;
};
using HEAP_VS_CHUNK_HEADER  = struct _HEAP_VS_CHUNK_HEADER;
using PHEAP_VS_CHUNK_HEADER = struct _HEAP_VS_CHUNK_HEADER*;

struct _HEAP_PAGE_RANGE_DESCRIPTOR
{
    /* 00 */ _RTL_BALANCED_NODE TreeNode;
    /* 00 */ uint32_t TreeSignature;
    /* 04 */ uint32_t UnusedBytes;
    /* 08:0 */ uint16_t ExtraPresent : 1;
    /* 08:1 */ uint16_t Spare0       : 15;
    /* 18 */ uint8_t RangeFlags;
    /* 19 */ uint8_t CommittedPageCount;
    /* 1a */ uint16_t Spare;
    /* 1c */ _HEAP_DESCRIPTOR_KEY Key;
    /* 1c */ std::array<uint8_t, 3> Align;
    /* 1f */ uint8_t UnitOffset;
    /* 1f */ uint8_t UnitSize;
};
using HEAP_PAGE_RANGE_DESCRIPTOR  = struct _HEAP_PAGE_RANGE_DESCRIPTOR;
using PHEAP_PAGE_RANGE_DESCRIPTOR = struct _HEAP_PAGE_RANGE_DESCRIPTOR*;

struct _HEAP_SEG_CONTEXT
{
    /* 00 */ uint64_t SegmentMask;
    /* 08 */ uint8_t UnitShift;
    /* 09 */ uint8_t PagesPerUnitShift;
    /* 0a */ uint8_t FirstDescriptorIndex;
    /* 0b */ uint8_t CachedCommitSoftShift;
    /* 0c */ uint8_t CachedCommitHighShift;
    /* 0d */ union
    {
        /* 00:0 */ uint8_t LargePagePolicy       : 3;
        /* 00:3 */ uint8_t FullDecommit          : 1;
        /* 00:4 */ uint8_t ReleaseEmptySegments  : 1;
        /* 00:5 */ uint8_t LargeHeapFirstSegment : 1;
        /* 00 */ uint8_t AllFlags;
    } Flags;

    /* 10 */ uint32_t MaxAllocationSize;
    /* 14 */ int16_t OlpStatsOffset;
    /* 16 */ int16_t MemStatsOffset;
    /* 18 */ void* LfhContext;
    /* 20 */ void* VsContext;
    /* 28 */ RTL_HP_ENV_HANDLE EnvHandle;
    /* 38 */ void* Heap;
    /* 40 */ uint64_t SegmentLock;
    /* 48 */ _LIST_ENTRY SegmentListHead;
    /* 58 */ uint64_t SegmentCount;
    /* 60 */ _RTL_RB_TREE FreePageRanges;
    /* 70 */ uint64_t FreeSegmentListLock;
    /* 78 */ std::array<_SINGLE_LIST_ENTRY, 2> FreeSegmentList;
};
using HEAP_SEG_CONTEXT  = struct _HEAP_SEG_CONTEXT;
using PHEAP_SEG_CONTEXT = struct _HEAP_SEG_CONTEXT*;

struct _HEAP_LOCAL_SEGMENT_INFO
{
    /* 00 */ _HEAP_LOCAL_DATA* LocalData;
    /* 08 */ _HEAP_SUBSEGMENT* ActiveSubsegment;
    /* 10 */ std::array<_HEAP_SUBSEGMENT*, 16> CachedItems;
    /* 90 */ _SLIST_HEADER SListHeader;
    /* a0 */ _HEAP_BUCKET_COUNTERS Counters;
    /* a8 */ uint32_t LastOpSequence;
    /* ac */ uint16_t BucketIndex;
    /* ae */ uint16_t LastUsed;
    /* b0 */ uint16_t NoThrashCount;
};
using HEAP_LOCAL_SEGMENT_INFO  = struct _HEAP_LOCAL_SEGMENT_INFO;
using PHEAP_LOCAL_SEGMENT_INFO = struct _HEAP_LOCAL_SEGMENT_INFO*;

struct _HANDLE_TRACE_DB_ENTRY
{
    /* 00 */ _CLIENT_ID ClientId;
    /* 10 */ void* Handle;
    /* 18 */ uint32_t Type;
    /* 20 */ std::array<void*, 16> StackTrace;
};
using HANDLE_TRACE_DB_ENTRY  = struct _HANDLE_TRACE_DB_ENTRY;
using PHANDLE_TRACE_DB_ENTRY = struct _HANDLE_TRACE_DB_ENTRY*;

struct _RTLP_HP_HEAP_GLOBALS
{
    /* 00 */ uint64_t HeapKey;
    /* 08 */ uint64_t LfhKey;
    /* 10 */ _HEAP_FAILURE_INFORMATION* FailureInfo;
    /* 18 */ _RTL_HEAP_MEMORY_LIMIT_DATA CommitLimitData;
    /* 38 */ uint32_t Flags;
    /* 38 */ struct
    {
        /* 00:0 */ uint32_t ErmsSupported : 1;
        /* 00:1 */ uint32_t ErmsChecked   : 1;
    } FlagsBits;
};
using RTLP_HP_HEAP_GLOBALS  = struct _RTLP_HP_HEAP_GLOBALS;
using PRTLP_HP_HEAP_GLOBALS = struct _RTLP_HP_HEAP_GLOBALS*;

struct _KERNEL_STACK_SEGMENT
{
    /* 00 */ uint64_t StackBase;
    /* 08 */ uint64_t StackLimit;
    /* 10 */ uint64_t KernelStack;
    /* 18 */ uint64_t InitialStack;
    /* 20 */ uint64_t KernelShadowStackBase;
    /* 28 */ _KERNEL_SHADOW_STACK_LIMIT KernelShadowStackLimit;
    /* 30 */ uint64_t KernelShadowStack;
    /* 38 */ uint64_t KernelShadowStackInitial;
};
using KERNEL_STACK_SEGMENT  = struct _KERNEL_STACK_SEGMENT;
using PKERNEL_STACK_SEGMENT = struct _KERNEL_STACK_SEGMENT*;

struct _RTLP_HP_METADATA_HEAP_CTX
{
    /* 00 */ _SEGMENT_HEAP* Heap;
    /* 08 */ _RTL_RUN_ONCE InitOnce;
};
using RTLP_HP_METADATA_HEAP_CTX  = struct _RTLP_HP_METADATA_HEAP_CTX;
using PRTLP_HP_METADATA_HEAP_CTX = struct _RTLP_HP_METADATA_HEAP_CTX*;

union _HANDLE_TABLE_ENTRY
{
    /* 00 */ int64_t VolatileLowValue;
    /* 00 */ int64_t LowValue;
    /* 00 */ _HANDLE_TABLE_ENTRY_INFO* InfoTable;
    /* 08 */ int64_t HighValue;
    /* 08 */ _HANDLE_TABLE_ENTRY* NextFreeHandleEntry;
    /* 08 */ _EXHANDLE LeafHandleValue;
    /* 00 */ int64_t RefCountField;
    /* 00:0 */ uint64_t Unlocked           : 1;
    /* 00:1 */ uint64_t RefCnt             : 16;
    /* 00:17 */ uint64_t Attributes        : 3;
    /* 00:20 */ uint64_t ObjectPointerBits : 44;
    /* 08:0 */ uint32_t GrantedAccessBits  : 25;
    /* 08:25 */ uint32_t NoRightsUpgrade   : 1;
    /* 08:26 */ uint32_t Spare1            : 6;
    /* 0c */ uint32_t Spare2;
};
using HANDLE_TABLE_ENTRY  = union _HANDLE_TABLE_ENTRY;
using PHANDLE_TABLE_ENTRY = union _HANDLE_TABLE_ENTRY*;

struct _PS_TRUSTLET_ATTRIBUTE_TYPE
{
    /* 00 */ uint8_t Version;
    /* 01 */ uint8_t DataCount;
    /* 02 */ uint8_t SemanticType;
    /* 03 */ _PS_TRUSTLET_ATTRIBUTE_ACCESSRIGHTS AccessRights;
    /* 00 */ uint32_t AttributeType;
};
using PS_TRUSTLET_ATTRIBUTE_TYPE  = struct _PS_TRUSTLET_ATTRIBUTE_TYPE;
using PPS_TRUSTLET_ATTRIBUTE_TYPE = struct _PS_TRUSTLET_ATTRIBUTE_TYPE*;

struct _REQUEST_MAILBOX
{
    /* 00 */ _REQUEST_MAILBOX* Next;
    /* 08 */ uint64_t RequestSummary;
    /* 10 */ _KREQUEST_PACKET RequestPacket;
    /* 30 */ int32_t* SubNodeTargetCountAddr;
    /* 38 */ int32_t SubNodeTargetCount;
};
using REQUEST_MAILBOX  = struct _REQUEST_MAILBOX;
using PREQUEST_MAILBOX = struct _REQUEST_MAILBOX*;

struct _WHEA_AER_ENDPOINT_DESCRIPTOR
{
    /* 00 */ uint16_t Type;
    /* 02 */ uint8_t Enabled;
    /* 03 */ uint8_t Reserved;
    /* 04 */ uint32_t BusNumber;
    /* 08 */ _WHEA_PCI_SLOT_NUMBER Slot;
    /* 0c */ uint16_t DeviceControl;
    /* 0e */ _AER_ENDPOINT_DESCRIPTOR_FLAGS Flags;
    /* 10 */ uint32_t UncorrectableErrorMask;
    /* 14 */ uint32_t UncorrectableErrorSeverity;
    /* 18 */ uint32_t CorrectableErrorMask;
    /* 1c */ uint32_t AdvancedCapsAndControl;
};
using WHEA_AER_ENDPOINT_DESCRIPTOR  = struct _WHEA_AER_ENDPOINT_DESCRIPTOR;
using PWHEA_AER_ENDPOINT_DESCRIPTOR = struct _WHEA_AER_ENDPOINT_DESCRIPTOR*;

struct _PS_PROCESS_WAKE_INFORMATION
{
    /* 00 */ uint64_t NotificationChannel;
    /* 08 */ std::array<uint32_t, 7> WakeCounters;
    /* 24 */ _JOBOBJECT_WAKE_FILTER WakeFilter;
    /* 2c */ uint32_t NoWakeCounter;
};
using PS_PROCESS_WAKE_INFORMATION  = struct _PS_PROCESS_WAKE_INFORMATION;
using PPS_PROCESS_WAKE_INFORMATION = struct _PS_PROCESS_WAKE_INFORMATION*;

struct _MM_PAGE_ACCESS_INFO
{
    /* 00 */ _MM_PAGE_ACCESS_INFO_FLAGS Flags;
    /* 00 */ uint64_t FileOffset;
    /* 00 */ void* VirtualAddress;
    /* 00 */ void* PointerProtoPte;
};
using MM_PAGE_ACCESS_INFO  = struct _MM_PAGE_ACCESS_INFO;
using PMM_PAGE_ACCESS_INFO = struct _MM_PAGE_ACCESS_INFO*;

struct _RTL_HP_SUB_ALLOCATOR_CONFIGS
{
    /* 00 */ _RTL_HP_LFH_CONFIG LfhConfigs;
    /* 04 */ _RTL_HP_VS_CONFIG VsConfigs;
};
using RTL_HP_SUB_ALLOCATOR_CONFIGS  = struct _RTL_HP_SUB_ALLOCATOR_CONFIGS;
using PRTL_HP_SUB_ALLOCATOR_CONFIGS = struct _RTL_HP_SUB_ALLOCATOR_CONFIGS*;

struct _WHEA_AER_ROOTPORT_DESCRIPTOR
{
    /* 00 */ uint16_t Type;
    /* 02 */ uint8_t Enabled;
    /* 03 */ uint8_t Reserved;
    /* 04 */ uint32_t BusNumber;
    /* 08 */ _WHEA_PCI_SLOT_NUMBER Slot;
    /* 0c */ uint16_t DeviceControl;
    /* 0e */ _AER_ROOTPORT_DESCRIPTOR_FLAGS Flags;
    /* 10 */ uint32_t UncorrectableErrorMask;
    /* 14 */ uint32_t UncorrectableErrorSeverity;
    /* 18 */ uint32_t CorrectableErrorMask;
    /* 1c */ uint32_t AdvancedCapsAndControl;
    /* 20 */ uint32_t RootErrorCommand;
};
using WHEA_AER_ROOTPORT_DESCRIPTOR  = struct _WHEA_AER_ROOTPORT_DESCRIPTOR;
using PWHEA_AER_ROOTPORT_DESCRIPTOR = struct _WHEA_AER_ROOTPORT_DESCRIPTOR*;

struct _RTL_STACKDB_CONTEXT
{
    /* 00 */ _RTL_HASH_TABLE StackSegmentTable;
    /* 10 */ _RTL_HASH_TABLE StackEntryTable;
    /* 20 */ _RTL_SRWLOCK StackEntryTableLock;
    /* 28 */ _RTL_SRWLOCK SegmentTableLock;
    /* 30 */ std::function<void*(uint64_t, void*)> Allocate;
    /* 38 */ std::function<void(void*, void*)> Free;
    /* 40 */ void* AllocatorContext;
};
using RTL_STACKDB_CONTEXT  = struct _RTL_STACKDB_CONTEXT;
using PRTL_STACKDB_CONTEXT = struct _RTL_STACKDB_CONTEXT*;

struct _RTL_STACK_DATABASE_LOCK
{
    /* 00 */ _RTL_SRWLOCK Lock;
};
using RTL_STACK_DATABASE_LOCK  = struct _RTL_STACK_DATABASE_LOCK;
using PRTL_STACK_DATABASE_LOCK = struct _RTL_STACK_DATABASE_LOCK*;

union _PROCESS_EXECUTION
{
    /* 00 */ int32_t State;
    /* 00 */ _PROCESS_EXECUTION_TRANSITION Transition;
    /* 02 */ _PROCESS_EXECUTION_STATE Current;
    /* 03 */ _PROCESS_EXECUTION_STATE Requested;
};
using PROCESS_EXECUTION  = union _PROCESS_EXECUTION;
using PPROCESS_EXECUTION = union _PROCESS_EXECUTION*;

struct _PROCESS_ENERGY_VALUES
{
    /* 00 */ std::array<std::array<uint64_t, 2>, 4> Cycles;
    /* 40 */ uint64_t DiskEnergy;
    /* 48 */ uint64_t NetworkTailEnergy;
    /* 50 */ uint64_t MBBTailEnergy;
    /* 58 */ uint64_t NetworkTxRxBytes;
    /* 60 */ uint64_t MBBTxRxBytes;
    /* 68 */ std::array<_ENERGY_STATE_DURATION, 3> Durations;
    /* 68 */ _ENERGY_STATE_DURATION ForegroundDuration;
    /* 70 */ _ENERGY_STATE_DURATION DesktopVisibleDuration;
    /* 78 */ _ENERGY_STATE_DURATION PSMForegroundDuration;
    /* 80 */ uint32_t CompositionRendered;
    /* 84 */ uint32_t CompositionDirtyGenerated;
    /* 88 */ uint32_t CompositionDirtyPropagated;
    /* 8c */ uint32_t Reserved1;
    /* 90 */ std::array<std::array<uint64_t, 2>, 4> AttributedCycles;
    /* d0 */ std::array<std::array<uint64_t, 2>, 4> WorkOnBehalfCycles;
};
using PROCESS_ENERGY_VALUES  = struct _PROCESS_ENERGY_VALUES;
using PPROCESS_ENERGY_VALUES = struct _PROCESS_ENERGY_VALUES*;

struct _PEB32
{
    /* 00 */ uint8_t InheritedAddressSpace;
    /* 01 */ uint8_t ReadImageFileExecOptions;
    /* 02 */ uint8_t BeingDebugged;
    /* 03 */ uint8_t BitField;
    /* 03:0 */ uint8_t ImageUsesLargePages          : 1;
    /* 03:1 */ uint8_t IsProtectedProcess           : 1;
    /* 03:2 */ uint8_t IsImageDynamicallyRelocated  : 1;
    /* 03:3 */ uint8_t SkipPatchingUser32Forwarders : 1;
    /* 03:4 */ uint8_t IsPackagedProcess            : 1;
    /* 03:5 */ uint8_t IsAppContainer               : 1;
    /* 03:6 */ uint8_t IsProtectedProcessLight      : 1;
    /* 03:7 */ uint8_t IsLongPathAwareProcess       : 1;
    /* 04 */ uint32_t Mutant;
    /* 08 */ uint32_t ImageBaseAddress;
    /* 0c */ uint32_t Ldr;
    /* 10 */ uint32_t ProcessParameters;
    /* 14 */ uint32_t SubSystemData;
    /* 18 */ uint32_t ProcessHeap;
    /* 1c */ uint32_t FastPebLock;
    /* 20 */ uint32_t AtlThunkSListPtr;
    /* 24 */ uint32_t IFEOKey;
    /* 28 */ uint32_t CrossProcessFlags;
    /* 28:0 */ uint32_t ProcessInJob               : 1;
    /* 28:1 */ uint32_t ProcessInitializing        : 1;
    /* 28:2 */ uint32_t ProcessUsingVEH            : 1;
    /* 28:3 */ uint32_t ProcessUsingVCH            : 1;
    /* 28:4 */ uint32_t ProcessUsingFTH            : 1;
    /* 28:5 */ uint32_t ProcessPreviouslyThrottled : 1;
    /* 28:6 */ uint32_t ProcessCurrentlyThrottled  : 1;
    /* 28:7 */ uint32_t ProcessImagesHotPatched    : 1;
    /* 28:8 */ uint32_t ReservedBits0              : 24;
    /* 2c */ uint32_t KernelCallbackTable;
    /* 2c */ uint32_t UserSharedInfoPtr;
    /* 30 */ uint32_t SystemReserved;
    /* 34 */ uint32_t AtlThunkSListPtr32;
    /* 38 */ uint32_t ApiSetMap;
    /* 3c */ uint32_t TlsExpansionCounter;
    /* 40 */ uint32_t TlsBitmap;
    /* 44 */ std::array<uint32_t, 2> TlsBitmapBits;
    /* 4c */ uint32_t ReadOnlySharedMemoryBase;
    /* 50 */ uint32_t SharedData;
    /* 54 */ uint32_t ReadOnlyStaticServerData;
    /* 58 */ uint32_t AnsiCodePageData;
    /* 5c */ uint32_t OemCodePageData;
    /* 60 */ uint32_t UnicodeCaseTableData;
    /* 64 */ uint32_t NumberOfProcessors;
    /* 68 */ uint32_t NtGlobalFlag;
    /* 70 */ _LARGE_INTEGER CriticalSectionTimeout;
    /* 78 */ uint32_t HeapSegmentReserve;
    /* 7c */ uint32_t HeapSegmentCommit;
    /* 80 */ uint32_t HeapDeCommitTotalFreeThreshold;
    /* 84 */ uint32_t HeapDeCommitFreeBlockThreshold;
    /* 88 */ uint32_t NumberOfHeaps;
    /* 8c */ uint32_t MaximumNumberOfHeaps;
    /* 90 */ uint32_t ProcessHeaps;
    /* 94 */ uint32_t GdiSharedHandleTable;
    /* 98 */ uint32_t ProcessStarterHelper;
    /* 9c */ uint32_t GdiDCAttributeList;
    /* a0 */ uint32_t LoaderLock;
    /* a4 */ uint32_t OSMajorVersion;
    /* a8 */ uint32_t OSMinorVersion;
    /* ac */ uint16_t OSBuildNumber;
    /* ae */ uint16_t OSCSDVersion;
    /* b0 */ uint32_t OSPlatformId;
    /* b4 */ uint32_t ImageSubsystem;
    /* b8 */ uint32_t ImageSubsystemMajorVersion;
    /* bc */ uint32_t ImageSubsystemMinorVersion;
    /* c0 */ uint32_t ActiveProcessAffinityMask;
    /* c4 */ std::array<uint32_t, 34> GdiHandleBuffer;
    /* 14c */ uint32_t PostProcessInitRoutine;
    /* 150 */ uint32_t TlsExpansionBitmap;
    /* 154 */ std::array<uint32_t, 32> TlsExpansionBitmapBits;
    /* 1d4 */ uint32_t SessionId;
    /* 1d8 */ _ULARGE_INTEGER AppCompatFlags;
    /* 1e0 */ _ULARGE_INTEGER AppCompatFlagsUser;
    /* 1e8 */ uint32_t pShimData;
    /* 1ec */ uint32_t AppCompatInfo;
    /* 1f0 */ _STRING32 CSDVersion;
    /* 1f8 */ uint32_t ActivationContextData;
    /* 1fc */ uint32_t ProcessAssemblyStorageMap;
    /* 200 */ uint32_t SystemDefaultActivationContextData;
    /* 204 */ uint32_t SystemAssemblyStorageMap;
    /* 208 */ uint32_t MinimumStackCommit;
    /* 20c */ std::array<uint32_t, 2> SparePointers;
    /* 214 */ uint32_t PatchLoaderData;
    /* 218 */ uint32_t ChpeV2ProcessInfo;
    /* 21c */ uint32_t AppModelFeatureState;
    /* 220 */ std::array<uint32_t, 2> SpareUlongs;
    /* 228 */ uint16_t ActiveCodePage;
    /* 22a */ uint16_t OemCodePage;
    /* 22c */ uint16_t UseCaseMapping;
    /* 22e */ uint16_t UnusedNlsField;
    /* 230 */ uint32_t WerRegistrationData;
    /* 234 */ uint32_t WerShipAssertPtr;
    /* 238 */ uint32_t Spare;
    /* 23c */ uint32_t pImageHeaderHash;
    /* 240 */ uint32_t TracingFlags;
    /* 240:0 */ uint32_t HeapTracingEnabled      : 1;
    /* 240:1 */ uint32_t CritSecTracingEnabled   : 1;
    /* 240:2 */ uint32_t LibLoaderTracingEnabled : 1;
    /* 240:3 */ uint32_t SpareTracingBits        : 29;
    /* 248 */ uint64_t CsrServerReadOnlySharedMemoryBase;
    /* 250 */ uint32_t TppWorkerpListLock;
    /* 254 */ LIST_ENTRY32 TppWorkerpList;
    /* 25c */ std::array<uint32_t, 128> WaitOnAddressHashTable;
    /* 45c */ uint32_t TelemetryCoverageHeader;
    /* 460 */ uint32_t CloudFileFlags;
    /* 464 */ uint32_t CloudFileDiagFlags;
    /* 468 */ char PlaceholderCompatibilityMode;
    /* 469 */ std::array<char, 7> PlaceholderCompatibilityModeReserved;
    /* 470 */ uint32_t LeapSecondData;
    /* 474 */ uint32_t LeapSecondFlags;
    /* 474:0 */ uint32_t SixtySecondEnabled : 1;
    /* 474:1 */ uint32_t Reserved           : 31;
    /* 478 */ uint32_t NtGlobalFlag2;
    /* 480 */ uint64_t ExtendedFeatureDisableMask;
};
using PEB32  = struct _PEB32;
using PPEB32 = struct _PEB32*;

struct _WHEA_AER_BRIDGE_DESCRIPTOR
{
    /* 00 */ uint16_t Type;
    /* 02 */ uint8_t Enabled;
    /* 03 */ uint8_t Reserved;
    /* 04 */ uint32_t BusNumber;
    /* 08 */ _WHEA_PCI_SLOT_NUMBER Slot;
    /* 0c */ uint16_t DeviceControl;
    /* 0e */ _AER_BRIDGE_DESCRIPTOR_FLAGS Flags;
    /* 10 */ uint32_t UncorrectableErrorMask;
    /* 14 */ uint32_t UncorrectableErrorSeverity;
    /* 18 */ uint32_t CorrectableErrorMask;
    /* 1c */ uint32_t AdvancedCapsAndControl;
    /* 20 */ uint32_t SecondaryUncorrectableErrorMask;
    /* 24 */ uint32_t SecondaryUncorrectableErrorSev;
    /* 28 */ uint32_t SecondaryCapsAndControl;
};
using WHEA_AER_BRIDGE_DESCRIPTOR  = struct _WHEA_AER_BRIDGE_DESCRIPTOR;
using PWHEA_AER_BRIDGE_DESCRIPTOR = struct _WHEA_AER_BRIDGE_DESCRIPTOR*;

union _HEAP_LFH_SUBSEGMENT_STATS
{
    /* 00 */ std::array<_HEAP_LFH_SUBSEGMENT_STAT, 4> Buckets;
    /* 00 */ void* AllStats;
};
using HEAP_LFH_SUBSEGMENT_STATS  = union _HEAP_LFH_SUBSEGMENT_STATS;
using PHEAP_LFH_SUBSEGMENT_STATS = union _HEAP_LFH_SUBSEGMENT_STATS*;

struct _KLOCK_ENTRY
{
    /* 00 */ _KLOCK_ENTRY_LOCK_STATE LockState;
    /* 00 */ void* LockUnsafe;
    /* 00 */ uint8_t CrossThreadReleasableAndBusyByte;
    /* 01 */ std::array<uint8_t, 6> Reserved;
    /* 07 */ uint8_t InTreeByte;
    /* 08 */ void* SessionState;
    /* 08 */ uint32_t SessionId;
    /* 0c */ uint32_t SessionPad;
    /* 10 */ uint32_t EntryFlags;
    /* 10 */ uint8_t EntryIndex;
    /* 11 */ uint8_t WaitingByte;
    /* 12 */ uint8_t AcquiredByte;
    /* 13 */ uint8_t CrossThreadFlags;
    /* 13:0 */ uint8_t HeadNodeBit   : 1;
    /* 13:1 */ uint8_t IoPriorityBit : 1;
    /* 13:2 */ uint8_t IoQoSWaiter   : 1;
    /* 13:3 */ uint8_t Spare1        : 5;
    /* 10:0 */ uint32_t StaticState  : 8;
    /* 10:8 */ uint32_t AllFlags     : 24;
    /* 14 */ uint32_t SpareFlags;
    /* 18 */ _RTL_BALANCED_NODE TreeNode;
    /* 30 */ _RTL_RB_TREE OwnerTree;
    /* 40 */ _RTL_RB_TREE WaiterTree;
    /* 30 */ char CpuPriorityKey;
    /* 50 */ uint64_t EntryLock;
    /* 58 */ _KLOCK_ENTRY_BOOST_BITMAP BoostBitmap;
};
using KLOCK_ENTRY  = struct _KLOCK_ENTRY;
using PKLOCK_ENTRY = struct _KLOCK_ENTRY*;

struct _ERESOURCE
{
    /* 00 */ _LIST_ENTRY SystemResourcesList;
    /* 10 */ _OWNER_ENTRY* OwnerTable;
    /* 18 */ int16_t ActiveCount;
    /* 1a */ uint16_t Flag;
    /* 1a */ uint8_t ReservedLowFlags;
    /* 1b */ uint8_t WaiterPriority;
    /* 20 */ void* SharedWaiters;
    /* 28 */ void* ExclusiveWaiters;
    /* 30 */ _OWNER_ENTRY OwnerEntry;
    /* 40 */ uint32_t ActiveEntries;
    /* 44 */ uint32_t ContentionCount;
    /* 48 */ uint32_t NumberOfSharedWaiters;
    /* 4c */ uint32_t NumberOfExclusiveWaiters;
    /* 50 */ void* Reserved2;
    /* 58 */ void* Address;
    /* 58 */ uint64_t CreatorBackTraceIndex;
    /* 60 */ uint64_t SpinLock;
};
using ERESOURCE  = struct _ERESOURCE;
using PERESOURCE = struct _ERESOURCE*;

struct _RTL_STACK_TRACE_ENTRY
{
    /* 00 */ _RTL_STD_LIST_ENTRY HashChain;
    /* 08:0 */ uint16_t TraceCount  : 11;
    /* 08:11 */ uint16_t BlockDepth : 5;
    /* 0a */ uint16_t IndexHigh;
    /* 0c */ uint16_t Index;
    /* 0e */ uint16_t Depth;
    /* 10 */ std::array<void*, 32> BackTrace;
    /* 10 */ _SLIST_ENTRY FreeChain;
};
using RTL_STACK_TRACE_ENTRY  = struct _RTL_STACK_TRACE_ENTRY;
using PRTL_STACK_TRACE_ENTRY = struct _RTL_STACK_TRACE_ENTRY*;

struct _HEAP_LFH_SUBSEGMENT
{
    /* 00 */ _LIST_ENTRY ListEntry;
    /* 10 */ _HEAP_LFH_SUBSEGMENT_OWNER* Owner;
    /* 10 */ _HEAP_LFH_SUBSEGMENT_DELAY_FREE DelayFree;
    /* 18 */ uint64_t CommitLock;
    /* 20 */ uint16_t FreeCount;
    /* 22 */ uint16_t BlockCount;
    /* 20 */ int16_t InterlockedShort;
    /* 20 */ int32_t InterlockedLong;
    /* 24 */ uint16_t FreeHint;
    /* 26 */ uint8_t Location;
    /* 27 */ uint8_t WitheldBlockCount;
    /* 28 */ _HEAP_LFH_SUBSEGMENT_ENCODED_OFFSETS BlockOffsets;
    /* 2c */ uint8_t CommitUnitShift;
    /* 2d */ uint8_t CommitUnitCount;
    /* 2e */ uint16_t CommitStateOffset;
    /* 30 */ std::array<uint64_t, 1> BlockBitmap;
};
using HEAP_LFH_SUBSEGMENT  = struct _HEAP_LFH_SUBSEGMENT;
using PHEAP_LFH_SUBSEGMENT = struct _HEAP_LFH_SUBSEGMENT*;

struct _MMSUPPORT_INSTANCE
{
    /* 00 */ uint32_t NextPageColor;
    /* 04 */ uint32_t PageFaultCount;
    /* 08 */ uint64_t TrimmedPageCount;
    /* 10 */ _MMWSL_INSTANCE* VmWorkingSetList;
    /* 18 */ _LIST_ENTRY WorkingSetExpansionLinks;
    /* 28 */ std::array<uint64_t, 8> AgeDistribution;
    /* 68 */ _KGATE* ExitOutswapGate;
    /* 70 */ uint64_t MinimumWorkingSetSize;
    /* 78 */ uint64_t MaximumWorkingSetSize;
    /* 80 */ uint64_t WorkingSetLeafSize;
    /* 88 */ uint64_t WorkingSetLeafPrivateSize;
    /* 90 */ uint64_t WorkingSetSize;
    /* 98 */ uint64_t WorkingSetPrivateSize;
    /* a0 */ uint64_t PeakWorkingSetSize;
    /* a8 */ uint32_t HardFaultCount;
    /* ac */ uint16_t LastTrimStamp;
    /* ae */ uint16_t PartitionId;
    /* b0 */ uint64_t SelfmapLock;
    /* b8 */ _MMSUPPORT_FLAGS Flags;
    /* bc */ int32_t InterlockedFlags;
};
using MMSUPPORT_INSTANCE  = struct _MMSUPPORT_INSTANCE;
using PMMSUPPORT_INSTANCE = struct _MMSUPPORT_INSTANCE*;

struct _THREAD_ENERGY_VALUES
{
    /* 00 */ std::array<std::array<uint64_t, 2>, 4> Cycles;
    /* 40 */ std::array<std::array<uint64_t, 2>, 4> AttributedCycles;
    /* 80 */ std::array<std::array<uint64_t, 2>, 4> WorkOnBehalfCycles;
    /* c0 */ _TIMELINE_BITMAP CpuTimeline;
};
using THREAD_ENERGY_VALUES  = struct _THREAD_ENERGY_VALUES;
using PTHREAD_ENERGY_VALUES = struct _THREAD_ENERGY_VALUES*;

struct _PROCESS_ENERGY_VALUES_EXTENSION
{
    /* 00 */ std::array<_TIMELINE_BITMAP, 14> Timelines;
    /* 00 */ _TIMELINE_BITMAP CpuTimeline;
    /* 08 */ _TIMELINE_BITMAP DiskTimeline;
    /* 10 */ _TIMELINE_BITMAP NetworkTimeline;
    /* 18 */ _TIMELINE_BITMAP MBBTimeline;
    /* 20 */ _TIMELINE_BITMAP ForegroundTimeline;
    /* 28 */ _TIMELINE_BITMAP DesktopVisibleTimeline;
    /* 30 */ _TIMELINE_BITMAP CompositionRenderedTimeline;
    /* 38 */ _TIMELINE_BITMAP CompositionDirtyGeneratedTimeline;
    /* 40 */ _TIMELINE_BITMAP CompositionDirtyPropagatedTimeline;
    /* 48 */ _TIMELINE_BITMAP InputTimeline;
    /* 50 */ _TIMELINE_BITMAP AudioInTimeline;
    /* 58 */ _TIMELINE_BITMAP AudioOutTimeline;
    /* 60 */ _TIMELINE_BITMAP DisplayRequiredTimeline;
    /* 68 */ _TIMELINE_BITMAP KeyboardInputTimeline;
    /* 70 */ std::array<_ENERGY_STATE_DURATION, 5> Durations;
    /* 70 */ _ENERGY_STATE_DURATION InputDuration;
    /* 78 */ _ENERGY_STATE_DURATION AudioInDuration;
    /* 80 */ _ENERGY_STATE_DURATION AudioOutDuration;
    /* 88 */ _ENERGY_STATE_DURATION DisplayRequiredDuration;
    /* 90 */ _ENERGY_STATE_DURATION PSMBackgroundDuration;
    /* 98 */ uint32_t KeyboardInput;
    /* 9c */ uint32_t MouseInput;
};
using PROCESS_ENERGY_VALUES_EXTENSION  = struct _PROCESS_ENERGY_VALUES_EXTENSION;
using PPROCESS_ENERGY_VALUES_EXTENSION = struct _PROCESS_ENERGY_VALUES_EXTENSION*;

struct _KTRAP_FRAME
{
    /* 00 */ uint64_t P1Home;
    /* 08 */ uint64_t P2Home;
    /* 10 */ uint64_t P3Home;
    /* 18 */ uint64_t P4Home;
    /* 20 */ uint64_t P5;
    /* 28 */ char PreviousMode;
    /* 28 */ uint8_t InterruptRetpolineState;
    /* 29 */ uint8_t PreviousIrql;
    /* 2a */ uint8_t FaultIndicator;
    /* 2a */ uint8_t NmiMsrIbrs;
    /* 2b */ uint8_t ExceptionActive;
    /* 2c */ uint32_t MxCsr;
    /* 30 */ uint64_t Rax;
    /* 38 */ uint64_t Rcx;
    /* 40 */ uint64_t Rdx;
    /* 48 */ uint64_t R8;
    /* 50 */ uint64_t R9;
    /* 58 */ uint64_t R10;
    /* 60 */ uint64_t R11;
    /* 68 */ uint64_t GsBase;
    /* 68 */ uint64_t GsSwap;
    /* 70 */ _M128A Xmm0;
    /* 80 */ _M128A Xmm1;
    /* 90 */ _M128A Xmm2;
    /* a0 */ _M128A Xmm3;
    /* b0 */ _M128A Xmm4;
    /* c0 */ _M128A Xmm5;
    /* d0 */ uint64_t FaultAddress;
    /* d0 */ uint64_t ContextRecord;
    /* d8 */ uint64_t Dr0;
    /* e0 */ uint64_t Dr1;
    /* e8 */ uint64_t Dr2;
    /* f0 */ uint64_t Dr3;
    /* f8 */ uint64_t Dr6;
    /* 100 */ uint64_t Dr7;
    /* d8 */ uint64_t ShadowStackFrame;
    /* e0 */ std::array<uint64_t, 5> Spare;
    /* 108 */ uint64_t DebugControl;
    /* 110 */ uint64_t LastBranchToRip;
    /* 118 */ uint64_t LastBranchFromRip;
    /* 120 */ uint64_t LastExceptionToRip;
    /* 128 */ uint64_t LastExceptionFromRip;
    /* 130 */ uint16_t SegDs;
    /* 132 */ uint16_t SegEs;
    /* 134 */ uint16_t SegFs;
    /* 136 */ uint16_t SegGs;
    /* 138 */ uint64_t TrapFrame;
    /* 140 */ uint32_t NmiPreviousSpecCtrl;
    /* 144 */ uint32_t NmiPreviousSpecCtrlPad;
    /* 140 */ uint64_t Rbx;
    /* 148 */ uint64_t Rdi;
    /* 150 */ uint64_t Rsi;
    /* 158 */ uint64_t Rbp;
    /* 160 */ uint64_t ErrorCode;
    /* 160 */ uint64_t ExceptionFrame;
    /* 168 */ uint64_t Rip;
    /* 170 */ uint16_t SegCs;
    /* 172 */ uint8_t Fill0;
    /* 173 */ uint8_t Logging;
    /* 174 */ std::array<uint16_t, 2> Fill1;
    /* 178 */ uint32_t EFlags;
    /* 17c */ uint32_t Fill2;
    /* 180 */ uint64_t Rsp;
    /* 188 */ uint16_t SegSs;
    /* 18a */ uint16_t Fill3;
    /* 18c */ uint32_t Fill4;
};
using KTRAP_FRAME  = struct _KTRAP_FRAME;
using PKTRAP_FRAME = struct _KTRAP_FRAME*;

struct _XSAVE_FORMAT
{
    /* 00 */ uint16_t ControlWord;
    /* 02 */ uint16_t StatusWord;
    /* 04 */ uint8_t TagWord;
    /* 05 */ uint8_t Reserved1;
    /* 06 */ uint16_t ErrorOpcode;
    /* 08 */ uint32_t ErrorOffset;
    /* 0c */ uint16_t ErrorSelector;
    /* 0e */ uint16_t Reserved2;
    /* 10 */ uint32_t DataOffset;
    /* 14 */ uint16_t DataSelector;
    /* 16 */ uint16_t Reserved3;
    /* 18 */ uint32_t MxCsr;
    /* 1c */ uint32_t MxCsr_Mask;
    /* 20 */ std::array<_M128A, 8> FloatRegisters;
    /* a0 */ std::array<_M128A, 16> XmmRegisters;
    /* 1a0 */ std::array<uint8_t, 96> Reserved4;
};
using XSAVE_FORMAT  = struct _XSAVE_FORMAT;
using PXSAVE_FORMAT = struct _XSAVE_FORMAT*;

struct _WHEA_DEVICE_DRIVER_DESCRIPTOR
{
    /* 00 */ uint16_t Type;
    /* 02 */ uint8_t Enabled;
    /* 03 */ uint8_t Reserved;
    /* 04 */ _GUID SourceGuid;
    /* 14 */ uint16_t LogTag;
    /* 16 */ uint16_t Reserved2;
    /* 18 */ uint32_t PacketLength;
    /* 1c */ uint32_t PacketCount;
    /* 20 */ uint8_t* PacketBuffer;
    /* 28 */ _WHEA_ERROR_SOURCE_CONFIGURATION_DD Config;
    /* 40 */ _GUID CreatorId;
    /* 50 */ _GUID PartitionId;
    /* 60 */ uint32_t MaxSectionDataLength;
    /* 64 */ uint32_t MaxSectionsPerRecord;
    /* 68 */ uint8_t* PacketStateBuffer;
    /* 70 */ int32_t OpenHandles;
};
using WHEA_DEVICE_DRIVER_DESCRIPTOR  = struct _WHEA_DEVICE_DRIVER_DESCRIPTOR;
using PWHEA_DEVICE_DRIVER_DESCRIPTOR = struct _WHEA_DEVICE_DRIVER_DESCRIPTOR*;

struct _HEAP_USERDATA_HEADER
{
    /* 00 */ _SINGLE_LIST_ENTRY SFreeListEntry;
    /* 00 */ _HEAP_SUBSEGMENT* SubSegment;
    /* 08 */ void* Reserved;
    /* 10 */ uint32_t SizeIndexAndPadding;
    /* 10 */ uint8_t SizeIndex;
    /* 11 */ uint8_t GuardPagePresent;
    /* 12 */ uint16_t PaddingBytes;
    /* 14 */ uint32_t Signature;
    /* 18 */ _HEAP_USERDATA_OFFSETS EncodedOffsets;
    /* 20 */ _RTL_BITMAP_EX BusyBitmap;
    /* 30 */ std::array<uint64_t, 1> BitmapData;
};
using HEAP_USERDATA_HEADER  = struct _HEAP_USERDATA_HEADER;
using PHEAP_USERDATA_HEADER = struct _HEAP_USERDATA_HEADER*;

struct _SID
{
    /* 00 */ uint8_t Revision;
    /* 01 */ uint8_t SubAuthorityCount;
    /* 02 */ _SID_IDENTIFIER_AUTHORITY IdentifierAuthority;
    /* 08 */ std::array<uint32_t, 1> SubAuthority;
};
using SID  = struct _SID;
using PSID = struct _SID*;

struct _HEAP_RUNTIME_MEMORY_STATS
{
    /* 00 */ uint64_t TotalReservedPages;
    /* 08 */ uint64_t TotalCommittedPages;
    /* 10 */ uint64_t FreeCommittedPages;
    /* 18 */ uint64_t LfhFreeCommittedPages;
    /* 20 */ std::array<_HEAP_OPPORTUNISTIC_LARGE_PAGE_STATS, 2> LargePageStats;
    /* 40 */ _RTL_HP_SEG_ALLOC_POLICY LargePageUtilizationPolicy;
};
using HEAP_RUNTIME_MEMORY_STATS  = struct _HEAP_RUNTIME_MEMORY_STATS;
using PHEAP_RUNTIME_MEMORY_STATS = struct _HEAP_RUNTIME_MEMORY_STATS*;

struct _AUX_ACCESS_DATA
{
    /* 00 */ _PRIVILEGE_SET* PrivilegesUsed;
    /* 08 */ _GENERIC_MAPPING GenericMapping;
    /* 18 */ uint32_t AccessesToAudit;
    /* 1c */ uint32_t MaximumAuditMask;
    /* 20 */ _GUID TransactionId;
    /* 30 */ void* NewSecurityDescriptor;
    /* 38 */ void* ExistingSecurityDescriptor;
    /* 40 */ void* ParentSecurityDescriptor;
    /* 48 */ std::function<void(void*, void*)> DeRefSecurityDescriptor;
    /* 50 */ void* SDLock;
    /* 58 */ _ACCESS_REASONS AccessReasons;
    /* d8 */ uint8_t GenerateStagingEvents;
};
using AUX_ACCESS_DATA  = struct _AUX_ACCESS_DATA;
using PAUX_ACCESS_DATA = struct _AUX_ACCESS_DATA*;

struct _INVERTED_FUNCTION_TABLE_USER_MODE
{
    /* 00 */ uint32_t CurrentSize;
    /* 04 */ uint32_t MaximumSize;
    /* 08 */ uint32_t Epoch;
    /* 0c */ uint8_t Overflow;
    /* 10 */ std::array<_INVERTED_FUNCTION_TABLE_ENTRY, 512> TableEntry;
};
using INVERTED_FUNCTION_TABLE_USER_MODE  = struct _INVERTED_FUNCTION_TABLE_USER_MODE;
using PINVERTED_FUNCTION_TABLE_USER_MODE = struct _INVERTED_FUNCTION_TABLE_USER_MODE*;

struct _DPH_HEAP_BLOCK
{
    /* 00 */ _DPH_HEAP_BLOCK* pNextAlloc;
    /* 00 */ _LIST_ENTRY AvailableEntry;
    /* 00 */ _RTL_BALANCED_LINKS TableLinks;
    /* 20 */ uint8_t* pUserAllocation;
    /* 28 */ uint8_t* pVirtualBlock;
    /* 30 */ uint64_t nVirtualBlockSize;
    /* 38 */ uint64_t nVirtualAccessSize;
    /* 40 */ uint64_t nUserRequestedSize;
    /* 48 */ uint64_t nUserActualSize;
    /* 50 */ void* UserValue;
    /* 58 */ uint32_t UserFlags;
    /* 60 */ _RTL_TRACE_BLOCK* StackTrace;
    /* 68 */ _LIST_ENTRY AdjacencyEntry;
    /* 78 */ uint8_t* pVirtualRegion;
};
using DPH_HEAP_BLOCK  = struct _DPH_HEAP_BLOCK;
using PDPH_HEAP_BLOCK = struct _DPH_HEAP_BLOCK*;

struct _RTL_AVL_TABLE
{
    /* 00 */ _RTL_BALANCED_LINKS BalancedRoot;
    /* 20 */ void* OrderedPointer;
    /* 28 */ uint32_t WhichOrderedElement;
    /* 2c */ uint32_t NumberGenericTableElements;
    /* 30 */ uint32_t DepthOfTree;
    /* 38 */ _RTL_BALANCED_LINKS* RestartKey;
    /* 40 */ uint32_t DeleteCount;
    /* 48 */ std::function<_RTL_GENERIC_COMPARE_RESULTS(_RTL_AVL_TABLE*, void*, void*)> CompareRoutine;
    /* 50 */ std::function<void*(_RTL_AVL_TABLE*, uint32_t)> AllocateRoutine;
    /* 58 */ std::function<void(_RTL_AVL_TABLE*, void*)> FreeRoutine;
    /* 60 */ void* TableContext;
};
using RTL_AVL_TABLE  = struct _RTL_AVL_TABLE;
using PRTL_AVL_TABLE = struct _RTL_AVL_TABLE*;

struct _KE_IDEAL_PROCESSOR_SET_BREAKPOINTS
{
    /* 00 */ _KE_PROCESS_CONCURRENCY_COUNT Low;
    /* 04 */ _KE_PROCESS_CONCURRENCY_COUNT High;
};
using KE_IDEAL_PROCESSOR_SET_BREAKPOINTS  = struct _KE_IDEAL_PROCESSOR_SET_BREAKPOINTS;
using PKE_IDEAL_PROCESSOR_SET_BREAKPOINTS = struct _KE_IDEAL_PROCESSOR_SET_BREAKPOINTS*;

struct _WHEA_XPF_MC_BANK_DESCRIPTOR
{
    /* 00 */ uint8_t BankNumber;
    /* 01 */ uint8_t ClearOnInitialization;
    /* 02 */ uint8_t StatusDataFormat;
    /* 03 */ _XPF_MC_BANK_FLAGS Flags;
    /* 04 */ uint32_t ControlMsr;
    /* 08 */ uint32_t StatusMsr;
    /* 0c */ uint32_t AddressMsr;
    /* 10 */ uint32_t MiscMsr;
    /* 14 */ uint64_t ControlData;
};
using WHEA_XPF_MC_BANK_DESCRIPTOR  = struct _WHEA_XPF_MC_BANK_DESCRIPTOR;
using PWHEA_XPF_MC_BANK_DESCRIPTOR = struct _WHEA_XPF_MC_BANK_DESCRIPTOR*;

struct _PROC_PERF_HISTORY
{
    /* 00 */ uint32_t Count;
    /* 04 */ uint32_t Slot;
    /* 08 */ uint32_t UtilityTotal;
    /* 0c */ uint32_t AffinitizedUtilityTotal;
    /* 10 */ uint32_t FrequencyTotal;
    /* 14 */ uint32_t ImportantPercentTotal;
    /* 18 */ uint32_t IdealPercentTotal;
    /* 1c */ std::array<uint32_t, 4> TaggedPercentTotal;
    /* 2c */ std::array<_PROC_PERF_HISTORY_ENTRY, 1> HistoryList;
};
using PROC_PERF_HISTORY  = struct _PROC_PERF_HISTORY;
using PPROC_PERF_HISTORY = struct _PROC_PERF_HISTORY*;

struct _HEAP_ENTRY
{
    /* 00 */ _HEAP_UNPACKED_ENTRY UnpackedEntry;
    /* 00 */ void* PreviousBlockPrivateData;
    /* 08 */ uint16_t Size;
    /* 0a */ uint8_t Flags;
    /* 0b */ uint8_t SmallTagIndex;
    /* 08 */ uint32_t SubSegmentCode;
    /* 0c */ uint16_t PreviousSize;
    /* 0e */ uint8_t SegmentOffset;
    /* 0e */ uint8_t LFHFlags;
    /* 0f */ uint8_t UnusedBytes;
    /* 08 */ uint64_t CompactHeader;
    /* 00 */ _HEAP_EXTENDED_ENTRY ExtendedEntry;
    /* 00 */ void* Reserved;
    /* 08 */ uint16_t FunctionIndex;
    /* 0a */ uint16_t ContextValue;
    /* 08 */ uint32_t InterceptorValue;
    /* 0c */ uint16_t UnusedBytesLength;
    /* 0e */ uint8_t EntryOffset;
    /* 0f */ uint8_t ExtendedBlockSignature;
    /* 00 */ void* ReservedForAlignment;
    /* 08 */ uint32_t Code1;
    /* 0c */ uint16_t Code2;
    /* 0e */ uint8_t Code3;
    /* 0f */ uint8_t Code4;
    /* 0c */ uint32_t Code234;
    /* 08 */ uint64_t AgregateCode;
};
using HEAP_ENTRY  = struct _HEAP_ENTRY;
using PHEAP_ENTRY = struct _HEAP_ENTRY*;

struct _IMAGE_OPTIONAL_HEADER64
{
    /* 00 */ uint16_t Magic;
    /* 02 */ uint8_t MajorLinkerVersion;
    /* 03 */ uint8_t MinorLinkerVersion;
    /* 04 */ uint32_t SizeOfCode;
    /* 08 */ uint32_t SizeOfInitializedData;
    /* 0c */ uint32_t SizeOfUninitializedData;
    /* 10 */ uint32_t AddressOfEntryPoint;
    /* 14 */ uint32_t BaseOfCode;
    /* 18 */ uint64_t ImageBase;
    /* 20 */ uint32_t SectionAlignment;
    /* 24 */ uint32_t FileAlignment;
    /* 28 */ uint16_t MajorOperatingSystemVersion;
    /* 2a */ uint16_t MinorOperatingSystemVersion;
    /* 2c */ uint16_t MajorImageVersion;
    /* 2e */ uint16_t MinorImageVersion;
    /* 30 */ uint16_t MajorSubsystemVersion;
    /* 32 */ uint16_t MinorSubsystemVersion;
    /* 34 */ uint32_t Win32VersionValue;
    /* 38 */ uint32_t SizeOfImage;
    /* 3c */ uint32_t SizeOfHeaders;
    /* 40 */ uint32_t CheckSum;
    /* 44 */ uint16_t Subsystem;
    /* 46 */ uint16_t DllCharacteristics;
    /* 48 */ uint64_t SizeOfStackReserve;
    /* 50 */ uint64_t SizeOfStackCommit;
    /* 58 */ uint64_t SizeOfHeapReserve;
    /* 60 */ uint64_t SizeOfHeapCommit;
    /* 68 */ uint32_t LoaderFlags;
    /* 6c */ uint32_t NumberOfRvaAndSizes;
    /* 70 */ std::array<_IMAGE_DATA_DIRECTORY, 16> DataDirectory;
};
using IMAGE_OPTIONAL_HEADER64  = struct _IMAGE_OPTIONAL_HEADER64;
using PIMAGE_OPTIONAL_HEADER64 = struct _IMAGE_OPTIONAL_HEADER64*;

struct _XSTATE_CONFIGURATION
{
    /* 00 */ uint64_t EnabledFeatures;
    /* 08 */ uint64_t EnabledVolatileFeatures;
    /* 10 */ uint32_t Size;
    /* 14 */ uint32_t ControlFlags;
    /* 14:0 */ uint32_t OptimizedSave          : 1;
    /* 14:1 */ uint32_t CompactionEnabled      : 1;
    /* 14:2 */ uint32_t ExtendedFeatureDisable : 1;
    /* 18 */ std::array<_XSTATE_FEATURE, 64> Features;
    /* 218 */ uint64_t EnabledSupervisorFeatures;
    /* 220 */ uint64_t AlignedFeatures;
    /* 228 */ uint32_t AllFeatureSize;
    /* 22c */ std::array<uint32_t, 64> AllFeatures;
    /* 330 */ uint64_t EnabledUserVisibleSupervisorFeatures;
    /* 338 */ uint64_t ExtendedFeatureDisableFeatures;
    /* 340 */ uint32_t AllNonLargeFeatureSize;
    /* 344 */ uint32_t Spare;
};
using XSTATE_CONFIGURATION  = struct _XSTATE_CONFIGURATION;
using PXSTATE_CONFIGURATION = struct _XSTATE_CONFIGURATION*;

struct _WHEA_NOTIFICATION_DESCRIPTOR
{
    /* 00 */ uint8_t Type;
    /* 01 */ uint8_t Length;
    /* 02 */ _WHEA_NOTIFICATION_FLAGS Flags;
    /* 04 */ union
    {
        /* 00 */ struct
        {
            /* 00 */ uint32_t PollInterval;
        } Polled;

        /* 00 */ struct
        {
            /* 00 */ uint32_t PollInterval;
            /* 04 */ uint32_t Vector;
            /* 08 */ uint32_t SwitchToPollingThreshold;
            /* 0c */ uint32_t SwitchToPollingWindow;
            /* 10 */ uint32_t ErrorThreshold;
            /* 14 */ uint32_t ErrorThresholdWindow;
        } Interrupt;

        /* 00 */ struct
        {
            /* 00 */ uint32_t PollInterval;
            /* 04 */ uint32_t Vector;
            /* 08 */ uint32_t SwitchToPollingThreshold;
            /* 0c */ uint32_t SwitchToPollingWindow;
            /* 10 */ uint32_t ErrorThreshold;
            /* 14 */ uint32_t ErrorThresholdWindow;
        } LocalInterrupt;

        /* 00 */ struct
        {
            /* 00 */ uint32_t PollInterval;
            /* 04 */ uint32_t Vector;
            /* 08 */ uint32_t SwitchToPollingThreshold;
            /* 0c */ uint32_t SwitchToPollingWindow;
            /* 10 */ uint32_t ErrorThreshold;
            /* 14 */ uint32_t ErrorThresholdWindow;
        } Sci;

        /* 00 */ struct
        {
            /* 00 */ uint32_t PollInterval;
            /* 04 */ uint32_t Vector;
            /* 08 */ uint32_t SwitchToPollingThreshold;
            /* 0c */ uint32_t SwitchToPollingWindow;
            /* 10 */ uint32_t ErrorThreshold;
            /* 14 */ uint32_t ErrorThresholdWindow;
        } Nmi;

        /* 00 */ struct
        {
            /* 00 */ uint32_t PollInterval;
            /* 04 */ uint32_t Vector;
            /* 08 */ uint32_t SwitchToPollingThreshold;
            /* 0c */ uint32_t SwitchToPollingWindow;
            /* 10 */ uint32_t ErrorThreshold;
            /* 14 */ uint32_t ErrorThresholdWindow;
        } Sea;

        /* 00 */ struct
        {
            /* 00 */ uint32_t PollInterval;
            /* 04 */ uint32_t Vector;
            /* 08 */ uint32_t SwitchToPollingThreshold;
            /* 0c */ uint32_t SwitchToPollingWindow;
            /* 10 */ uint32_t ErrorThreshold;
            /* 14 */ uint32_t ErrorThresholdWindow;
        } Sei;

        /* 00 */ struct
        {
            /* 00 */ uint32_t PollInterval;
            /* 04 */ uint32_t Vector;
            /* 08 */ uint32_t SwitchToPollingThreshold;
            /* 0c */ uint32_t SwitchToPollingWindow;
            /* 10 */ uint32_t ErrorThreshold;
            /* 14 */ uint32_t ErrorThresholdWindow;
        } Gsiv;
    } u;
};
using WHEA_NOTIFICATION_DESCRIPTOR  = struct _WHEA_NOTIFICATION_DESCRIPTOR;
using PWHEA_NOTIFICATION_DESCRIPTOR = struct _WHEA_NOTIFICATION_DESCRIPTOR*;

struct _KHETRO_HWFEEDBACK_TYPE
{
    /* 00 */ uint32_t Count;
    /* 04 */ std::array<_KHETERO_HWFEEDBACK_CLASS, 1> HwFeedbackClass;
};
using KHETRO_HWFEEDBACK_TYPE  = struct _KHETRO_HWFEEDBACK_TYPE;
using PKHETRO_HWFEEDBACK_TYPE = struct _KHETRO_HWFEEDBACK_TYPE*;

struct _PEBS_DS_SAVE_AREA
{
    /* 00 */ _PEBS_DS_SAVE_AREA32 As32Bit;
    /* 00 */ _PEBS_DS_SAVE_AREA64 As64Bit;
};
using PEBS_DS_SAVE_AREA  = struct _PEBS_DS_SAVE_AREA;
using PPEBS_DS_SAVE_AREA = struct _PEBS_DS_SAVE_AREA*;

struct _MACHINE_CHECK_CONTEXT
{
    /* 00 */ _MACHINE_FRAME MachineFrame;
    /* 28 */ uint64_t Rax;
    /* 30 */ uint64_t Rcx;
    /* 38 */ uint64_t Rdx;
    /* 40 */ uint64_t GsBase;
    /* 48 */ uint64_t Cr3;
};
using MACHINE_CHECK_CONTEXT  = struct _MACHINE_CHECK_CONTEXT;
using PMACHINE_CHECK_CONTEXT = struct _MACHINE_CHECK_CONTEXT*;

struct _PROCESSOR_IDLE_PREPARE_INFO
{
    /* 00 */ void* Context;
    /* 08 */ _PROCESSOR_IDLE_CONSTRAINTS Constraints;
    /* 38 */ uint32_t DependencyCount;
    /* 3c */ uint32_t DependencyUsed;
    /* 40 */ _PROCESSOR_IDLE_DEPENDENCY* DependencyArray;
    /* 48 */ uint32_t PlatformIdleStateIndex;
    /* 4c */ uint32_t ProcessorIdleStateIndex;
    /* 50 */ uint32_t IdleSelectFailureMask;
};
using PROCESSOR_IDLE_PREPARE_INFO  = struct _PROCESSOR_IDLE_PREPARE_INFO;
using PPROCESSOR_IDLE_PREPARE_INFO = struct _PROCESSOR_IDLE_PREPARE_INFO*;

struct _KTIMER_TABLE
{
    /* 00 */ std::array<_KTIMER*, 64> TimerExpiry;
    /* 200 */ std::array<std::array<_KTIMER_TABLE_ENTRY, 256>, 2> TimerEntries;
    /* 4200 */ _KTIMER_TABLE_STATE TableState;
};
using KTIMER_TABLE  = struct _KTIMER_TABLE;
using PKTIMER_TABLE = struct _KTIMER_TABLE*;

struct _KSPECIAL_REGISTERS
{
    /* 00 */ uint64_t Cr0;
    /* 08 */ uint64_t Cr2;
    /* 10 */ uint64_t Cr3;
    /* 18 */ uint64_t Cr4;
    /* 20 */ uint64_t KernelDr0;
    /* 28 */ uint64_t KernelDr1;
    /* 30 */ uint64_t KernelDr2;
    /* 38 */ uint64_t KernelDr3;
    /* 40 */ uint64_t KernelDr6;
    /* 48 */ uint64_t KernelDr7;
    /* 50 */ _KDESCRIPTOR Gdtr;
    /* 60 */ _KDESCRIPTOR Idtr;
    /* 70 */ uint16_t Tr;
    /* 72 */ uint16_t Ldtr;
    /* 74 */ uint32_t MxCsr;
    /* 78 */ uint64_t DebugControl;
    /* 80 */ uint64_t LastBranchToRip;
    /* 88 */ uint64_t LastBranchFromRip;
    /* 90 */ uint64_t LastExceptionToRip;
    /* 98 */ uint64_t LastExceptionFromRip;
    /* a0 */ uint64_t Cr8;
    /* a8 */ uint64_t MsrGsBase;
    /* b0 */ uint64_t MsrGsSwap;
    /* b8 */ uint64_t MsrStar;
    /* c0 */ uint64_t MsrLStar;
    /* c8 */ uint64_t MsrCStar;
    /* d0 */ uint64_t MsrSyscallMask;
    /* d8 */ uint64_t Xcr0;
    /* e0 */ uint64_t MsrFsBase;
    /* e8 */ uint64_t SpecialPadding0;
};
using KSPECIAL_REGISTERS  = struct _KSPECIAL_REGISTERS;
using PKSPECIAL_REGISTERS = struct _KSPECIAL_REGISTERS*;

struct _KSCHEDULER_SUBNODE
{
    /* 00 */ uint64_t SubNodeLock;
    /* 08 */ uint64_t IdleNonParkedCpuSet;
    /* 10 */ uint64_t IdleCpuSet;
    /* 18 */ uint64_t IdleSmtSet;
    /* 20 */ uint64_t IdleModuleSet;
    /* 10 */ std::array<uint64_t, 2> IdleIsolationUnitSet;
    /* 28 */ uint64_t NonPairedSmtSet;
    /* 40 */ uint64_t DeepIdleSet;
    /* 48 */ uint64_t IdleConstrainedSet;
    /* 50 */ uint64_t NonParkedSet;
    /* 58 */ uint64_t ParkRequestSet;
    /* 60 */ uint64_t SoftParkRequestSet;
    /* 68 */ uint64_t NonIsrTargetedSet;
    /* 70 */ int32_t ParkLock;
    /* 74 */ uint8_t ProcessSeed;
    /* 75 */ std::array<uint8_t, 3> Spare5;
    /* 80 */ _GROUP_AFFINITY Affinity;
    /* 80 */ std::array<uint8_t, 10> AffinityFill;
    /* 8a */ uint16_t ParentNodeNumber;
    /* 8c */ uint16_t SubNodeNumber;
    /* 8e */ uint16_t Spare;
    /* 90 */ uint64_t SiblingMask;
    /* 98 */ uint64_t SharedReadyQueueMask;
    /* a0 */ uint64_t StrideMask;
    /* a8 */ uint64_t LLCLeaders;
    /* b0 */ uint32_t Lowest;
    /* b4 */ uint32_t Highest;
    /* b8 */ _flags Flags;
    /* b9 */ uint8_t WorkloadClasses;
    /* c0 */ _KHETERO_PROCESSOR_SET* HeteroSets;
    /* c8 */ std::array<uint64_t, 7> PpmConfiguredQosSets;
    /* 100 */ _KQOS_GROUPING_SETS QosGroupingSets;
    /* 140 */ std::array<uint8_t, 64> SoftParkRanks;
};
using KSCHEDULER_SUBNODE  = struct _KSCHEDULER_SUBNODE;
using PKSCHEDULER_SUBNODE = struct _KSCHEDULER_SUBNODE*;

struct _PPM_SELECTION_DEPENDENCY
{
    /* 00 */ uint32_t Processor;
    /* 08 */ _PPM_SELECTION_MENU Menu;
};
using PPM_SELECTION_DEPENDENCY  = struct _PPM_SELECTION_DEPENDENCY;
using PPPM_SELECTION_DEPENDENCY = struct _PPM_SELECTION_DEPENDENCY*;

struct _RTL_NLS_STATE
{
    /* 00 */ _CPTABLEINFO DefaultAcpTableInfo;
    /* 40 */ _CPTABLEINFO DefaultOemTableInfo;
    /* 80 */ uint16_t* ActiveCodePageData;
    /* 88 */ uint16_t* OemCodePageData;
    /* 90 */ uint16_t* LeadByteInfo;
    /* 98 */ uint16_t* OemLeadByteInfo;
    /* a0 */ uint16_t* CaseMappingData;
    /* a8 */ uint16_t* UnicodeUpcaseTable844;
    /* b0 */ uint16_t* UnicodeLowercaseTable844;
};
using RTL_NLS_STATE  = struct _RTL_NLS_STATE;
using PRTL_NLS_STATE = struct _RTL_NLS_STATE*;

struct _PROC_PERF_CHECK
{
    /* 00 */ uint64_t LastActive;
    /* 08 */ uint64_t LastTime;
    /* 10 */ uint64_t LastStall;
    /* 18 */ uint32_t LastResponsivenessEvents;
    /* 20 */ _PROC_PERF_CHECK_SNAP LastPerfCheckSnap;
    /* 58 */ _PROC_PERF_CHECK_CYCLE_SNAP* LastPerfCheckCycleSnap;
    /* 60 */ _PROC_PERF_CHECK_SNAP CurrentSnap;
    /* 98 */ _PROC_PERF_CHECK_CYCLE_SNAP* CurrentCycleSnap;
    /* a0 */ _PROC_PERF_CHECK_SNAP LastDeliveredSnap;
    /* d8 */ _PROC_PERF_CHECK_CYCLE_SNAP* LastDeliveredCycleSnap;
    /* e0 */ uint32_t LastDeliveredPerformance;
    /* e4 */ uint32_t LastDeliveredFrequency;
    /* e8 */ std::array<uint8_t, 4> TaggedThreadPercent;
    /* ec */ uint8_t ImportantPercent;
    /* ed */ uint8_t IdealPercent;
    /* ee */ uint8_t Class0FloorPerfSelection;
    /* ef */ uint8_t Class1MinimumPerfSelection;
    /* f0 */ uint32_t CurrentResponsivenessEvents;
    /* f8 */ std::array<std::array<uint64_t, 48>, 3> CyclesByFreqBand;
};
using PROC_PERF_CHECK  = struct _PROC_PERF_CHECK;
using PPROC_PERF_CHECK = struct _PROC_PERF_CHECK*;

struct _PROC_IDLE_STATE_ACCOUNTING
{
    /* 00 */ uint64_t TotalTime;
    /* 08 */ uint32_t CancelCount;
    /* 0c */ uint32_t FailureCount;
    /* 10 */ uint32_t SuccessCount;
    /* 14 */ uint32_t InvalidBucketIndex;
    /* 18 */ uint64_t MinTime;
    /* 20 */ uint64_t MaxTime;
    /* 28 */ _PPM_SELECTION_STATISTICS SelectionStatistics;
    /* b0 */ std::array<_PROC_IDLE_STATE_BUCKET, 26> IdleTimeBuckets;
};
using PROC_IDLE_STATE_ACCOUNTING  = struct _PROC_IDLE_STATE_ACCOUNTING;
using PPROC_IDLE_STATE_ACCOUNTING = struct _PROC_IDLE_STATE_ACCOUNTING*;

struct _XSTATE_SAVE
{
    /* 00 */ _XSTATE_SAVE* Prev;
    /* 08 */ _KTHREAD* Thread;
    /* 10 */ uint8_t Level;
    /* 18 */ _XSTATE_CONTEXT XStateContext;
};
using XSTATE_SAVE  = struct _XSTATE_SAVE;
using PXSTATE_SAVE = struct _XSTATE_SAVE*;

struct _RTL_TIME_ZONE_INFORMATION
{
    /* 00 */ int32_t Bias;
    /* 04 */ std::array<wchar_t, 32> StandardName;
    /* 44 */ _TIME_FIELDS StandardStart;
    /* 54 */ int32_t StandardBias;
    /* 58 */ std::array<wchar_t, 32> DaylightName;
    /* 98 */ _TIME_FIELDS DaylightStart;
    /* a8 */ int32_t DaylightBias;
};
using RTL_TIME_ZONE_INFORMATION  = struct _RTL_TIME_ZONE_INFORMATION;
using PRTL_TIME_ZONE_INFORMATION = struct _RTL_TIME_ZONE_INFORMATION*;

struct _SILO_USER_SHARED_DATA
{
    /* 00 */ uint32_t ServiceSessionId;
    /* 04 */ uint32_t ActiveConsoleId;
    /* 08 */ int64_t ConsoleSessionForegroundProcessId;
    /* 10 */ _NT_PRODUCT_TYPE NtProductType;
    /* 14 */ uint32_t SuiteMask;
    /* 18 */ uint32_t SharedUserSessionId;
    /* 1c */ uint8_t IsMultiSessionSku;
    /* 1d */ uint8_t IsStateSeparationEnabled;
    /* 1e */ std::array<wchar_t, 260> NtSystemRoot;
    /* 226 */ std::array<uint16_t, 16> UserModeGlobalLogger;
    /* 248 */ uint32_t TimeZoneId;
    /* 24c */ int32_t TimeZoneBiasStamp;
    /* 250 */ _KSYSTEM_TIME TimeZoneBias;
    /* 260 */ _LARGE_INTEGER TimeZoneBiasEffectiveStart;
    /* 268 */ _LARGE_INTEGER TimeZoneBiasEffectiveEnd;
};
using SILO_USER_SHARED_DATA  = struct _SILO_USER_SHARED_DATA;
using PSILO_USER_SHARED_DATA = struct _SILO_USER_SHARED_DATA*;

struct _TP_CALLBACK_ENVIRON_V3
{
    /* 00 */ uint32_t Version;
    /* 08 */ _TP_POOL* Pool;
    /* 10 */ _TP_CLEANUP_GROUP* CleanupGroup;
    /* 18 */ std::function<void(void*, void*)> CleanupGroupCancelCallback;
    /* 20 */ void* RaceDll;
    /* 28 */ _ACTIVATION_CONTEXT* ActivationContext;
    /* 30 */ std::function<void(_TP_CALLBACK_INSTANCE*, void*)> FinalizationCallback;
    /* 38 */ union
    {
        /* 00 */ uint32_t Flags;
        /* 00 */ struct
        {
            /* 00:0 */ uint32_t LongFunction : 1;
            /* 00:1 */ uint32_t Persistent   : 1;
            /* 00:2 */ uint32_t Private      : 30;
        } s;
    } u;

    /* 3c */ _TP_CALLBACK_PRIORITY CallbackPriority;
    /* 40 */ uint32_t Size;
};
using TP_CALLBACK_ENVIRON_V3  = struct _TP_CALLBACK_ENVIRON_V3;
using PTP_CALLBACK_ENVIRON_V3 = struct _TP_CALLBACK_ENVIRON_V3*;

struct _GENERAL_LOOKASIDE
{
    /* 00 */ _SLIST_HEADER ListHead;
    /* 00 */ _SINGLE_LIST_ENTRY SingleListHead;
    /* 10 */ uint16_t Depth;
    /* 12 */ uint16_t MaximumDepth;
    /* 14 */ uint32_t TotalAllocates;
    /* 18 */ uint32_t AllocateMisses;
    /* 18 */ uint32_t AllocateHits;
    /* 1c */ uint32_t TotalFrees;
    /* 20 */ uint32_t FreeMisses;
    /* 20 */ uint32_t FreeHits;
    /* 24 */ _POOL_TYPE Type;
    /* 28 */ uint32_t Tag;
    /* 2c */ uint32_t Size;
    /* 30 */ std::function<void*(_POOL_TYPE, uint64_t, uint32_t, _LOOKASIDE_LIST_EX*)> AllocateEx;
    /* 30 */ std::function<void*(_POOL_TYPE, uint64_t, uint32_t)> Allocate;
    /* 38 */ std::function<void(void*, _LOOKASIDE_LIST_EX*)> FreeEx;
    /* 38 */ std::function<void(void*)> Free;
    /* 40 */ _LIST_ENTRY ListEntry;
    /* 50 */ uint32_t LastTotalAllocates;
    /* 54 */ uint32_t LastAllocateMisses;
    /* 54 */ uint32_t LastAllocateHits;
    /* 58 */ std::array<uint32_t, 2> Future;
};
using GENERAL_LOOKASIDE  = struct _GENERAL_LOOKASIDE;
using PGENERAL_LOOKASIDE = struct _GENERAL_LOOKASIDE*;

struct _GENERAL_LOOKASIDE_POOL
{
    /* 00 */ _SLIST_HEADER ListHead;
    /* 00 */ _SINGLE_LIST_ENTRY SingleListHead;
    /* 10 */ uint16_t Depth;
    /* 12 */ uint16_t MaximumDepth;
    /* 14 */ uint32_t TotalAllocates;
    /* 18 */ uint32_t AllocateMisses;
    /* 18 */ uint32_t AllocateHits;
    /* 1c */ uint32_t TotalFrees;
    /* 20 */ uint32_t FreeMisses;
    /* 20 */ uint32_t FreeHits;
    /* 24 */ _POOL_TYPE Type;
    /* 28 */ uint32_t Tag;
    /* 2c */ uint32_t Size;
    /* 30 */ std::function<void*(_POOL_TYPE, uint64_t, uint32_t, _LOOKASIDE_LIST_EX*)> AllocateEx;
    /* 30 */ std::function<void*(_POOL_TYPE, uint64_t, uint32_t)> Allocate;
    /* 38 */ std::function<void(void*, _LOOKASIDE_LIST_EX*)> FreeEx;
    /* 38 */ std::function<void(void*)> Free;
    /* 40 */ _LIST_ENTRY ListEntry;
    /* 50 */ uint32_t LastTotalAllocates;
    /* 54 */ uint32_t LastAllocateMisses;
    /* 54 */ uint32_t LastAllocateHits;
    /* 58 */ std::array<uint32_t, 2> Future;
};
using GENERAL_LOOKASIDE_POOL  = struct _GENERAL_LOOKASIDE_POOL;
using PGENERAL_LOOKASIDE_POOL = struct _GENERAL_LOOKASIDE_POOL*;

struct _OBJECT_TYPE_INITIALIZER
{
    /* 00 */ uint16_t Length;
    /* 02 */ uint16_t ObjectTypeFlags;
    /* 02:0 */ uint8_t CaseInsensitive         : 1;
    /* 02:1 */ uint8_t UnnamedObjectsOnly      : 1;
    /* 02:2 */ uint8_t UseDefaultObject        : 1;
    /* 02:3 */ uint8_t SecurityRequired        : 1;
    /* 02:4 */ uint8_t MaintainHandleCount     : 1;
    /* 02:5 */ uint8_t MaintainTypeList        : 1;
    /* 02:6 */ uint8_t SupportsObjectCallbacks : 1;
    /* 02:7 */ uint8_t CacheAligned            : 1;
    /* 03:0 */ uint8_t UseExtendedParameters   : 1;
    /* 03:1 */ uint8_t Reserved                : 7;
    /* 04 */ uint32_t ObjectTypeCode;
    /* 08 */ uint32_t InvalidAttributes;
    /* 0c */ _GENERIC_MAPPING GenericMapping;
    /* 1c */ uint32_t ValidAccessMask;
    /* 20 */ uint32_t RetainAccess;
    /* 24 */ _POOL_TYPE PoolType;
    /* 28 */ uint32_t DefaultPagedPoolCharge;
    /* 2c */ uint32_t DefaultNonPagedPoolCharge;
    /* 30 */ std::function<void(void*, _OBJECT_DUMP_CONTROL*)> DumpProcedure;
    /* 38 */ std::function<int32_t(_OB_OPEN_REASON, char, _EPROCESS*, void*, uint32_t*, uint32_t)> OpenProcedure;
    /* 40 */ std::function<void(_EPROCESS*, void*, uint64_t, uint64_t)> CloseProcedure;
    /* 48 */ std::function<void(void*)> DeleteProcedure;
    /* 50 */ std::function<int32_t(
        void*, void*, _ACCESS_STATE*, char, uint32_t, _UNICODE_STRING*, _UNICODE_STRING*, void*, _SECURITY_QUALITY_OF_SERVICE*, void**)>
        ParseProcedure;
    /* 50 */ std::function<int32_t(void*,
                                   void*,
                                   _ACCESS_STATE*,
                                   char,
                                   uint32_t,
                                   _UNICODE_STRING*,
                                   _UNICODE_STRING*,
                                   void*,
                                   _SECURITY_QUALITY_OF_SERVICE*,
                                   _OB_EXTENDED_PARSE_PARAMETERS*,
                                   void**)>
        ParseProcedureEx;
    /* 58 */ std::function<int32_t(void*, _SECURITY_OPERATION_CODE, uint32_t*, void*, uint32_t*, void**, _POOL_TYPE, _GENERIC_MAPPING*, char)>
        SecurityProcedure;
    /* 60 */ std::function<int32_t(void*, uint8_t, _OBJECT_NAME_INFORMATION*, uint32_t, uint32_t*, char)> QueryNameProcedure;
    /* 68 */ std::function<uint8_t(_EPROCESS*, void*, void*, char)> OkayToCloseProcedure;
    /* 70 */ uint32_t WaitObjectFlagMask;
    /* 74 */ uint16_t WaitObjectFlagOffset;
    /* 76 */ uint16_t WaitObjectPointerOffset;
};
using OBJECT_TYPE_INITIALIZER  = struct _OBJECT_TYPE_INITIALIZER;
using POBJECT_TYPE_INITIALIZER = struct _OBJECT_TYPE_INITIALIZER*;

struct _EWOW64PROCESS
{
    /* 00 */ void* Peb;
    /* 08 */ _SYSTEM_DLL_TYPE NtdllType;
};
using EWOW64PROCESS  = struct _EWOW64PROCESS;
using PEWOW64PROCESS = struct _EWOW64PROCESS*;

struct SYSTEM_POWER_CAPABILITIES
{
    /* 00 */ uint8_t PowerButtonPresent;
    /* 01 */ uint8_t SleepButtonPresent;
    /* 02 */ uint8_t LidPresent;
    /* 03 */ uint8_t SystemS1;
    /* 04 */ uint8_t SystemS2;
    /* 05 */ uint8_t SystemS3;
    /* 06 */ uint8_t SystemS4;
    /* 07 */ uint8_t SystemS5;
    /* 08 */ uint8_t HiberFilePresent;
    /* 09 */ uint8_t FullWake;
    /* 0a */ uint8_t VideoDimPresent;
    /* 0b */ uint8_t ApmPresent;
    /* 0c */ uint8_t UpsPresent;
    /* 0d */ uint8_t ThermalControl;
    /* 0e */ uint8_t ProcessorThrottle;
    /* 0f */ uint8_t ProcessorMinThrottle;
    /* 10 */ uint8_t ProcessorMaxThrottle;
    /* 11 */ uint8_t FastSystemS4;
    /* 12 */ uint8_t Hiberboot;
    /* 13 */ uint8_t WakeAlarmPresent;
    /* 14 */ uint8_t AoAc;
    /* 15 */ uint8_t DiskSpinDown;
    /* 16 */ uint8_t HiberFileType;
    /* 17 */ uint8_t AoAcConnectivitySupported;
    /* 18 */ std::array<uint8_t, 6> spare3;
    /* 1e */ uint8_t SystemBatteriesPresent;
    /* 1f */ uint8_t BatteriesAreShortTerm;
    /* 20 */ std::array<BATTERY_REPORTING_SCALE, 3> BatteryScale;
    /* 38 */ _SYSTEM_POWER_STATE AcOnLineWake;
    /* 3c */ _SYSTEM_POWER_STATE SoftLidWake;
    /* 40 */ _SYSTEM_POWER_STATE RtcWake;
    /* 44 */ _SYSTEM_POWER_STATE MinDeviceWakeState;
    /* 48 */ _SYSTEM_POWER_STATE DefaultLowLatencyWake;
};

struct _IO_PRIORITY_INFO
{
    /* 00 */ uint32_t Size;
    /* 04 */ uint32_t ThreadPriority;
    /* 08 */ uint32_t PagePriority;
    /* 0c */ _IO_PRIORITY_HINT IoPriority;
};
using IO_PRIORITY_INFO  = struct _IO_PRIORITY_INFO;
using PIO_PRIORITY_INFO = struct _IO_PRIORITY_INFO*;

struct _MM_PAGE_ACCESS_INFO_HEADER
{
    /* 00 */ _SINGLE_LIST_ENTRY Link;
    /* 08 */ _MM_PAGE_ACCESS_TYPE Type;
    /* 0c */ uint32_t EmptySequenceNumber;
    /* 0c */ uint32_t CurrentFileIndex;
    /* 10 */ uint64_t CreateTime;
    /* 18 */ uint64_t EmptyTime;
    /* 18 */ _MM_PAGE_ACCESS_INFO* TempEntry;
    /* 20 */ _MM_PAGE_ACCESS_INFO* PageEntry;
    /* 28 */ uint64_t* FileEntry;
    /* 30 */ uint64_t* FirstFileEntry;
    /* 38 */ _EPROCESS* Process;
    /* 40 */ uint32_t SessionId;
    /* 20 */ uint64_t* PageFrameEntry;
    /* 28 */ uint64_t* LastPageFrameEntry;
};
using MM_PAGE_ACCESS_INFO_HEADER  = struct _MM_PAGE_ACCESS_INFO_HEADER;
using PMM_PAGE_ACCESS_INFO_HEADER = struct _MM_PAGE_ACCESS_INFO_HEADER*;

struct _DEVICE_CAPABILITIES
{
    /* 00 */ uint16_t Size;
    /* 02 */ uint16_t Version;
    /* 04:0 */ uint32_t DeviceD1                 : 1;
    /* 04:1 */ uint32_t DeviceD2                 : 1;
    /* 04:2 */ uint32_t LockSupported            : 1;
    /* 04:3 */ uint32_t EjectSupported           : 1;
    /* 04:4 */ uint32_t Removable                : 1;
    /* 04:5 */ uint32_t DockDevice               : 1;
    /* 04:6 */ uint32_t UniqueID                 : 1;
    /* 04:7 */ uint32_t SilentInstall            : 1;
    /* 04:8 */ uint32_t RawDeviceOK              : 1;
    /* 04:9 */ uint32_t SurpriseRemovalOK        : 1;
    /* 04:10 */ uint32_t WakeFromD0              : 1;
    /* 04:11 */ uint32_t WakeFromD1              : 1;
    /* 04:12 */ uint32_t WakeFromD2              : 1;
    /* 04:13 */ uint32_t WakeFromD3              : 1;
    /* 04:14 */ uint32_t HardwareDisabled        : 1;
    /* 04:15 */ uint32_t NonDynamic              : 1;
    /* 04:16 */ uint32_t WarmEjectSupported      : 1;
    /* 04:17 */ uint32_t NoDisplayInUI           : 1;
    /* 04:18 */ uint32_t Reserved1               : 1;
    /* 04:19 */ uint32_t WakeFromInterrupt       : 1;
    /* 04:20 */ uint32_t SecureDevice            : 1;
    /* 04:21 */ uint32_t ChildOfVgaEnabledBridge : 1;
    /* 04:22 */ uint32_t DecodeIoOnBoot          : 1;
    /* 04:23 */ uint32_t Reserved                : 9;
    /* 08 */ uint32_t Address;
    /* 0c */ uint32_t UINumber;
    /* 10 */ std::array<_DEVICE_POWER_STATE, 7> DeviceState;
    /* 2c */ _SYSTEM_POWER_STATE SystemWake;
    /* 30 */ _DEVICE_POWER_STATE DeviceWake;
    /* 34 */ uint32_t D1Latency;
    /* 38 */ uint32_t D2Latency;
    /* 3c */ uint32_t D3Latency;
};
using DEVICE_CAPABILITIES  = struct _DEVICE_CAPABILITIES;
using PDEVICE_CAPABILITIES = struct _DEVICE_CAPABILITIES*;

union _POWER_STATE
{
    /* 00 */ _SYSTEM_POWER_STATE SystemState;
    /* 00 */ _DEVICE_POWER_STATE DeviceState;
};
using POWER_STATE  = union _POWER_STATE;
using PPOWER_STATE = union _POWER_STATE*;

struct _WHEA_EVENT_LOG_ENTRY_HEADER
{
    /* 00 */ uint32_t Signature;
    /* 04 */ uint32_t Version;
    /* 08 */ uint32_t Length;
    /* 0c */ _WHEA_EVENT_LOG_ENTRY_TYPE Type;
    /* 10 */ uint32_t OwnerTag;
    /* 14 */ _WHEA_EVENT_LOG_ENTRY_ID Id;
    /* 18 */ _WHEA_EVENT_LOG_ENTRY_FLAGS Flags;
    /* 1c */ uint32_t PayloadLength;
};
using WHEA_EVENT_LOG_ENTRY_HEADER  = struct _WHEA_EVENT_LOG_ENTRY_HEADER;
using PWHEA_EVENT_LOG_ENTRY_HEADER = struct _WHEA_EVENT_LOG_ENTRY_HEADER*;

struct _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR
{
    /* 00 */ uint32_t SectionOffset;
    /* 04 */ uint32_t SectionLength;
    /* 08 */ _WHEA_REVISION Revision;
    /* 0a */ _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_VALIDBITS ValidBits;
    /* 0b */ uint8_t Reserved;
    /* 0c */ _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_FLAGS Flags;
    /* 10 */ _GUID SectionType;
    /* 20 */ _GUID FRUId;
    /* 30 */ _WHEA_ERROR_SEVERITY SectionSeverity;
    /* 34 */ std::array<char, 20> FRUText;
};
using WHEA_ERROR_RECORD_SECTION_DESCRIPTOR  = struct _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR;
using PWHEA_ERROR_RECORD_SECTION_DESCRIPTOR = struct _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR*;

struct _WHEA_ERROR_PACKET_V2
{
    /* 00 */ uint32_t Signature;
    /* 04 */ uint32_t Version;
    /* 08 */ uint32_t Length;
    /* 0c */ _WHEA_ERROR_PACKET_FLAGS Flags;
    /* 10 */ _WHEA_ERROR_TYPE ErrorType;
    /* 14 */ _WHEA_ERROR_SEVERITY ErrorSeverity;
    /* 18 */ uint32_t ErrorSourceId;
    /* 1c */ _WHEA_ERROR_SOURCE_TYPE ErrorSourceType;
    /* 20 */ _GUID NotifyType;
    /* 30 */ uint64_t Context;
    /* 38 */ _WHEA_ERROR_PACKET_DATA_FORMAT DataFormat;
    /* 3c */ uint32_t Reserved1;
    /* 40 */ uint32_t DataOffset;
    /* 44 */ uint32_t DataLength;
    /* 48 */ uint32_t PshedDataOffset;
    /* 4c */ uint32_t PshedDataLength;
};
using WHEA_ERROR_PACKET_V2  = struct _WHEA_ERROR_PACKET_V2;
using PWHEA_ERROR_PACKET_V2 = struct _WHEA_ERROR_PACKET_V2*;

struct _LDR_DATA_TABLE_ENTRY
{
    /* 00 */ _LIST_ENTRY InLoadOrderLinks;
    /* 10 */ _LIST_ENTRY InMemoryOrderLinks;
    /* 20 */ _LIST_ENTRY InInitializationOrderLinks;
    /* 30 */ void* DllBase;
    /* 38 */ void* EntryPoint;
    /* 40 */ uint32_t SizeOfImage;
    /* 48 */ _UNICODE_STRING FullDllName;
    /* 58 */ _UNICODE_STRING BaseDllName;
    /* 68 */ std::array<uint8_t, 4> FlagGroup;
    /* 68 */ uint32_t Flags;
    /* 68:0 */ uint32_t PackagedBinary           : 1;
    /* 68:1 */ uint32_t MarkedForRemoval         : 1;
    /* 68:2 */ uint32_t ImageDll                 : 1;
    /* 68:3 */ uint32_t LoadNotificationsSent    : 1;
    /* 68:4 */ uint32_t TelemetryEntryProcessed  : 1;
    /* 68:5 */ uint32_t ProcessStaticImport      : 1;
    /* 68:6 */ uint32_t InLegacyLists            : 1;
    /* 68:7 */ uint32_t InIndexes                : 1;
    /* 68:8 */ uint32_t ShimDll                  : 1;
    /* 68:9 */ uint32_t InExceptionTable         : 1;
    /* 68:10 */ uint32_t ReservedFlags1          : 2;
    /* 68:12 */ uint32_t LoadInProgress          : 1;
    /* 68:13 */ uint32_t LoadConfigProcessed     : 1;
    /* 68:14 */ uint32_t EntryProcessed          : 1;
    /* 68:15 */ uint32_t ProtectDelayLoad        : 1;
    /* 68:16 */ uint32_t ReservedFlags3          : 2;
    /* 68:18 */ uint32_t DontCallForThreads      : 1;
    /* 68:19 */ uint32_t ProcessAttachCalled     : 1;
    /* 68:20 */ uint32_t ProcessAttachFailed     : 1;
    /* 68:21 */ uint32_t CorDeferredValidate     : 1;
    /* 68:22 */ uint32_t CorImage                : 1;
    /* 68:23 */ uint32_t DontRelocate            : 1;
    /* 68:24 */ uint32_t CorILOnly               : 1;
    /* 68:25 */ uint32_t ChpeImage               : 1;
    /* 68:26 */ uint32_t ChpeEmulatorImage       : 1;
    /* 68:27 */ uint32_t ReservedFlags5          : 1;
    /* 68:28 */ uint32_t Redirected              : 1;
    /* 68:29 */ uint32_t ReservedFlags6          : 2;
    /* 68:31 */ uint32_t CompatDatabaseProcessed : 1;
    /* 6c */ uint16_t ObsoleteLoadCount;
    /* 6e */ uint16_t TlsIndex;
    /* 70 */ _LIST_ENTRY HashLinks;
    /* 80 */ uint32_t TimeDateStamp;
    /* 88 */ _ACTIVATION_CONTEXT* EntryPointActivationContext;
    /* 90 */ void* Lock;
    /* 98 */ _LDR_DDAG_NODE* DdagNode;
    /* a0 */ _LIST_ENTRY NodeModuleLink;
    /* b0 */ _LDRP_LOAD_CONTEXT* LoadContext;
    /* b8 */ void* ParentDllBase;
    /* c0 */ void* SwitchBackContext;
    /* c8 */ _RTL_BALANCED_NODE BaseAddressIndexNode;
    /* e0 */ _RTL_BALANCED_NODE MappingInfoIndexNode;
    /* f8 */ uint64_t OriginalBase;
    /* 100 */ _LARGE_INTEGER LoadTime;
    /* 108 */ uint32_t BaseNameHashValue;
    /* 10c */ _LDR_DLL_LOAD_REASON LoadReason;
    /* 110 */ uint32_t ImplicitPathOptions;
    /* 114 */ uint32_t ReferenceCount;
    /* 118 */ uint32_t DependentLoadFlags;
    /* 11c */ uint8_t SigningLevel;
    /* 120 */ uint32_t CheckSum;
    /* 128 */ void* ActivePatchImageBase;
    /* 130 */ _LDR_HOT_PATCH_STATE HotPatchState;
};
using LDR_DATA_TABLE_ENTRY  = struct _LDR_DATA_TABLE_ENTRY;
using PLDR_DATA_TABLE_ENTRY = struct _LDR_DATA_TABLE_ENTRY*;

struct _KCLOCK_TIMER_STATE
{
    /* 00 */ uint64_t NextTickDueTime;
    /* 08 */ uint32_t TimeIncrement;
    /* 0c */ uint32_t LastRequestedTimeIncrement;
    /* 10 */ _KCLOCK_TIMER_ONE_SHOT_STATE OneShotState;
    /* 14 */ _KCLOCK_TIMER_DEADLINE_TYPE ExpectedWakeReason;
    /* 18 */ std::array<_KCLOCK_TIMER_DEADLINE_ENTRY, 7> ClockTimerEntries;
    /* 88 */ uint8_t ClockActive;
    /* 8c */ uint32_t ClockTickTraceIndex;
    /* 90 */ uint32_t ClockIncrementTraceIndex;
    /* 98 */ std::array<_KCLOCK_TICK_TRACE, 16> ClockTickTraces;
    /* 318 */ std::array<_KCLOCK_INCREMENT_TRACE, 16> ClockIncrementTraces;
};
using KCLOCK_TIMER_STATE  = struct _KCLOCK_TIMER_STATE;
using PKCLOCK_TIMER_STATE = struct _KCLOCK_TIMER_STATE*;

struct _LDR_DDAG_NODE
{
    /* 00 */ _LIST_ENTRY Modules;
    /* 10 */ _LDR_SERVICE_TAG_RECORD* ServiceTagList;
    /* 18 */ uint32_t LoadCount;
    /* 1c */ uint32_t LoadWhileUnloadingCount;
    /* 20 */ uint32_t LowestLink;
    /* 28 */ _LDRP_CSLIST Dependencies;
    /* 30 */ _LDRP_CSLIST IncomingDependencies;
    /* 38 */ _LDR_DDAG_STATE State;
    /* 40 */ _SINGLE_LIST_ENTRY CondenseLink;
    /* 48 */ uint32_t PreorderNumber;
};
using LDR_DDAG_NODE  = struct _LDR_DDAG_NODE;
using PLDR_DDAG_NODE = struct _LDR_DDAG_NODE*;

struct _COUNTER_READING
{
    /* 00 */ _HARDWARE_COUNTER_TYPE Type;
    /* 04 */ uint32_t Index;
    /* 08 */ uint64_t Start;
    /* 10 */ uint64_t Total;
};
using COUNTER_READING  = struct _COUNTER_READING;
using PCOUNTER_READING = struct _COUNTER_READING*;

struct _CACHE_DESCRIPTOR
{
    /* 00 */ uint8_t Level;
    /* 01 */ uint8_t Associativity;
    /* 02 */ uint16_t LineSize;
    /* 04 */ uint32_t Size;
    /* 08 */ _PROCESSOR_CACHE_TYPE Type;
};
using CACHE_DESCRIPTOR  = struct _CACHE_DESCRIPTOR;
using PCACHE_DESCRIPTOR = struct _CACHE_DESCRIPTOR*;

struct _SECURITY_QUALITY_OF_SERVICE
{
    /* 00 */ uint32_t Length;
    /* 04 */ _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;
    /* 08 */ uint8_t ContextTrackingMode;
    /* 09 */ uint8_t EffectiveOnly;
};
using SECURITY_QUALITY_OF_SERVICE  = struct _SECURITY_QUALITY_OF_SERVICE;
using PSECURITY_QUALITY_OF_SERVICE = struct _SECURITY_QUALITY_OF_SERVICE*;

struct _SECURITY_SUBJECT_CONTEXT
{
    /* 00 */ void* ClientToken;
    /* 08 */ _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;
    /* 10 */ void* PrimaryToken;
    /* 18 */ void* ProcessAuditId;
};
using SECURITY_SUBJECT_CONTEXT  = struct _SECURITY_SUBJECT_CONTEXT;
using PSECURITY_SUBJECT_CONTEXT = struct _SECURITY_SUBJECT_CONTEXT*;

struct _MCA_EXCEPTION
{
    /* 00 */ uint32_t VersionNumber;
    /* 04 */ MCA_EXCEPTION_TYPE ExceptionType;
    /* 08 */ _LARGE_INTEGER TimeStamp;
    /* 10 */ uint32_t ProcessorNumber;
    /* 14 */ uint32_t Reserved1;
    /* 18 */ union
    {
        /* 00 */ struct
        {
            /* 00 */ uint8_t BankNumber;
            /* 01 */ std::array<uint8_t, 7> Reserved2;
            /* 08 */ _MCI_STATS Status;
            /* 10 */ _MCI_ADDR Address;
            /* 18 */ uint64_t Misc;
        } Mca;

        /* 00 */ struct
        {
            /* 00 */ uint64_t Address;
            /* 08 */ uint64_t Type;
        } Mce;
    } u;

    /* 38 */ uint32_t ExtCnt;
    /* 3c */ uint32_t Reserved3;
    /* 40 */ std::array<uint64_t, 24> ExtReg;
};
using MCA_EXCEPTION  = struct _MCA_EXCEPTION;
using PMCA_EXCEPTION = struct _MCA_EXCEPTION*;

struct _DYNAMIC_FUNCTION_TABLE
{
    /* 00 */ _LIST_ENTRY ListEntry;
    /* 10 */ _IMAGE_RUNTIME_FUNCTION_ENTRY* FunctionTable;
    /* 18 */ _LARGE_INTEGER TimeStamp;
    /* 20 */ uint64_t MinimumAddress;
    /* 28 */ uint64_t MaximumAddress;
    /* 30 */ uint64_t BaseAddress;
    /* 38 */ std::function<_IMAGE_RUNTIME_FUNCTION_ENTRY*(uint64_t, void*)> Callback;
    /* 40 */ void* Context;
    /* 48 */ wchar_t* OutOfProcessCallbackDll;
    /* 50 */ _FUNCTION_TABLE_TYPE Type;
    /* 54 */ uint32_t EntryCount;
    /* 58 */ _RTL_BALANCED_NODE TreeNodeMin;
    /* 70 */ _RTL_BALANCED_NODE TreeNodeMax;
};
using DYNAMIC_FUNCTION_TABLE  = struct _DYNAMIC_FUNCTION_TABLE;
using PDYNAMIC_FUNCTION_TABLE = struct _DYNAMIC_FUNCTION_TABLE*;

struct _PROC_PERF_DOMAIN
{
    /* 00 */ _LIST_ENTRY Link;
    /* 10 */ _PROC_PERF_CHECK_CONTEXT* Master;
    /* 18 */ _KAFFINITY_EX Members;
    /* 120 */ uint64_t DomainContext;
    /* 128 */ uint32_t ProcessorCount;
    /* 12c */ uint8_t EfficiencyClass;
    /* 12d */ uint8_t NominalPerformanceClass;
    /* 12e */ uint8_t HighestPerformanceClass;
    /* 130 */ _PROCESSOR_PRESENCE Presence;
    /* 138 */ _PROC_PERF_CONSTRAINT* Processors;
    /* 140 */ std::function<void(uint64_t*)> GetFFHThrottleState;
    /* 148 */ std::function<void(uint64_t, uint32_t)> TimeWindowHandler;
    /* 150 */ std::function<void(uint64_t, uint32_t)> BoostPolicyHandler;
    /* 158 */ std::function<void(uint64_t, uint32_t)> BoostModeHandler;
    /* 160 */ std::function<void(uint64_t, uint32_t)> AutonomousActivityWindowHandler;
    /* 168 */ std::function<void(uint64_t, uint32_t)> AutonomousModeHandler;
    /* 170 */ std::function<void(uint64_t)> ReinitializeHandler;
    /* 178 */ std::function<uint32_t(uint64_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t*, uint64_t*)>
        PerfSelectionHandler;
    /* 180 */ std::function<void(uint64_t, _PERF_CONTROL_STATE_SELECTION*, uint8_t, uint8_t)> PerfControlHandler;
    /* 188 */ std::function<void(uint64_t, _PERF_CONTROL_STATE_SELECTION*, uint8_t, uint8_t)> PerfControlHandlerHidden;
    /* 190 */ std::function<void(uint64_t, _PERF_CONTROL_STATE_SELECTION*, uint8_t, uint8_t)> DomainPerfControlHandler;
    /* 198 */ std::function<void(uint64_t, uint64_t, uint8_t)> PerfUpdateHwDebugData;
    /* 1a0 */ std::function<uint32_t()> PerfQueryProcMeasurementCapabilities;
    /* 1a8 */ std::function<int32_t(uint32_t, uint32_t*, void*, uint32_t)> PerfQueryProcMeasurementValues;
    /* 1b0 */ uint32_t Id;
    /* 1b4 */ uint32_t MaxFrequency;
    /* 1b8 */ uint32_t NominalFrequency;
    /* 1bc */ uint32_t MaxPercent;
    /* 1c0 */ uint32_t MinPerfPercent;
    /* 1c4 */ uint32_t MinThrottlePercent;
    /* 1c8 */ uint32_t AdvertizedMaximumFrequency;
    /* 1d0 */ uint64_t MinimumRelativePerformance;
    /* 1d8 */ uint64_t NominalRelativePerformance;
    /* 1e0 */ uint8_t NominalRelativePerformancePercent;
    /* 1e1 */ uint8_t Coordination;
    /* 1e2 */ uint8_t HardPlatformCap;
    /* 1e3 */ uint8_t AffinitizeControl;
    /* 1e4 */ uint8_t EfficientThrottle;
    /* 1e5 */ uint8_t AllowSchedulerDirectedPerfStates;
    /* 1e6 */ uint8_t InitiateAllProcessors;
    /* 1e7 */ uint8_t AllowVmPerfSelection;
    /* 1e8 */ uint8_t TurboRangeKnown;
    /* 1ec */ uint32_t VmFrequencyStepMhz;
    /* 1f0 */ uint32_t VmHighestFrequencyMhz;
    /* 1f4 */ uint32_t VmNominalFrequencyMhz;
    /* 1f8 */ uint32_t VmLowestFrequencyMhz;
    /* 1fc */ uint8_t AutonomousMode;
    /* 1fd */ uint8_t AutonomousCapability;
    /* 1fe */ uint8_t ProvideGuidance;
    /* 200 */ uint32_t DesiredPercent;
    /* 204 */ uint32_t GuaranteedPercent;
    /* 208 */ uint8_t EngageResponsivenessOverrides;
    /* 20c */ std::array<_PROC_PERF_QOS_CLASS_POLICY, 7> QosPolicies;
    /* 2d0 */ std::array<uint32_t, 7> QosDisableReasons;
    /* 2ec */ std::array<uint16_t, 7> QosEquivalencyMasks;
    /* 2fa */ uint8_t QosSupported;
    /* 2fc */ uint32_t SelectionGeneration;
    /* 300 */ std::array<_PERF_CONTROL_STATE_SELECTION, 7> QosSelection;
    /* 418 */ uint64_t PerfChangeTime;
    /* 420 */ uint32_t PerfChangeIntervalCount;
    /* 424 */ uint8_t Force;
    /* 425 */ uint8_t Update;
    /* 426 */ uint8_t Apply;
};
using PROC_PERF_DOMAIN  = struct _PROC_PERF_DOMAIN;
using PPROC_PERF_DOMAIN = struct _PROC_PERF_DOMAIN*;

struct _PROC_PERF_CONSTRAINT
{
    /* 00 */ _PROC_PERF_CHECK_CONTEXT* CheckContext;
    /* 08 */ uint64_t PerfContext;
    /* 10 */ _PROCESSOR_PRESENCE Presence;
    /* 14 */ uint32_t ProcessorId;
    /* 18 */ uint32_t PlatformCap;
    /* 1c */ uint32_t ThermalCap;
    /* 20 */ uint32_t LimitReasons;
    /* 28 */ uint64_t PlatformCapStartTime;
    /* 30 */ uint32_t ProcCap;
    /* 34 */ uint32_t ProcFloor;
    /* 38 */ uint32_t TargetPercent;
    /* 3c */ uint8_t EngageResponsivenessOverrides;
    /* 3d */ uint8_t ResponsivenessChangeCount;
    /* 40 */ _PERF_CONTROL_STATE_SELECTION Selection;
    /* 68 */ uint32_t DomainSelectionGeneration;
    /* 6c */ uint32_t PreviousFrequency;
    /* 70 */ uint32_t PreviousPercent;
    /* 74 */ uint32_t LatestFrequencyPercent;
    /* 78 */ uint32_t LatestPerformancePercent;
    /* 7c */ uint8_t Force;
    /* 7d */ uint8_t UseQosUpdateLock;
    /* 80 */ uint64_t QosUpdateLock;
    /* 88 */ uint32_t IncreasePerfCheckCount;
    /* 8c */ uint32_t DecreasePerfCheckCount;
};
using PROC_PERF_CONSTRAINT  = struct _PROC_PERF_CONSTRAINT;
using PPROC_PERF_CONSTRAINT = struct _PROC_PERF_CONSTRAINT*;

struct _IO_RESOURCE_DESCRIPTOR
{
    /* 00 */ uint8_t Option;
    /* 01 */ uint8_t Type;
    /* 02 */ uint8_t ShareDisposition;
    /* 03 */ uint8_t Spare1;
    /* 04 */ uint16_t Flags;
    /* 06 */ uint16_t Spare2;
    /* 08 */ union
    {
        /* 00 */ struct
        {
            /* 00 */ uint32_t Length;
            /* 04 */ uint32_t Alignment;
            /* 08 */ _LARGE_INTEGER MinimumAddress;
            /* 10 */ _LARGE_INTEGER MaximumAddress;
        } Port;

        /* 00 */ struct
        {
            /* 00 */ uint32_t Length;
            /* 04 */ uint32_t Alignment;
            /* 08 */ _LARGE_INTEGER MinimumAddress;
            /* 10 */ _LARGE_INTEGER MaximumAddress;
        } Memory;

        /* 00 */ struct
        {
            /* 00 */ uint32_t MinimumVector;
            /* 04 */ uint32_t MaximumVector;
            /* 08 */ uint16_t AffinityPolicy;
            /* 0a */ uint16_t Group;
            /* 0c */ _IRQ_PRIORITY PriorityPolicy;
            /* 10 */ uint64_t TargetedProcessors;
        } Interrupt;

        /* 00 */ struct
        {
            /* 00 */ uint32_t MinimumChannel;
            /* 04 */ uint32_t MaximumChannel;
        } Dma;

        /* 00 */ struct
        {
            /* 00 */ uint32_t RequestLine;
            /* 04 */ uint32_t Reserved;
            /* 08 */ uint32_t Channel;
            /* 0c */ uint32_t TransferWidth;
        } DmaV3;

        /* 00 */ struct
        {
            /* 00 */ uint32_t Length;
            /* 04 */ uint32_t Alignment;
            /* 08 */ _LARGE_INTEGER MinimumAddress;
            /* 10 */ _LARGE_INTEGER MaximumAddress;
        } Generic;

        /* 00 */ struct
        {
            /* 00 */ std::array<uint32_t, 3> Data;
        } DevicePrivate;

        /* 00 */ struct
        {
            /* 00 */ uint32_t Length;
            /* 04 */ uint32_t MinBusNumber;
            /* 08 */ uint32_t MaxBusNumber;
            /* 0c */ uint32_t Reserved;
        } BusNumber;

        /* 00 */ struct
        {
            /* 00 */ uint32_t Priority;
            /* 04 */ uint32_t Reserved1;
            /* 08 */ uint32_t Reserved2;
        } ConfigData;

        /* 00 */ struct
        {
            /* 00 */ uint32_t Length40;
            /* 04 */ uint32_t Alignment40;
            /* 08 */ _LARGE_INTEGER MinimumAddress;
            /* 10 */ _LARGE_INTEGER MaximumAddress;
        } Memory40;

        /* 00 */ struct
        {
            /* 00 */ uint32_t Length48;
            /* 04 */ uint32_t Alignment48;
            /* 08 */ _LARGE_INTEGER MinimumAddress;
            /* 10 */ _LARGE_INTEGER MaximumAddress;
        } Memory48;

        /* 00 */ struct
        {
            /* 00 */ uint32_t Length64;
            /* 04 */ uint32_t Alignment64;
            /* 08 */ _LARGE_INTEGER MinimumAddress;
            /* 10 */ _LARGE_INTEGER MaximumAddress;
        } Memory64;

        /* 00 */ struct
        {
            /* 00 */ uint8_t Class;
            /* 01 */ uint8_t Type;
            /* 02 */ uint8_t Reserved1;
            /* 03 */ uint8_t Reserved2;
            /* 04 */ uint32_t IdLowPart;
            /* 08 */ uint32_t IdHighPart;
        } Connection;
    } u;
};
using IO_RESOURCE_DESCRIPTOR  = struct _IO_RESOURCE_DESCRIPTOR;
using PIO_RESOURCE_DESCRIPTOR = struct _IO_RESOURCE_DESCRIPTOR*;

union _FS_FILTER_PARAMETERS
{
    /* 00 */ struct
    {
        /* 00 */ _LARGE_INTEGER* EndingOffset;
        /* 08 */ _ERESOURCE** ResourceToRelease;
    } AcquireForModifiedPageWriter;

    /* 00 */ struct
    {
        /* 00 */ _ERESOURCE* ResourceToRelease;
    } ReleaseForModifiedPageWriter;

    /* 00 */ struct
    {
        /* 00 */ _FS_FILTER_SECTION_SYNC_TYPE SyncType;
        /* 04 */ uint32_t PageProtection;
        /* 08 */ _FS_FILTER_SECTION_SYNC_OUTPUT* OutputInformation;
        /* 10 */ uint32_t Flags;
        /* 14 */ uint32_t AllocationAttributes;
    } AcquireForSectionSynchronization;

    /* 00 */ struct
    {
        /* 00 */ _IRP* Irp;
        /* 08 */ void* FileInformation;
        /* 10 */ uint32_t* Length;
        /* 18 */ _FILE_INFORMATION_CLASS FileInformationClass;
        /* 1c */ int32_t CompletionStatus;
    } QueryOpen;

    /* 00 */ struct
    {
        /* 00 */ void* Argument1;
        /* 08 */ void* Argument2;
        /* 10 */ void* Argument3;
        /* 18 */ void* Argument4;
        /* 20 */ void* Argument5;
    } Others;
};
using FS_FILTER_PARAMETERS  = union _FS_FILTER_PARAMETERS;
using PFS_FILTER_PARAMETERS = union _FS_FILTER_PARAMETERS*;

struct _TEB64
{
    /* 00 */ _NT_TIB64 NtTib;
    /* 38 */ uint64_t EnvironmentPointer;
    /* 40 */ _CLIENT_ID64 ClientId;
    /* 50 */ uint64_t ActiveRpcHandle;
    /* 58 */ uint64_t ThreadLocalStoragePointer;
    /* 60 */ uint64_t ProcessEnvironmentBlock;
    /* 68 */ uint32_t LastErrorValue;
    /* 6c */ uint32_t CountOfOwnedCriticalSections;
    /* 70 */ uint64_t CsrClientThread;
    /* 78 */ uint64_t Win32ThreadInfo;
    /* 80 */ std::array<uint32_t, 26> User32Reserved;
    /* e8 */ std::array<uint32_t, 5> UserReserved;
    /* 100 */ uint64_t WOW32Reserved;
    /* 108 */ uint32_t CurrentLocale;
    /* 10c */ uint32_t FpSoftwareStatusRegister;
    /* 110 */ std::array<uint64_t, 16> ReservedForDebuggerInstrumentation;
    /* 190 */ std::array<uint64_t, 30> SystemReserved1;
    /* 280 */ char PlaceholderCompatibilityMode;
    /* 281 */ uint8_t PlaceholderHydrationAlwaysExplicit;
    /* 282 */ std::array<char, 10> PlaceholderReserved;
    /* 28c */ uint32_t ProxiedProcessId;
    /* 290 */ _ACTIVATION_CONTEXT_STACK64 _ActivationStack;
    /* 2b8 */ std::array<uint8_t, 8> WorkingOnBehalfTicket;
    /* 2c0 */ int32_t ExceptionCode;
    /* 2c4 */ std::array<uint8_t, 4> Padding0;
    /* 2c8 */ uint64_t ActivationContextStackPointer;
    /* 2d0 */ uint64_t InstrumentationCallbackSp;
    /* 2d8 */ uint64_t InstrumentationCallbackPreviousPc;
    /* 2e0 */ uint64_t InstrumentationCallbackPreviousSp;
    /* 2e8 */ uint32_t TxFsContext;
    /* 2ec */ uint8_t InstrumentationCallbackDisabled;
    /* 2ed */ uint8_t UnalignedLoadStoreExceptions;
    /* 2ee */ std::array<uint8_t, 2> Padding1;
    /* 2f0 */ _GDI_TEB_BATCH64 GdiTebBatch;
    /* 7d8 */ _CLIENT_ID64 RealClientId;
    /* 7e8 */ uint64_t GdiCachedProcessHandle;
    /* 7f0 */ uint32_t GdiClientPID;
    /* 7f4 */ uint32_t GdiClientTID;
    /* 7f8 */ uint64_t GdiThreadLocalInfo;
    /* 800 */ std::array<uint64_t, 62> Win32ClientInfo;
    /* 9f0 */ std::array<uint64_t, 233> glDispatchTable;
    /* 1138 */ std::array<uint64_t, 29> glReserved1;
    /* 1220 */ uint64_t glReserved2;
    /* 1228 */ uint64_t glSectionInfo;
    /* 1230 */ uint64_t glSection;
    /* 1238 */ uint64_t glTable;
    /* 1240 */ uint64_t glCurrentRC;
    /* 1248 */ uint64_t glContext;
    /* 1250 */ uint32_t LastStatusValue;
    /* 1254 */ std::array<uint8_t, 4> Padding2;
    /* 1258 */ _STRING64 StaticUnicodeString;
    /* 1268 */ std::array<wchar_t, 261> StaticUnicodeBuffer;
    /* 1472 */ std::array<uint8_t, 6> Padding3;
    /* 1478 */ uint64_t DeallocationStack;
    /* 1480 */ std::array<uint64_t, 64> TlsSlots;
    /* 1680 */ LIST_ENTRY64 TlsLinks;
    /* 1690 */ uint64_t Vdm;
    /* 1698 */ uint64_t ReservedForNtRpc;
    /* 16a0 */ std::array<uint64_t, 2> DbgSsReserved;
    /* 16b0 */ uint32_t HardErrorMode;
    /* 16b4 */ std::array<uint8_t, 4> Padding4;
    /* 16b8 */ std::array<uint64_t, 11> Instrumentation;
    /* 1710 */ _GUID ActivityId;
    /* 1720 */ uint64_t SubProcessTag;
    /* 1728 */ uint64_t PerflibData;
    /* 1730 */ uint64_t EtwTraceData;
    /* 1738 */ uint64_t WinSockData;
    /* 1740 */ uint32_t GdiBatchCount;
    /* 1744 */ _PROCESSOR_NUMBER CurrentIdealProcessor;
    /* 1744 */ uint32_t IdealProcessorValue;
    /* 1744 */ uint8_t ReservedPad0;
    /* 1745 */ uint8_t ReservedPad1;
    /* 1746 */ uint8_t ReservedPad2;
    /* 1747 */ uint8_t IdealProcessor;
    /* 1748 */ uint32_t GuaranteedStackBytes;
    /* 174c */ std::array<uint8_t, 4> Padding5;
    /* 1750 */ uint64_t ReservedForPerf;
    /* 1758 */ uint64_t ReservedForOle;
    /* 1760 */ uint32_t WaitingOnLoaderLock;
    /* 1764 */ std::array<uint8_t, 4> Padding6;
    /* 1768 */ uint64_t SavedPriorityState;
    /* 1770 */ uint64_t ReservedForCodeCoverage;
    /* 1778 */ uint64_t ThreadPoolData;
    /* 1780 */ uint64_t TlsExpansionSlots;
    /* 1788 */ uint64_t ChpeV2CpuAreaInfo;
    /* 1790 */ uint64_t Unused;
    /* 1798 */ uint32_t MuiGeneration;
    /* 179c */ uint32_t IsImpersonating;
    /* 17a0 */ uint64_t NlsCache;
    /* 17a8 */ uint64_t pShimData;
    /* 17b0 */ uint32_t HeapData;
    /* 17b4 */ std::array<uint8_t, 4> Padding7;
    /* 17b8 */ uint64_t CurrentTransactionHandle;
    /* 17c0 */ uint64_t ActiveFrame;
    /* 17c8 */ uint64_t FlsData;
    /* 17d0 */ uint64_t PreferredLanguages;
    /* 17d8 */ uint64_t UserPrefLanguages;
    /* 17e0 */ uint64_t MergedPrefLanguages;
    /* 17e8 */ uint32_t MuiImpersonation;
    /* 17ec */ uint16_t CrossTebFlags;
    /* 17ec:0 */ uint16_t SpareCrossTebBits : 16;
    /* 17ee */ uint16_t SameTebFlags;
    /* 17ee:0 */ uint16_t SafeThunkCall         : 1;
    /* 17ee:1 */ uint16_t InDebugPrint          : 1;
    /* 17ee:2 */ uint16_t HasFiberData          : 1;
    /* 17ee:3 */ uint16_t SkipThreadAttach      : 1;
    /* 17ee:4 */ uint16_t WerInShipAssertCode   : 1;
    /* 17ee:5 */ uint16_t RanProcessInit        : 1;
    /* 17ee:6 */ uint16_t ClonedThread          : 1;
    /* 17ee:7 */ uint16_t SuppressDebugMsg      : 1;
    /* 17ee:8 */ uint16_t DisableUserStackWalk  : 1;
    /* 17ee:9 */ uint16_t RtlExceptionAttached  : 1;
    /* 17ee:10 */ uint16_t InitialThread        : 1;
    /* 17ee:11 */ uint16_t SessionAware         : 1;
    /* 17ee:12 */ uint16_t LoadOwner            : 1;
    /* 17ee:13 */ uint16_t LoaderWorker         : 1;
    /* 17ee:14 */ uint16_t SkipLoaderInit       : 1;
    /* 17ee:15 */ uint16_t SkipFileAPIBrokering : 1;
    /* 17f0 */ uint64_t TxnScopeEnterCallback;
    /* 17f8 */ uint64_t TxnScopeExitCallback;
    /* 1800 */ uint64_t TxnScopeContext;
    /* 1808 */ uint32_t LockCount;
    /* 180c */ int32_t WowTebOffset;
    /* 1810 */ uint64_t ResourceRetValue;
    /* 1818 */ uint64_t ReservedForWdf;
    /* 1820 */ uint64_t ReservedForCrt;
    /* 1828 */ _GUID EffectiveContainerId;
    /* 1838 */ uint64_t LastSleepCounter;
    /* 1840 */ uint32_t SpinCallCount;
    /* 1844 */ std::array<uint8_t, 4> Padding8;
    /* 1848 */ uint64_t ExtendedFeatureDisableMask;
};
using TEB64  = struct _TEB64;
using PTEB64 = struct _TEB64*;

struct _TEB32
{
    /* 00 */ _NT_TIB32 NtTib;
    /* 1c */ uint32_t EnvironmentPointer;
    /* 20 */ _CLIENT_ID32 ClientId;
    /* 28 */ uint32_t ActiveRpcHandle;
    /* 2c */ uint32_t ThreadLocalStoragePointer;
    /* 30 */ uint32_t ProcessEnvironmentBlock;
    /* 34 */ uint32_t LastErrorValue;
    /* 38 */ uint32_t CountOfOwnedCriticalSections;
    /* 3c */ uint32_t CsrClientThread;
    /* 40 */ uint32_t Win32ThreadInfo;
    /* 44 */ std::array<uint32_t, 26> User32Reserved;
    /* ac */ std::array<uint32_t, 5> UserReserved;
    /* c0 */ uint32_t WOW32Reserved;
    /* c4 */ uint32_t CurrentLocale;
    /* c8 */ uint32_t FpSoftwareStatusRegister;
    /* cc */ std::array<uint32_t, 16> ReservedForDebuggerInstrumentation;
    /* 10c */ std::array<uint32_t, 26> SystemReserved1;
    /* 174 */ char PlaceholderCompatibilityMode;
    /* 175 */ uint8_t PlaceholderHydrationAlwaysExplicit;
    /* 176 */ std::array<char, 10> PlaceholderReserved;
    /* 180 */ uint32_t ProxiedProcessId;
    /* 184 */ _ACTIVATION_CONTEXT_STACK32 _ActivationStack;
    /* 19c */ std::array<uint8_t, 8> WorkingOnBehalfTicket;
    /* 1a4 */ int32_t ExceptionCode;
    /* 1a8 */ uint32_t ActivationContextStackPointer;
    /* 1ac */ uint32_t InstrumentationCallbackSp;
    /* 1b0 */ uint32_t InstrumentationCallbackPreviousPc;
    /* 1b4 */ uint32_t InstrumentationCallbackPreviousSp;
    /* 1b8 */ uint8_t InstrumentationCallbackDisabled;
    /* 1b9 */ std::array<uint8_t, 23> SpareBytes;
    /* 1d0 */ uint32_t TxFsContext;
    /* 1d4 */ _GDI_TEB_BATCH32 GdiTebBatch;
    /* 6b4 */ _CLIENT_ID32 RealClientId;
    /* 6bc */ uint32_t GdiCachedProcessHandle;
    /* 6c0 */ uint32_t GdiClientPID;
    /* 6c4 */ uint32_t GdiClientTID;
    /* 6c8 */ uint32_t GdiThreadLocalInfo;
    /* 6cc */ std::array<uint32_t, 62> Win32ClientInfo;
    /* 7c4 */ std::array<uint32_t, 233> glDispatchTable;
    /* b68 */ std::array<uint32_t, 29> glReserved1;
    /* bdc */ uint32_t glReserved2;
    /* be0 */ uint32_t glSectionInfo;
    /* be4 */ uint32_t glSection;
    /* be8 */ uint32_t glTable;
    /* bec */ uint32_t glCurrentRC;
    /* bf0 */ uint32_t glContext;
    /* bf4 */ uint32_t LastStatusValue;
    /* bf8 */ _STRING32 StaticUnicodeString;
    /* c00 */ std::array<wchar_t, 261> StaticUnicodeBuffer;
    /* e0c */ uint32_t DeallocationStack;
    /* e10 */ std::array<uint32_t, 64> TlsSlots;
    /* f10 */ LIST_ENTRY32 TlsLinks;
    /* f18 */ uint32_t Vdm;
    /* f1c */ uint32_t ReservedForNtRpc;
    /* f20 */ std::array<uint32_t, 2> DbgSsReserved;
    /* f28 */ uint32_t HardErrorMode;
    /* f2c */ std::array<uint32_t, 9> Instrumentation;
    /* f50 */ _GUID ActivityId;
    /* f60 */ uint32_t SubProcessTag;
    /* f64 */ uint32_t PerflibData;
    /* f68 */ uint32_t EtwTraceData;
    /* f6c */ uint32_t WinSockData;
    /* f70 */ uint32_t GdiBatchCount;
    /* f74 */ _PROCESSOR_NUMBER CurrentIdealProcessor;
    /* f74 */ uint32_t IdealProcessorValue;
    /* f74 */ uint8_t ReservedPad0;
    /* f75 */ uint8_t ReservedPad1;
    /* f76 */ uint8_t ReservedPad2;
    /* f77 */ uint8_t IdealProcessor;
    /* f78 */ uint32_t GuaranteedStackBytes;
    /* f7c */ uint32_t ReservedForPerf;
    /* f80 */ uint32_t ReservedForOle;
    /* f84 */ uint32_t WaitingOnLoaderLock;
    /* f88 */ uint32_t SavedPriorityState;
    /* f8c */ uint32_t ReservedForCodeCoverage;
    /* f90 */ uint32_t ThreadPoolData;
    /* f94 */ uint32_t TlsExpansionSlots;
    /* f98 */ uint32_t MuiGeneration;
    /* f9c */ uint32_t IsImpersonating;
    /* fa0 */ uint32_t NlsCache;
    /* fa4 */ uint32_t pShimData;
    /* fa8 */ uint32_t HeapData;
    /* fac */ uint32_t CurrentTransactionHandle;
    /* fb0 */ uint32_t ActiveFrame;
    /* fb4 */ uint32_t FlsData;
    /* fb8 */ uint32_t PreferredLanguages;
    /* fbc */ uint32_t UserPrefLanguages;
    /* fc0 */ uint32_t MergedPrefLanguages;
    /* fc4 */ uint32_t MuiImpersonation;
    /* fc8 */ uint16_t CrossTebFlags;
    /* fc8:0 */ uint16_t SpareCrossTebBits : 16;
    /* fca */ uint16_t SameTebFlags;
    /* fca:0 */ uint16_t SafeThunkCall         : 1;
    /* fca:1 */ uint16_t InDebugPrint          : 1;
    /* fca:2 */ uint16_t HasFiberData          : 1;
    /* fca:3 */ uint16_t SkipThreadAttach      : 1;
    /* fca:4 */ uint16_t WerInShipAssertCode   : 1;
    /* fca:5 */ uint16_t RanProcessInit        : 1;
    /* fca:6 */ uint16_t ClonedThread          : 1;
    /* fca:7 */ uint16_t SuppressDebugMsg      : 1;
    /* fca:8 */ uint16_t DisableUserStackWalk  : 1;
    /* fca:9 */ uint16_t RtlExceptionAttached  : 1;
    /* fca:10 */ uint16_t InitialThread        : 1;
    /* fca:11 */ uint16_t SessionAware         : 1;
    /* fca:12 */ uint16_t LoadOwner            : 1;
    /* fca:13 */ uint16_t LoaderWorker         : 1;
    /* fca:14 */ uint16_t SkipLoaderInit       : 1;
    /* fca:15 */ uint16_t SkipFileAPIBrokering : 1;
    /* fcc */ uint32_t TxnScopeEnterCallback;
    /* fd0 */ uint32_t TxnScopeExitCallback;
    /* fd4 */ uint32_t TxnScopeContext;
    /* fd8 */ uint32_t LockCount;
    /* fdc */ int32_t WowTebOffset;
    /* fe0 */ uint32_t ResourceRetValue;
    /* fe4 */ uint32_t ReservedForWdf;
    /* fe8 */ uint64_t ReservedForCrt;
    /* ff0 */ _GUID EffectiveContainerId;
    /* 1000 */ uint64_t LastSleepCounter;
    /* 1008 */ uint32_t SpinCallCount;
    /* 1010 */ uint64_t ExtendedFeatureDisableMask;
};
using TEB32  = struct _TEB32;
using PTEB32 = struct _TEB32*;

struct _RTL_USER_PROCESS_PARAMETERS
{
    /* 00 */ uint32_t MaximumLength;
    /* 04 */ uint32_t Length;
    /* 08 */ uint32_t Flags;
    /* 0c */ uint32_t DebugFlags;
    /* 10 */ void* ConsoleHandle;
    /* 18 */ uint32_t ConsoleFlags;
    /* 20 */ void* StandardInput;
    /* 28 */ void* StandardOutput;
    /* 30 */ void* StandardError;
    /* 38 */ _CURDIR CurrentDirectory;
    /* 50 */ _UNICODE_STRING DllPath;
    /* 60 */ _UNICODE_STRING ImagePathName;
    /* 70 */ _UNICODE_STRING CommandLine;
    /* 80 */ void* Environment;
    /* 88 */ uint32_t StartingX;
    /* 8c */ uint32_t StartingY;
    /* 90 */ uint32_t CountX;
    /* 94 */ uint32_t CountY;
    /* 98 */ uint32_t CountCharsX;
    /* 9c */ uint32_t CountCharsY;
    /* a0 */ uint32_t FillAttribute;
    /* a4 */ uint32_t WindowFlags;
    /* a8 */ uint32_t ShowWindowFlags;
    /* b0 */ _UNICODE_STRING WindowTitle;
    /* c0 */ _UNICODE_STRING DesktopInfo;
    /* d0 */ _UNICODE_STRING ShellInfo;
    /* e0 */ _UNICODE_STRING RuntimeData;
    /* f0 */ std::array<_RTL_DRIVE_LETTER_CURDIR, 32> CurrentDirectores;
    /* 3f0 */ uint64_t EnvironmentSize;
    /* 3f8 */ uint64_t EnvironmentVersion;
    /* 400 */ void* PackageDependencyData;
    /* 408 */ uint32_t ProcessGroupId;
    /* 40c */ uint32_t LoaderThreads;
    /* 410 */ _UNICODE_STRING RedirectionDllName;
    /* 420 */ _UNICODE_STRING HeapPartitionName;
    /* 430 */ uint64_t* DefaultThreadpoolCpuSetMasks;
    /* 438 */ uint32_t DefaultThreadpoolCpuSetMaskCount;
    /* 43c */ uint32_t DefaultThreadpoolThreadMaximum;
    /* 440 */ uint32_t HeapMemoryTypeMask;
};
using RTL_USER_PROCESS_PARAMETERS  = struct _RTL_USER_PROCESS_PARAMETERS;
using PRTL_USER_PROCESS_PARAMETERS = struct _RTL_USER_PROCESS_PARAMETERS*;

struct _ENODE
{
    /* 00 */ _KNODE Ncb;
    /* 130 */ _WORK_QUEUE_ITEM HotAddProcessorWorkItem;
};
using ENODE  = struct _ENODE;
using PENODE = struct _ENODE*;

struct _HEAP_LFH_BUCKET
{
    /* 00 */ _HEAP_LFH_SUBSEGMENT_OWNER State;
    /* 38 */ uint64_t TotalBlockCount;
    /* 40 */ uint64_t TotalSubsegmentCount;
    /* 48 */ uint32_t ReciprocalBlockSize;
    /* 4c */ uint8_t Shift;
    /* 4d */ uint8_t ContentionCount;
    /* 50 */ uint64_t AffinityMappingLock;
    /* 58 */ uint8_t* ProcAffinityMapping;
    /* 60 */ _HEAP_LFH_AFFINITY_SLOT** AffinitySlots;
};
using HEAP_LFH_BUCKET  = struct _HEAP_LFH_BUCKET;
using PHEAP_LFH_BUCKET = struct _HEAP_LFH_BUCKET*;

struct _HEAP_LFH_AFFINITY_SLOT
{
    /* 00 */ _HEAP_LFH_SUBSEGMENT_OWNER State;
    /* 38 */ _HEAP_LFH_FAST_REF ActiveSubsegment;
};
using HEAP_LFH_AFFINITY_SLOT  = struct _HEAP_LFH_AFFINITY_SLOT;
using PHEAP_LFH_AFFINITY_SLOT = struct _HEAP_LFH_AFFINITY_SLOT*;

struct _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR
{
    /* 00 */ _RTL_DYNAMIC_HASH_TABLE_ENTRY HashEntry;
    /* 00 */ _LIST_ENTRY* CurEntry;
    /* 18 */ _LIST_ENTRY* ChainHead;
    /* 20 */ uint32_t BucketIndex;
};
using RTL_DYNAMIC_HASH_TABLE_ENUMERATOR  = struct _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR;
using PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR = struct _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR*;

struct _TEB
{
    /* 00 */ _NT_TIB NtTib;
    /* 38 */ void* EnvironmentPointer;
    /* 40 */ _CLIENT_ID ClientId;
    /* 50 */ void* ActiveRpcHandle;
    /* 58 */ void* ThreadLocalStoragePointer;
    /* 60 */ _PEB* ProcessEnvironmentBlock;
    /* 68 */ uint32_t LastErrorValue;
    /* 6c */ uint32_t CountOfOwnedCriticalSections;
    /* 70 */ void* CsrClientThread;
    /* 78 */ void* Win32ThreadInfo;
    /* 80 */ std::array<uint32_t, 26> User32Reserved;
    /* e8 */ std::array<uint32_t, 5> UserReserved;
    /* 100 */ void* WOW32Reserved;
    /* 108 */ uint32_t CurrentLocale;
    /* 10c */ uint32_t FpSoftwareStatusRegister;
    /* 110 */ std::array<void*, 16> ReservedForDebuggerInstrumentation;
    /* 190 */ std::array<void*, 30> SystemReserved1;
    /* 280 */ char PlaceholderCompatibilityMode;
    /* 281 */ uint8_t PlaceholderHydrationAlwaysExplicit;
    /* 282 */ std::array<char, 10> PlaceholderReserved;
    /* 28c */ uint32_t ProxiedProcessId;
    /* 290 */ _ACTIVATION_CONTEXT_STACK _ActivationStack;
    /* 2b8 */ std::array<uint8_t, 8> WorkingOnBehalfTicket;
    /* 2c0 */ int32_t ExceptionCode;
    /* 2c4 */ std::array<uint8_t, 4> Padding0;
    /* 2c8 */ _ACTIVATION_CONTEXT_STACK* ActivationContextStackPointer;
    /* 2d0 */ uint64_t InstrumentationCallbackSp;
    /* 2d8 */ uint64_t InstrumentationCallbackPreviousPc;
    /* 2e0 */ uint64_t InstrumentationCallbackPreviousSp;
    /* 2e8 */ uint32_t TxFsContext;
    /* 2ec */ uint8_t InstrumentationCallbackDisabled;
    /* 2ed */ uint8_t UnalignedLoadStoreExceptions;
    /* 2ee */ std::array<uint8_t, 2> Padding1;
    /* 2f0 */ _GDI_TEB_BATCH GdiTebBatch;
    /* 7d8 */ _CLIENT_ID RealClientId;
    /* 7e8 */ void* GdiCachedProcessHandle;
    /* 7f0 */ uint32_t GdiClientPID;
    /* 7f4 */ uint32_t GdiClientTID;
    /* 7f8 */ void* GdiThreadLocalInfo;
    /* 800 */ std::array<uint64_t, 62> Win32ClientInfo;
    /* 9f0 */ std::array<void*, 233> glDispatchTable;
    /* 1138 */ std::array<uint64_t, 29> glReserved1;
    /* 1220 */ void* glReserved2;
    /* 1228 */ void* glSectionInfo;
    /* 1230 */ void* glSection;
    /* 1238 */ void* glTable;
    /* 1240 */ void* glCurrentRC;
    /* 1248 */ void* glContext;
    /* 1250 */ uint32_t LastStatusValue;
    /* 1254 */ std::array<uint8_t, 4> Padding2;
    /* 1258 */ _UNICODE_STRING StaticUnicodeString;
    /* 1268 */ std::array<wchar_t, 261> StaticUnicodeBuffer;
    /* 1472 */ std::array<uint8_t, 6> Padding3;
    /* 1478 */ void* DeallocationStack;
    /* 1480 */ std::array<void*, 64> TlsSlots;
    /* 1680 */ _LIST_ENTRY TlsLinks;
    /* 1690 */ void* Vdm;
    /* 1698 */ void* ReservedForNtRpc;
    /* 16a0 */ std::array<void*, 2> DbgSsReserved;
    /* 16b0 */ uint32_t HardErrorMode;
    /* 16b4 */ std::array<uint8_t, 4> Padding4;
    /* 16b8 */ std::array<void*, 11> Instrumentation;
    /* 1710 */ _GUID ActivityId;
    /* 1720 */ void* SubProcessTag;
    /* 1728 */ void* PerflibData;
    /* 1730 */ void* EtwTraceData;
    /* 1738 */ void* WinSockData;
    /* 1740 */ uint32_t GdiBatchCount;
    /* 1744 */ _PROCESSOR_NUMBER CurrentIdealProcessor;
    /* 1744 */ uint32_t IdealProcessorValue;
    /* 1744 */ uint8_t ReservedPad0;
    /* 1745 */ uint8_t ReservedPad1;
    /* 1746 */ uint8_t ReservedPad2;
    /* 1747 */ uint8_t IdealProcessor;
    /* 1748 */ uint32_t GuaranteedStackBytes;
    /* 174c */ std::array<uint8_t, 4> Padding5;
    /* 1750 */ void* ReservedForPerf;
    /* 1758 */ void* ReservedForOle;
    /* 1760 */ uint32_t WaitingOnLoaderLock;
    /* 1764 */ std::array<uint8_t, 4> Padding6;
    /* 1768 */ void* SavedPriorityState;
    /* 1770 */ uint64_t ReservedForCodeCoverage;
    /* 1778 */ void* ThreadPoolData;
    /* 1780 */ void** TlsExpansionSlots;
    /* 1788 */ _CHPEV2_CPUAREA_INFO* ChpeV2CpuAreaInfo;
    /* 1790 */ void* Unused;
    /* 1798 */ uint32_t MuiGeneration;
    /* 179c */ uint32_t IsImpersonating;
    /* 17a0 */ void* NlsCache;
    /* 17a8 */ void* pShimData;
    /* 17b0 */ uint32_t HeapData;
    /* 17b4 */ std::array<uint8_t, 4> Padding7;
    /* 17b8 */ void* CurrentTransactionHandle;
    /* 17c0 */ _TEB_ACTIVE_FRAME* ActiveFrame;
    /* 17c8 */ void* FlsData;
    /* 17d0 */ void* PreferredLanguages;
    /* 17d8 */ void* UserPrefLanguages;
    /* 17e0 */ void* MergedPrefLanguages;
    /* 17e8 */ uint32_t MuiImpersonation;
    /* 17ec */ uint16_t CrossTebFlags;
    /* 17ec:0 */ uint16_t SpareCrossTebBits : 16;
    /* 17ee */ uint16_t SameTebFlags;
    /* 17ee:0 */ uint16_t SafeThunkCall         : 1;
    /* 17ee:1 */ uint16_t InDebugPrint          : 1;
    /* 17ee:2 */ uint16_t HasFiberData          : 1;
    /* 17ee:3 */ uint16_t SkipThreadAttach      : 1;
    /* 17ee:4 */ uint16_t WerInShipAssertCode   : 1;
    /* 17ee:5 */ uint16_t RanProcessInit        : 1;
    /* 17ee:6 */ uint16_t ClonedThread          : 1;
    /* 17ee:7 */ uint16_t SuppressDebugMsg      : 1;
    /* 17ee:8 */ uint16_t DisableUserStackWalk  : 1;
    /* 17ee:9 */ uint16_t RtlExceptionAttached  : 1;
    /* 17ee:10 */ uint16_t InitialThread        : 1;
    /* 17ee:11 */ uint16_t SessionAware         : 1;
    /* 17ee:12 */ uint16_t LoadOwner            : 1;
    /* 17ee:13 */ uint16_t LoaderWorker         : 1;
    /* 17ee:14 */ uint16_t SkipLoaderInit       : 1;
    /* 17ee:15 */ uint16_t SkipFileAPIBrokering : 1;
    /* 17f0 */ void* TxnScopeEnterCallback;
    /* 17f8 */ void* TxnScopeExitCallback;
    /* 1800 */ void* TxnScopeContext;
    /* 1808 */ uint32_t LockCount;
    /* 180c */ int32_t WowTebOffset;
    /* 1810 */ void* ResourceRetValue;
    /* 1818 */ void* ReservedForWdf;
    /* 1820 */ uint64_t ReservedForCrt;
    /* 1828 */ _GUID EffectiveContainerId;
    /* 1838 */ uint64_t LastSleepCounter;
    /* 1840 */ uint32_t SpinCallCount;
    /* 1844 */ std::array<uint8_t, 4> Padding8;
    /* 1848 */ uint64_t ExtendedFeatureDisableMask;
};
using TEB  = struct _TEB;
using PTEB = struct _TEB*;

struct _KPROCESS
{
    /* 00 */ _DISPATCHER_HEADER Header;
    /* 18 */ _LIST_ENTRY ProfileListHead;
    /* 28 */ uint64_t DirectoryTableBase;
    /* 30 */ _LIST_ENTRY ThreadListHead;
    /* 40 */ uint32_t ProcessLock;
    /* 44 */ uint32_t ProcessTimerDelay;
    /* 48 */ uint64_t DeepFreezeStartTime;
    /* 50 */ _KAFFINITY_EX Affinity;
    /* 158 */ _LIST_ENTRY ReadyListHead;
    /* 168 */ _SINGLE_LIST_ENTRY SwapListEntry;
    /* 170 */ _KAFFINITY_EX ActiveProcessors;
    /* 278:0 */ uint32_t AutoAlignment         : 1;
    /* 278:1 */ uint32_t DisableBoost          : 1;
    /* 278:2 */ uint32_t DisableQuantum        : 1;
    /* 278:3 */ uint32_t DeepFreeze            : 1;
    /* 278:4 */ uint32_t TimerVirtualization   : 1;
    /* 278:5 */ uint32_t CheckStackExtents     : 1;
    /* 278:6 */ uint32_t CacheIsolationEnabled : 1;
    /* 278:7 */ uint32_t PpmPolicy             : 4;
    /* 278:11 */ uint32_t VaSpaceDeleted       : 1;
    /* 278:12 */ uint32_t MultiGroup           : 1;
    /* 278:13 */ uint32_t ReservedFlags        : 19;
    /* 278 */ int32_t ProcessFlags;
    /* 27c */ uint32_t ActiveGroupsMask;
    /* 280 */ char BasePriority;
    /* 281 */ char QuantumReset;
    /* 282 */ char Visited;
    /* 283 */ _KEXECUTE_OPTIONS Flags;
    /* 284 */ std::array<uint16_t, 32> ThreadSeed;
    /* 2c4 */ std::array<uint16_t, 32> IdealProcessor;
    /* 304 */ std::array<uint16_t, 32> IdealNode;
    /* 344 */ uint16_t IdealGlobalNode;
    /* 346 */ uint16_t Spare1;
    /* 348 */ _KSTACK_COUNT StackCount;
    /* 350 */ _LIST_ENTRY ProcessListEntry;
    /* 360 */ uint64_t CycleTime;
    /* 368 */ uint64_t ContextSwitches;
    /* 370 */ _KSCHEDULING_GROUP* SchedulingGroup;
    /* 378 */ uint32_t FreezeCount;
    /* 37c */ uint32_t KernelTime;
    /* 380 */ uint32_t UserTime;
    /* 384 */ uint32_t ReadyTime;
    /* 388 */ uint64_t UserDirectoryTableBase;
    /* 390 */ uint8_t AddressPolicy;
    /* 391 */ std::array<uint8_t, 71> Spare2;
    /* 3d8 */ void* InstrumentationCallback;
    /* 3e0 */ union
    {
        /* 00 */ uint64_t SecureHandle;
        /* 00 */ struct
        {
            /* 00:0 */ uint64_t SecureProcess : 1;
            /* 00:1 */ uint64_t Unused        : 1;
        } Flags;
    } SecureState;

    /* 3e8 */ uint64_t KernelWaitTime;
    /* 3f0 */ uint64_t UserWaitTime;
    /* 3f8 */ uint64_t LastRebalanceQpc;
    /* 400 */ void* PerProcessorCycleTimes;
    /* 408 */ uint64_t ExtendedFeatureDisableMask;
    /* 410 */ uint16_t PrimaryGroup;
    /* 412 */ std::array<uint16_t, 3> Spare3;
    /* 418 */ void* UserCetLogging;
    /* 420 */ _LIST_ENTRY CpuPartitionList;
    /* 430 */ std::array<uint64_t, 1> EndPadding;
};
using KPROCESS  = struct _KPROCESS;
using PKPROCESS = struct _KPROCESS*;

struct _KEVENT
{
    /* 00 */ _DISPATCHER_HEADER Header;
};
using KEVENT  = struct _KEVENT;
using PKEVENT = struct _KEVENT*;

struct _KGATE
{
    /* 00 */ _DISPATCHER_HEADER Header;
};
using KGATE  = struct _KGATE;
using PKGATE = struct _KGATE*;

struct _KSEMAPHORE
{
    /* 00 */ _DISPATCHER_HEADER Header;
    /* 18 */ int32_t Limit;
};
using KSEMAPHORE  = struct _KSEMAPHORE;
using PKSEMAPHORE = struct _KSEMAPHORE*;

struct _KTIMER
{
    /* 00 */ _DISPATCHER_HEADER Header;
    /* 18 */ _ULARGE_INTEGER DueTime;
    /* 20 */ _LIST_ENTRY TimerListEntry;
    /* 30 */ _KDPC* Dpc;
    /* 38 */ uint16_t Processor;
    /* 3a */ uint16_t TimerType;
    /* 3c */ uint32_t Period;
};
using KTIMER  = struct _KTIMER;
using PKTIMER = struct _KTIMER*;

struct _KQUEUE
{
    /* 00 */ _DISPATCHER_HEADER Header;
    /* 18 */ _LIST_ENTRY EntryListHead;
    /* 28 */ uint32_t CurrentCount;
    /* 2c */ uint32_t MaximumCount;
    /* 30 */ _LIST_ENTRY ThreadListHead;
};
using KQUEUE  = struct _KQUEUE;
using PKQUEUE = struct _KQUEUE*;

struct _IRP
{
    /* 00 */ int16_t Type;
    /* 02 */ uint16_t Size;
    /* 04 */ uint16_t AllocationProcessorNumber;
    /* 06 */ uint16_t Reserved;
    /* 08 */ _MDL* MdlAddress;
    /* 10 */ uint32_t Flags;
    /* 18 */ union
    {
        /* 00 */ _IRP* MasterIrp;
        /* 00 */ int32_t IrpCount;
        /* 00 */ void* SystemBuffer;
    } AssociatedIrp;

    /* 20 */ _LIST_ENTRY ThreadListEntry;
    /* 30 */ _IO_STATUS_BLOCK IoStatus;
    /* 40 */ char RequestorMode;
    /* 41 */ uint8_t PendingReturned;
    /* 42 */ char StackCount;
    /* 43 */ char CurrentLocation;
    /* 44 */ uint8_t Cancel;
    /* 45 */ uint8_t CancelIrql;
    /* 46 */ char ApcEnvironment;
    /* 47 */ uint8_t AllocationFlags;
    /* 48 */ _IO_STATUS_BLOCK* UserIosb;
    /* 48 */ void* IoRingContext;
    /* 50 */ _KEVENT* UserEvent;
    /* 58 */ union
    {
        /* 00 */ struct
        {
            /* 00 */ std::function<void(void*, _IO_STATUS_BLOCK*, uint32_t)> UserApcRoutine;
            /* 00 */ void* IssuingProcess;
            /* 08 */ void* UserApcContext;
            /* 08 */ _IORING_OBJECT* IoRing;
        } AsynchronousParameters;

        /* 00 */ _LARGE_INTEGER AllocationSize;
    } Overlay;

    /* 68 */ std::function<void(_DEVICE_OBJECT*, _IRP*)> CancelRoutine;
    /* 70 */ void* UserBuffer;
    /* 78 */ union
    {
        /* 00 */ struct
        {
            /* 00 */ _KDEVICE_QUEUE_ENTRY DeviceQueueEntry;
            /* 00 */ std::array<void*, 4> DriverContext;
            /* 20 */ _ETHREAD* Thread;
            /* 28 */ char* AuxiliaryBuffer;
            /* 30 */ _LIST_ENTRY ListEntry;
            /* 40 */ _IO_STACK_LOCATION* CurrentStackLocation;
            /* 40 */ uint32_t PacketType;
            /* 48 */ _FILE_OBJECT* OriginalFileObject;
            /* 50 */ void* IrpExtension;
        } Overlay;

        /* 00 */ _KAPC Apc;
        /* 00 */ void* CompletionKey;
    } Tail;
};
using IRP  = struct _IRP;
using PIRP = struct _IRP*;

struct _WAIT_CONTEXT_BLOCK
{
    /* 00 */ _KDEVICE_QUEUE_ENTRY WaitQueueEntry;
    /* 00 */ _LIST_ENTRY DmaWaitEntry;
    /* 10 */ uint32_t NumberOfChannels;
    /* 14:0 */ uint32_t SyncCallback        : 1;
    /* 14:1 */ uint32_t DmaContext          : 1;
    /* 14:2 */ uint32_t ZeroMapRegisters    : 1;
    /* 14:3 */ uint32_t Reserved            : 9;
    /* 14:12 */ uint32_t NumberOfRemapPages : 20;
    /* 18 */ std::function<_IO_ALLOCATION_ACTION(_DEVICE_OBJECT*, _IRP*, void*, void*)> DeviceRoutine;
    /* 20 */ void* DeviceContext;
    /* 28 */ uint32_t NumberOfMapRegisters;
    /* 30 */ void* DeviceObject;
    /* 38 */ void* CurrentIrp;
    /* 40 */ _KDPC* BufferChainingDpc;
};
using WAIT_CONTEXT_BLOCK  = struct _WAIT_CONTEXT_BLOCK;
using PWAIT_CONTEXT_BLOCK = struct _WAIT_CONTEXT_BLOCK*;

struct _PPM_IDLE_STATE
{
    /* 00 */ _KAFFINITY_EX DomainMembers;
    /* 108 */ _UNICODE_STRING Name;
    /* 118 */ uint32_t Latency;
    /* 11c */ uint32_t BreakEvenDuration;
    /* 120 */ uint32_t Power;
    /* 124 */ uint32_t StateFlags;
    /* 128 */ _PPM_VETO_ACCOUNTING VetoAccounting;
    /* 150 */ uint8_t StateType;
    /* 151 */ uint8_t InterruptsEnabled;
    /* 152 */ uint8_t Interruptible;
    /* 153 */ uint8_t ContextRetained;
    /* 154 */ uint8_t CacheCoherent;
    /* 155 */ uint8_t WakesSpuriously;
    /* 156 */ uint8_t PlatformOnly;
    /* 157 */ uint8_t NoCState;
};
using PPM_IDLE_STATE  = struct _PPM_IDLE_STATE;
using PPPM_IDLE_STATE = struct _PPM_IDLE_STATE*;

struct _KSINGLE_DPC_SOFT_TIMEOUT_EVENT_INFO
{
    /* 00 */ _KDPC EventDpc;
    /* 40 */ void* DeferredRoutine;
    /* 48 */ uint32_t TickCount;
};
using KSINGLE_DPC_SOFT_TIMEOUT_EVENT_INFO  = struct _KSINGLE_DPC_SOFT_TIMEOUT_EVENT_INFO;
using PKSINGLE_DPC_SOFT_TIMEOUT_EVENT_INFO = struct _KSINGLE_DPC_SOFT_TIMEOUT_EVENT_INFO*;

struct _KENTROPY_TIMING_STATE
{
    /* 00 */ uint32_t EntropyCount;
    /* 04 */ std::array<uint32_t, 64> Buffer;
    /* 108 */ _KDPC Dpc;
    /* 148 */ uint32_t LastDeliveredBuffer;
    /* 150 */ void* ReservedRawDataBuffer;
};
using KENTROPY_TIMING_STATE  = struct _KENTROPY_TIMING_STATE;
using PKENTROPY_TIMING_STATE = struct _KENTROPY_TIMING_STATE*;

struct _KDPC_DATA
{
    /* 00 */ _KDPC_LIST DpcList;
    /* 10 */ uint64_t DpcLock;
    /* 18 */ int32_t DpcQueueDepth;
    /* 1c */ uint32_t DpcCount;
    /* 20 */ _KDPC* ActiveDpc;
    /* 28 */ uint32_t LongDpcPresent;
    /* 2c */ uint32_t Padding;
};
using KDPC_DATA  = struct _KDPC_DATA;
using PKDPC_DATA = struct _KDPC_DATA*;

struct _WHEA_ERROR_RECORD_HEADER
{
    /* 00 */ uint32_t Signature;
    /* 04 */ _WHEA_REVISION Revision;
    /* 06 */ uint32_t SignatureEnd;
    /* 0a */ uint16_t SectionCount;
    /* 0c */ _WHEA_ERROR_SEVERITY Severity;
    /* 10 */ _WHEA_ERROR_RECORD_HEADER_VALIDBITS ValidBits;
    /* 14 */ uint32_t Length;
    /* 18 */ _WHEA_TIMESTAMP Timestamp;
    /* 20 */ _GUID PlatformId;
    /* 30 */ _GUID PartitionId;
    /* 40 */ _GUID CreatorId;
    /* 50 */ _GUID NotifyType;
    /* 60 */ uint64_t RecordId;
    /* 68 */ _WHEA_ERROR_RECORD_HEADER_FLAGS Flags;
    /* 6c */ _WHEA_PERSISTENCE_INFO PersistenceInfo;
    /* 74 */ uint32_t OsBuildNumber;
    /* 78 */ std::array<uint8_t, 8> Reserved2;
    /* 74 */ std::array<uint8_t, 12> Reserved;
};
using WHEA_ERROR_RECORD_HEADER  = struct _WHEA_ERROR_RECORD_HEADER;
using PWHEA_ERROR_RECORD_HEADER = struct _WHEA_ERROR_RECORD_HEADER*;

struct _PROCESSOR_POWER_STATE
{
    /* 00 */ _PPM_IDLE_STATES* IdleStates;
    /* 08 */ _PROC_IDLE_ACCOUNTING* IdleAccounting;
    /* 10 */ uint64_t IdleTimeLast;
    /* 18 */ uint64_t IdleTimeTotal;
    /* 20 */ uint64_t IdleSequenceNumber;
    /* 28 */ uint64_t IdleTimeEntry;
    /* 30 */ uint64_t IdleTimeExpiration;
    /* 30 */ int64_t IdleWakeTime;
    /* 38 */ uint8_t NonInterruptibleTransition;
    /* 39 */ uint8_t PepWokenTransition;
    /* 3a */ uint8_t HvTargetState;
    /* 3b */ uint8_t SoftParked;
    /* 3c */ uint32_t TargetIdleState;
    /* 40 */ _PROC_IDLE_POLICY IdlePolicy;
    /* 48 */ _PPM_IDLE_SYNCHRONIZATION_STATE Synchronization;
    /* 50 */ _PROC_FEEDBACK PerfFeedback;
    /* e0 */ _PROC_HYPERVISOR_STATE Hypervisor;
    /* e4 */ uint32_t LastSysTime;
    /* e8 */ uint64_t WmiDispatchPtr;
    /* f0 */ int32_t WmiInterfaceEnabled;
    /* f8 */ _PPM_FFH_THROTTLE_STATE_INFO FFHThrottleStateInfo;
    /* 118 */ _KDPC PerfActionDpc;
    /* 158 */ int32_t PerfActionMask;
    /* 160 */ _PROC_IDLE_SNAP HvIdleCheck;
    /* 170 */ _PROC_PERF_CHECK_CONTEXT CheckContext;
    /* 1b8 */ _PPM_CONCURRENCY_ACCOUNTING* Concurrency;
    /* 1c0 */ _PPM_CONCURRENCY_ACCOUNTING* ClassConcurrency;
    /* 1c8 */ uint8_t ArchitecturalEfficiencyClass;
    /* 1c9 */ uint8_t PerformanceSchedulingClass;
    /* 1ca */ uint8_t EfficiencySchedulingClass;
    /* 1cb */ uint8_t EarlyBootArchitecturalEfficiencyClass;
    /* 1cc */ uint8_t Parked;
    /* 1cd */ uint8_t LongPriorQosPeriod;
    /* 1d0 */ uint64_t SnapTimeLast;
    /* 1d0 */ uint64_t EnergyConsumed;
    /* 1d8 */ uint64_t ActiveTime;
    /* 1e0 */ uint64_t TotalTime;
    /* 1e8 */ _POP_FX_DEVICE* FxDevice;
    /* 1f0 */ uint64_t LastQosTranstionTsc;
    /* 1f8 */ uint64_t QosTransitionHysteresis;
    /* 200 */ _KHETERO_CPU_QOS RequestedQosClass;
    /* 204 */ _KHETERO_CPU_QOS ResolvedQosClass;
    /* 208 */ uint16_t QosEquivalencyMask;
    /* 20a */ uint16_t HwFeedbackTableOffset;
    /* 20c */ uint8_t HwFeedbackParkHint;
    /* 20d */ uint8_t HeteroCoreType;
    /* 20e */ uint16_t HwFeedbackTableIndex;
    /* 210 */ _KHETRO_HWFEEDBACK_TYPE* HwFeedbackClassList;
    /* 218 */ _PROCESSOR_CYCLES_WORKLOAD_CLASS* EeCyclesWorkloadClassList;
    /* 220 */ _PROCESSOR_CYCLES_WORKLOAD_CLASS* PerfCyclesWorkloadClassList;
    /* 228 */ uint8_t NotUsed;
    /* 22a */ std::array<uint16_t, 4> FrequencyBucketThresholds;
};
using PROCESSOR_POWER_STATE  = struct _PROCESSOR_POWER_STATE;
using PPROCESSOR_POWER_STATE = struct _PROCESSOR_POWER_STATE*;

struct _CM_PARTIAL_RESOURCE_LIST
{
    /* 00 */ uint16_t Version;
    /* 02 */ uint16_t Revision;
    /* 04 */ uint32_t Count;
    /* 08 */ std::array<_CM_PARTIAL_RESOURCE_DESCRIPTOR, 1> PartialDescriptors;
};
using CM_PARTIAL_RESOURCE_LIST  = struct _CM_PARTIAL_RESOURCE_LIST;
using PCM_PARTIAL_RESOURCE_LIST = struct _CM_PARTIAL_RESOURCE_LIST*;

struct _PRIVILEGE_SET
{
    /* 00 */ uint32_t PrivilegeCount;
    /* 04 */ uint32_t Control;
    /* 08 */ std::array<_LUID_AND_ATTRIBUTES, 1> Privilege;
};
using PRIVILEGE_SET  = struct _PRIVILEGE_SET;
using PPRIVILEGE_SET = struct _PRIVILEGE_SET*;

struct _INITIAL_PRIVILEGE_SET
{
    /* 00 */ uint32_t PrivilegeCount;
    /* 04 */ uint32_t Control;
    /* 08 */ std::array<_LUID_AND_ATTRIBUTES, 3> Privilege;
};
using INITIAL_PRIVILEGE_SET  = struct _INITIAL_PRIVILEGE_SET;
using PINITIAL_PRIVILEGE_SET = struct _INITIAL_PRIVILEGE_SET*;

struct _KSCHEDULING_GROUP
{
    /* 00 */ _KSCHEDULING_GROUP_POLICY Policy;
    /* 08 */ uint32_t RelativeWeight;
    /* 0c */ uint32_t ChildMinRate;
    /* 10 */ uint32_t ChildMinWeight;
    /* 14 */ uint32_t ChildTotalWeight;
    /* 18 */ uint64_t QueryHistoryTimeStamp;
    /* 20 */ int64_t NotificationCycles;
    /* 28 */ int64_t MaxQuotaLimitCycles;
    /* 30 */ int64_t MaxQuotaCyclesRemaining;
    /* 38 */ _LIST_ENTRY SchedulingGroupList;
    /* 38 */ _LIST_ENTRY Sibling;
    /* 48 */ _KDPC* NotificationDpc;
    /* 50 */ _LIST_ENTRY ChildList;
    /* 60 */ _KSCHEDULING_GROUP* Parent;
    /* 80 */ std::array<_KSCB, 1> PerProcessor;
};
using KSCHEDULING_GROUP  = struct _KSCHEDULING_GROUP;
using PKSCHEDULING_GROUP = struct _KSCHEDULING_GROUP*;

struct _HEAP_VS_CONTEXT
{
    /* 00 */ uint64_t Lock;
    /* 08 */ _RTLP_HP_LOCK_TYPE LockType;
    /* 10 */ _RTL_RB_TREE FreeChunkTree;
    /* 20 */ _LIST_ENTRY SubsegmentList;
    /* 30 */ uint64_t TotalCommittedUnits;
    /* 38 */ uint64_t FreeCommittedUnits;
    /* 40 */ _HEAP_VS_DELAY_FREE_CONTEXT DelayFreeContext;
    /* 80 */ void* BackendCtx;
    /* 88 */ _HEAP_SUBALLOCATOR_CALLBACKS Callbacks;
    /* b0 */ _RTL_HP_VS_CONFIG Config;
    /* b4 */ uint32_t Flags;
};
using HEAP_VS_CONTEXT  = struct _HEAP_VS_CONTEXT;
using PHEAP_VS_CONTEXT = struct _HEAP_VS_CONTEXT*;

struct _LFH_HEAP
{
    /* 00 */ _RTL_SRWLOCK Lock;
    /* 08 */ _LIST_ENTRY SubSegmentZones;
    /* 18 */ void* Heap;
    /* 20 */ void* NextSegmentInfoArrayAddress;
    /* 28 */ void* FirstUncommittedAddress;
    /* 30 */ void* ReservedAddressLimit;
    /* 38 */ uint32_t SegmentCreate;
    /* 3c */ uint32_t SegmentDelete;
    /* 40 */ uint32_t MinimumCacheDepth;
    /* 44 */ uint32_t CacheShiftThreshold;
    /* 48 */ uint64_t SizeInCache;
    /* 50 */ _HEAP_BUCKET_RUN_INFO RunInfo;
    /* 60 */ std::array<_USER_MEMORY_CACHE_ENTRY, 12> UserBlockCache;
    /* 2a0 */ _HEAP_LFH_MEM_POLICIES MemoryPolicies;
    /* 2a4 */ std::array<_HEAP_BUCKET, 129> Buckets;
    /* 4a8 */ std::array<_HEAP_LOCAL_SEGMENT_INFO*, 129> SegmentInfoArrays;
    /* 8b0 */ std::array<_HEAP_LOCAL_SEGMENT_INFO*, 129> AffinitizedInfoArrays;
    /* cb8 */ _SEGMENT_HEAP* SegmentAllocator;
    /* cc0 */ std::array<_HEAP_LOCAL_DATA, 1> LocalData;
};
using LFH_HEAP  = struct _LFH_HEAP;
using PLFH_HEAP = struct _LFH_HEAP*;

struct _HANDLE_TABLE
{
    /* 00 */ uint32_t NextHandleNeedingPool;
    /* 04 */ int32_t ExtraInfoPages;
    /* 08 */ uint64_t TableCode;
    /* 10 */ _EPROCESS* QuotaProcess;
    /* 18 */ _LIST_ENTRY HandleTableList;
    /* 28 */ uint32_t UniqueProcessId;
    /* 2c */ uint32_t Flags;
    /* 2c:0 */ uint8_t StrictFIFO                           : 1;
    /* 2c:1 */ uint8_t EnableHandleExceptions               : 1;
    /* 2c:2 */ uint8_t Rundown                              : 1;
    /* 2c:3 */ uint8_t Duplicated                           : 1;
    /* 2c:4 */ uint8_t RaiseUMExceptionOnInvalidHandleClose : 1;
    /* 30 */ _EX_PUSH_LOCK HandleContentionEvent;
    /* 38 */ _EX_PUSH_LOCK HandleTableLock;
    /* 40 */ std::array<_HANDLE_TABLE_FREE_LIST, 1> FreeLists;
    /* 40 */ std::array<uint8_t, 32> ActualEntry;
    /* 60 */ _HANDLE_TRACE_DEBUG_INFO* DebugInfo;
};
using HANDLE_TABLE  = struct _HANDLE_TABLE;
using PHANDLE_TABLE = struct _HANDLE_TABLE*;

struct _WNF_SILODRIVERSTATE
{
    /* 00 */ _WNF_SCOPE_MAP* ScopeMap;
    /* 08 */ void* PermanentNameStoreRootKey;
    /* 10 */ void* PersistentNameStoreRootKey;
    /* 18 */ int64_t PermanentNameSequenceNumber;
    /* 20 */ _WNF_LOCK PermanentNameSequenceNumberLock;
    /* 28 */ int64_t PermanentNameSequenceNumberPool;
    /* 30 */ int64_t RuntimeNameSequenceNumber;
};
using WNF_SILODRIVERSTATE  = struct _WNF_SILODRIVERSTATE;
using PWNF_SILODRIVERSTATE = struct _WNF_SILODRIVERSTATE*;

struct _OBP_SILODRIVERSTATE
{
    /* 00 */ _EX_FAST_REF SystemDeviceMap;
    /* 08 */ _OBP_SYSTEM_DOS_DEVICE_STATE SystemDosDeviceState;
    /* 78 */ _EX_PUSH_LOCK DeviceMapLock;
    /* 80 */ _OBJECT_NAMESPACE_LOOKUPTABLE PrivateNamespaceLookupTable;
};
using OBP_SILODRIVERSTATE  = struct _OBP_SILODRIVERSTATE;
using POBP_SILODRIVERSTATE = struct _OBP_SILODRIVERSTATE*;

struct _EVENT_RECORD
{
    /* 00 */ _EVENT_HEADER EventHeader;
    /* 50 */ _ETW_BUFFER_CONTEXT BufferContext;
    /* 54 */ uint16_t ExtendedDataCount;
    /* 56 */ uint16_t UserDataLength;
    /* 58 */ _EVENT_HEADER_EXTENDED_DATA_ITEM* ExtendedData;
    /* 60 */ void* UserData;
    /* 68 */ void* UserContext;
};
using EVENT_RECORD  = struct _EVENT_RECORD;
using PEVENT_RECORD = struct _EVENT_RECORD*;

struct _HEAP_VAMGR_VASPACE
{
    /* 00 */ _RTLP_HP_ADDRESS_SPACE_TYPE AddressSpaceType;
    /* 08 */ uint64_t BaseAddress;
    /* 10 */ _RTL_SPARSE_ARRAY VaRangeArray;
    /* 10 */ std::array<uint8_t, 2128> VaRangeArrayBuffer;
};
using HEAP_VAMGR_VASPACE  = struct _HEAP_VAMGR_VASPACE;
using PHEAP_VAMGR_VASPACE = struct _HEAP_VAMGR_VASPACE*;

struct _HEAP_VS_CHUNK_FREE_HEADER
{
    /* 00 */ _HEAP_VS_CHUNK_HEADER Header;
    /* 00 */ uint64_t OverlapsHeader;
    /* 08 */ _RTL_BALANCED_NODE Node;
};
using HEAP_VS_CHUNK_FREE_HEADER  = struct _HEAP_VS_CHUNK_FREE_HEADER;
using PHEAP_VS_CHUNK_FREE_HEADER = struct _HEAP_VS_CHUNK_FREE_HEADER*;

union _HEAP_PAGE_SEGMENT
{
    /* 00 */ _LIST_ENTRY ListEntry;
    /* 10 */ uint64_t Signature;
    /* 18 */ _HEAP_SEGMENT_MGR_COMMIT_STATE* SegmentCommitState;
    /* 20 */ uint8_t UnusedWatermark;
    /* 00 */ std::array<_HEAP_PAGE_RANGE_DESCRIPTOR, 256> DescArray;
};
using HEAP_PAGE_SEGMENT  = union _HEAP_PAGE_SEGMENT;
using PHEAP_PAGE_SEGMENT = union _HEAP_PAGE_SEGMENT*;

struct _KSTACK_CONTROL
{
    /* 00 */ uint64_t StackBase;
    /* 08 */ uint64_t ActualLimit;
    /* 08:0 */ uint64_t StackExpansion : 1;
    /* 10 */ _KERNEL_STACK_SEGMENT Previous;
};
using KSTACK_CONTROL  = struct _KSTACK_CONTROL;
using PKSTACK_CONTROL = struct _KSTACK_CONTROL*;

struct _PS_TRUSTLET_ATTRIBUTE_HEADER
{
    /* 00 */ _PS_TRUSTLET_ATTRIBUTE_TYPE AttributeType;
    /* 04:0 */ uint32_t InstanceNumber : 8;
    /* 04:8 */ uint32_t Reserved       : 24;
};
using PS_TRUSTLET_ATTRIBUTE_HEADER  = struct _PS_TRUSTLET_ATTRIBUTE_HEADER;
using PPS_TRUSTLET_ATTRIBUTE_HEADER = struct _PS_TRUSTLET_ATTRIBUTE_HEADER*;

struct _RTL_STD_LIST_HEAD
{
    /* 00 */ _RTL_STD_LIST_ENTRY* Next;
    /* 08 */ _RTL_STACK_DATABASE_LOCK Lock;
};
using RTL_STD_LIST_HEAD  = struct _RTL_STD_LIST_HEAD;
using PRTL_STD_LIST_HEAD = struct _RTL_STD_LIST_HEAD*;

struct _HEAP_LFH_CONTEXT
{
    /* 00 */ void* BackendCtx;
    /* 08 */ _HEAP_SUBALLOCATOR_CALLBACKS Callbacks;
    /* 30 */ uint8_t* AffinityModArray;
    /* 38 */ uint8_t MaxAffinity;
    /* 39 */ uint8_t LockType;
    /* 3a */ int16_t MemStatsOffset;
    /* 3c */ _RTL_HP_LFH_CONFIG Config;
    /* 40 */ _HEAP_LFH_SUBSEGMENT_STATS BucketStats;
    /* 48 */ uint64_t SubsegmentCreationLock;
    /* 80 */ std::array<_HEAP_LFH_BUCKET*, 129> Buckets;
};
using HEAP_LFH_CONTEXT  = struct _HEAP_LFH_CONTEXT;
using PHEAP_LFH_CONTEXT = struct _HEAP_LFH_CONTEXT*;

struct _MMSUPPORT_FULL
{
    /* 00 */ _MMSUPPORT_INSTANCE Instance;
    /* c0 */ _MMSUPPORT_SHARED Shared;
};
using MMSUPPORT_FULL  = struct _MMSUPPORT_FULL;
using PMMSUPPORT_FULL = struct _MMSUPPORT_FULL*;

struct _PROCESS_EXTENDED_ENERGY_VALUES
{
    /* 00 */ _PROCESS_ENERGY_VALUES Base;
    /* 110 */ _PROCESS_ENERGY_VALUES_EXTENSION Extension;
};
using PROCESS_EXTENDED_ENERGY_VALUES  = struct _PROCESS_EXTENDED_ENERGY_VALUES;
using PPROCESS_EXTENDED_ENERGY_VALUES = struct _PROCESS_EXTENDED_ENERGY_VALUES*;

struct _XSAVE_AREA
{
    /* 00 */ _XSAVE_FORMAT LegacyState;
    /* 200 */ _XSAVE_AREA_HEADER Header;
};
using XSAVE_AREA  = struct _XSAVE_AREA;
using PXSAVE_AREA = struct _XSAVE_AREA*;

struct _CONTEXT
{
    /* 00 */ uint64_t P1Home;
    /* 08 */ uint64_t P2Home;
    /* 10 */ uint64_t P3Home;
    /* 18 */ uint64_t P4Home;
    /* 20 */ uint64_t P5Home;
    /* 28 */ uint64_t P6Home;
    /* 30 */ uint32_t ContextFlags;
    /* 34 */ uint32_t MxCsr;
    /* 38 */ uint16_t SegCs;
    /* 3a */ uint16_t SegDs;
    /* 3c */ uint16_t SegEs;
    /* 3e */ uint16_t SegFs;
    /* 40 */ uint16_t SegGs;
    /* 42 */ uint16_t SegSs;
    /* 44 */ uint32_t EFlags;
    /* 48 */ uint64_t Dr0;
    /* 50 */ uint64_t Dr1;
    /* 58 */ uint64_t Dr2;
    /* 60 */ uint64_t Dr3;
    /* 68 */ uint64_t Dr6;
    /* 70 */ uint64_t Dr7;
    /* 78 */ uint64_t Rax;
    /* 80 */ uint64_t Rcx;
    /* 88 */ uint64_t Rdx;
    /* 90 */ uint64_t Rbx;
    /* 98 */ uint64_t Rsp;
    /* a0 */ uint64_t Rbp;
    /* a8 */ uint64_t Rsi;
    /* b0 */ uint64_t Rdi;
    /* b8 */ uint64_t R8;
    /* c0 */ uint64_t R9;
    /* c8 */ uint64_t R10;
    /* d0 */ uint64_t R11;
    /* d8 */ uint64_t R12;
    /* e0 */ uint64_t R13;
    /* e8 */ uint64_t R14;
    /* f0 */ uint64_t R15;
    /* f8 */ uint64_t Rip;
    /* 100 */ _XSAVE_FORMAT FltSave;
    /* 100 */ std::array<_M128A, 2> Header;
    /* 120 */ std::array<_M128A, 8> Legacy;
    /* 1a0 */ _M128A Xmm0;
    /* 1b0 */ _M128A Xmm1;
    /* 1c0 */ _M128A Xmm2;
    /* 1d0 */ _M128A Xmm3;
    /* 1e0 */ _M128A Xmm4;
    /* 1f0 */ _M128A Xmm5;
    /* 200 */ _M128A Xmm6;
    /* 210 */ _M128A Xmm7;
    /* 220 */ _M128A Xmm8;
    /* 230 */ _M128A Xmm9;
    /* 240 */ _M128A Xmm10;
    /* 250 */ _M128A Xmm11;
    /* 260 */ _M128A Xmm12;
    /* 270 */ _M128A Xmm13;
    /* 280 */ _M128A Xmm14;
    /* 290 */ _M128A Xmm15;
    /* 300 */ std::array<_M128A, 26> VectorRegister;
    /* 4a0 */ uint64_t VectorControl;
    /* 4a8 */ uint64_t DebugControl;
    /* 4b0 */ uint64_t LastBranchToRip;
    /* 4b8 */ uint64_t LastBranchFromRip;
    /* 4c0 */ uint64_t LastExceptionToRip;
    /* 4c8 */ uint64_t LastExceptionFromRip;
};
using CONTEXT  = struct _CONTEXT;
using PCONTEXT = struct _CONTEXT*;

struct _FILE_GET_QUOTA_INFORMATION
{
    /* 00 */ uint32_t NextEntryOffset;
    /* 04 */ uint32_t SidLength;
    /* 08 */ _SID Sid;
};
using FILE_GET_QUOTA_INFORMATION  = struct _FILE_GET_QUOTA_INFORMATION;
using PFILE_GET_QUOTA_INFORMATION = struct _FILE_GET_QUOTA_INFORMATION*;

struct _DPH_HEAP_ROOT
{
    /* 00 */ uint32_t Signature;
    /* 04 */ uint32_t HeapFlags;
    /* 08 */ _RTL_CRITICAL_SECTION* HeapCritSect;
    /* 10 */ uint32_t nRemoteLockAcquired;
    /* 18 */ _DPH_HEAP_BLOCK* pVirtualStorageListHead;
    /* 20 */ _DPH_HEAP_BLOCK* pVirtualStorageListTail;
    /* 28 */ uint32_t nVirtualStorageRanges;
    /* 30 */ uint64_t nVirtualStorageBytes;
    /* 38 */ _RTL_AVL_TABLE BusyNodesTable;
    /* a0 */ _DPH_HEAP_BLOCK* NodeToAllocate;
    /* a8 */ uint32_t nBusyAllocations;
    /* b0 */ uint64_t nBusyAllocationBytesCommitted;
    /* b8 */ _DPH_HEAP_BLOCK* pFreeAllocationListHead;
    /* c0 */ _DPH_HEAP_BLOCK* pFreeAllocationListTail;
    /* c8 */ uint32_t nFreeAllocations;
    /* d0 */ uint64_t nFreeAllocationBytesCommitted;
    /* d8 */ _LIST_ENTRY AvailableAllocationHead;
    /* e8 */ uint32_t nAvailableAllocations;
    /* f0 */ uint64_t nAvailableAllocationBytesCommitted;
    /* f8 */ _DPH_HEAP_BLOCK* pUnusedNodeListHead;
    /* 100 */ _DPH_HEAP_BLOCK* pUnusedNodeListTail;
    /* 108 */ uint32_t nUnusedNodes;
    /* 110 */ uint64_t nBusyAllocationBytesAccessible;
    /* 118 */ _DPH_HEAP_BLOCK* pNodePoolListHead;
    /* 120 */ _DPH_HEAP_BLOCK* pNodePoolListTail;
    /* 128 */ uint32_t nNodePools;
    /* 130 */ uint64_t nNodePoolBytes;
    /* 138 */ _LIST_ENTRY NextHeap;
    /* 148 */ uint32_t ExtraFlags;
    /* 14c */ uint32_t Seed;
    /* 150 */ void* NormalHeap;
    /* 158 */ _RTL_TRACE_BLOCK* CreateStackTrace;
    /* 160 */ void* FirstThread;
};
using DPH_HEAP_ROOT  = struct _DPH_HEAP_ROOT;
using PDPH_HEAP_ROOT = struct _DPH_HEAP_ROOT*;

struct _KE_IDEAL_PROCESSOR_ASSIGNMENT_BLOCK
{
    /* 00 */ _KE_PROCESS_CONCURRENCY_COUNT ExpectedConcurrencyCount;
    /* 04 */ _KE_IDEAL_PROCESSOR_SET_BREAKPOINTS Breakpoints;
    /* 0c */ union
    {
        /* 00:0 */ uint32_t ConcurrencyCountFixed : 1;
        /* 00 */ uint32_t AllFlags;
    } AssignmentFlags;

    /* 10 */ _KAFFINITY_EX IdealProcessorSets;
};
using KE_IDEAL_PROCESSOR_ASSIGNMENT_BLOCK  = struct _KE_IDEAL_PROCESSOR_ASSIGNMENT_BLOCK;
using PKE_IDEAL_PROCESSOR_ASSIGNMENT_BLOCK = struct _KE_IDEAL_PROCESSOR_ASSIGNMENT_BLOCK*;

struct _WHEA_XPF_MCE_DESCRIPTOR
{
    /* 00 */ uint16_t Type;
    /* 02 */ uint8_t Enabled;
    /* 03 */ uint8_t NumberOfBanks;
    /* 04 */ _XPF_MCE_FLAGS Flags;
    /* 08 */ uint64_t MCG_Capability;
    /* 10 */ uint64_t MCG_GlobalControl;
    /* 18 */ std::array<_WHEA_XPF_MC_BANK_DESCRIPTOR, 32> Banks;
};
using WHEA_XPF_MCE_DESCRIPTOR  = struct _WHEA_XPF_MCE_DESCRIPTOR;
using PWHEA_XPF_MCE_DESCRIPTOR = struct _WHEA_XPF_MCE_DESCRIPTOR*;

struct _HEAP_SEGMENT
{
    /* 00 */ _HEAP_ENTRY Entry;
    /* 10 */ uint32_t SegmentSignature;
    /* 14 */ uint32_t SegmentFlags;
    /* 18 */ _LIST_ENTRY SegmentListEntry;
    /* 28 */ _HEAP* Heap;
    /* 30 */ void* BaseAddress;
    /* 38 */ uint32_t NumberOfPages;
    /* 40 */ _HEAP_ENTRY* FirstEntry;
    /* 48 */ _HEAP_ENTRY* LastValidEntry;
    /* 50 */ uint32_t NumberOfUnCommittedPages;
    /* 54 */ uint32_t NumberOfUnCommittedRanges;
    /* 58 */ uint16_t SegmentAllocatorBackTraceIndex;
    /* 5a */ uint16_t Reserved;
    /* 60 */ _LIST_ENTRY UCRSegmentList;
};
using HEAP_SEGMENT  = struct _HEAP_SEGMENT;
using PHEAP_SEGMENT = struct _HEAP_SEGMENT*;

struct _HEAP_VIRTUAL_ALLOC_ENTRY
{
    /* 00 */ _LIST_ENTRY Entry;
    /* 10 */ _HEAP_ENTRY_EXTRA ExtraStuff;
    /* 20 */ uint64_t CommitSize;
    /* 28 */ uint64_t ReserveSize;
    /* 30 */ _HEAP_ENTRY BusyBlock;
};
using HEAP_VIRTUAL_ALLOC_ENTRY  = struct _HEAP_VIRTUAL_ALLOC_ENTRY;
using PHEAP_VIRTUAL_ALLOC_ENTRY = struct _HEAP_VIRTUAL_ALLOC_ENTRY*;

struct _HEAP_FREE_ENTRY
{
    /* 00 */ _HEAP_ENTRY HeapEntry;
    /* 00 */ _HEAP_UNPACKED_ENTRY UnpackedEntry;
    /* 00 */ void* PreviousBlockPrivateData;
    /* 08 */ uint16_t Size;
    /* 0a */ uint8_t Flags;
    /* 0b */ uint8_t SmallTagIndex;
    /* 08 */ uint32_t SubSegmentCode;
    /* 0c */ uint16_t PreviousSize;
    /* 0e */ uint8_t SegmentOffset;
    /* 0e */ uint8_t LFHFlags;
    /* 0f */ uint8_t UnusedBytes;
    /* 08 */ uint64_t CompactHeader;
    /* 00 */ _HEAP_EXTENDED_ENTRY ExtendedEntry;
    /* 00 */ void* Reserved;
    /* 08 */ uint16_t FunctionIndex;
    /* 0a */ uint16_t ContextValue;
    /* 08 */ uint32_t InterceptorValue;
    /* 0c */ uint16_t UnusedBytesLength;
    /* 0e */ uint8_t EntryOffset;
    /* 0f */ uint8_t ExtendedBlockSignature;
    /* 00 */ void* ReservedForAlignment;
    /* 08 */ uint32_t Code1;
    /* 0c */ uint16_t Code2;
    /* 0e */ uint8_t Code3;
    /* 0f */ uint8_t Code4;
    /* 0c */ uint32_t Code234;
    /* 08 */ uint64_t AgregateCode;
    /* 10 */ _LIST_ENTRY FreeList;
};
using HEAP_FREE_ENTRY  = struct _HEAP_FREE_ENTRY;
using PHEAP_FREE_ENTRY = struct _HEAP_FREE_ENTRY*;

struct _IMAGE_NT_HEADERS64
{
    /* 00 */ uint32_t Signature;
    /* 04 */ _IMAGE_FILE_HEADER FileHeader;
    /* 18 */ _IMAGE_OPTIONAL_HEADER64 OptionalHeader;
};
using IMAGE_NT_HEADERS64  = struct _IMAGE_NT_HEADERS64;
using PIMAGE_NT_HEADERS64 = struct _IMAGE_NT_HEADERS64*;

struct _KUSER_SHARED_DATA
{
    /* 00 */ uint32_t TickCountLowDeprecated;
    /* 04 */ uint32_t TickCountMultiplier;
    /* 08 */ _KSYSTEM_TIME InterruptTime;
    /* 14 */ _KSYSTEM_TIME SystemTime;
    /* 20 */ _KSYSTEM_TIME TimeZoneBias;
    /* 2c */ uint16_t ImageNumberLow;
    /* 2e */ uint16_t ImageNumberHigh;
    /* 30 */ std::array<wchar_t, 260> NtSystemRoot;
    /* 238 */ uint32_t MaxStackTraceDepth;
    /* 23c */ uint32_t CryptoExponent;
    /* 240 */ uint32_t TimeZoneId;
    /* 244 */ uint32_t LargePageMinimum;
    /* 248 */ uint32_t AitSamplingValue;
    /* 24c */ uint32_t AppCompatFlag;
    /* 250 */ uint64_t RNGSeedVersion;
    /* 258 */ uint32_t GlobalValidationRunlevel;
    /* 25c */ int32_t TimeZoneBiasStamp;
    /* 260 */ uint32_t NtBuildNumber;
    /* 264 */ _NT_PRODUCT_TYPE NtProductType;
    /* 268 */ uint8_t ProductTypeIsValid;
    /* 269 */ std::array<uint8_t, 1> Reserved0;
    /* 26a */ uint16_t NativeProcessorArchitecture;
    /* 26c */ uint32_t NtMajorVersion;
    /* 270 */ uint32_t NtMinorVersion;
    /* 274 */ std::array<uint8_t, 64> ProcessorFeatures;
    /* 2b4 */ uint32_t Reserved1;
    /* 2b8 */ uint32_t Reserved3;
    /* 2bc */ uint32_t TimeSlip;
    /* 2c0 */ _ALTERNATIVE_ARCHITECTURE_TYPE AlternativeArchitecture;
    /* 2c4 */ uint32_t BootId;
    /* 2c8 */ _LARGE_INTEGER SystemExpirationDate;
    /* 2d0 */ uint32_t SuiteMask;
    /* 2d4 */ uint8_t KdDebuggerEnabled;
    /* 2d5 */ uint8_t MitigationPolicies;
    /* 2d5:0 */ uint8_t NXSupportPolicy             : 2;
    /* 2d5:2 */ uint8_t SEHValidationPolicy         : 2;
    /* 2d5:4 */ uint8_t CurDirDevicesSkippedForDlls : 2;
    /* 2d5:6 */ uint8_t Reserved                    : 2;
    /* 2d6 */ uint16_t CyclesPerYield;
    /* 2d8 */ uint32_t ActiveConsoleId;
    /* 2dc */ uint32_t DismountCount;
    /* 2e0 */ uint32_t ComPlusPackage;
    /* 2e4 */ uint32_t LastSystemRITEventTickCount;
    /* 2e8 */ uint32_t NumberOfPhysicalPages;
    /* 2ec */ uint8_t SafeBootMode;
    /* 2ed */ uint8_t VirtualizationFlags;
    /* 2ee */ std::array<uint8_t, 2> Reserved12;
    /* 2f0 */ uint32_t SharedDataFlags;
    /* 2f0:0 */ uint32_t DbgErrorPortPresent        : 1;
    /* 2f0:1 */ uint32_t DbgElevationEnabled        : 1;
    /* 2f0:2 */ uint32_t DbgVirtEnabled             : 1;
    /* 2f0:3 */ uint32_t DbgInstallerDetectEnabled  : 1;
    /* 2f0:4 */ uint32_t DbgLkgEnabled              : 1;
    /* 2f0:5 */ uint32_t DbgDynProcessorEnabled     : 1;
    /* 2f0:6 */ uint32_t DbgConsoleBrokerEnabled    : 1;
    /* 2f0:7 */ uint32_t DbgSecureBootEnabled       : 1;
    /* 2f0:8 */ uint32_t DbgMultiSessionSku         : 1;
    /* 2f0:9 */ uint32_t DbgMultiUsersInSessionSku  : 1;
    /* 2f0:10 */ uint32_t DbgStateSeparationEnabled : 1;
    /* 2f0:11 */ uint32_t SpareBits                 : 21;
    /* 2f4 */ std::array<uint32_t, 1> DataFlagsPad;
    /* 2f8 */ uint64_t TestRetInstruction;
    /* 300 */ int64_t QpcFrequency;
    /* 308 */ uint32_t SystemCall;
    /* 30c */ uint32_t Reserved2;
    /* 310 */ std::array<uint64_t, 2> SystemCallPad;
    /* 320 */ _KSYSTEM_TIME TickCount;
    /* 320 */ uint64_t TickCountQuad;
    /* 320 */ std::array<uint32_t, 3> ReservedTickCountOverlay;
    /* 32c */ std::array<uint32_t, 1> TickCountPad;
    /* 330 */ uint32_t Cookie;
    /* 334 */ std::array<uint32_t, 1> CookiePad;
    /* 338 */ int64_t ConsoleSessionForegroundProcessId;
    /* 340 */ uint64_t TimeUpdateLock;
    /* 348 */ uint64_t BaselineSystemTimeQpc;
    /* 350 */ uint64_t BaselineInterruptTimeQpc;
    /* 358 */ uint64_t QpcSystemTimeIncrement;
    /* 360 */ uint64_t QpcInterruptTimeIncrement;
    /* 368 */ uint8_t QpcSystemTimeIncrementShift;
    /* 369 */ uint8_t QpcInterruptTimeIncrementShift;
    /* 36a */ uint16_t UnparkedProcessorCount;
    /* 36c */ std::array<uint32_t, 4> EnclaveFeatureMask;
    /* 37c */ uint32_t TelemetryCoverageRound;
    /* 380 */ std::array<uint16_t, 16> UserModeGlobalLogger;
    /* 3a0 */ uint32_t ImageFileExecutionOptions;
    /* 3a4 */ uint32_t LangGenerationCount;
    /* 3a8 */ uint64_t Reserved4;
    /* 3b0 */ uint64_t InterruptTimeBias;
    /* 3b8 */ uint64_t QpcBias;
    /* 3c0 */ uint32_t ActiveProcessorCount;
    /* 3c4 */ uint8_t ActiveGroupCount;
    /* 3c5 */ uint8_t Reserved9;
    /* 3c6 */ uint16_t QpcData;
    /* 3c6 */ uint8_t QpcBypassEnabled;
    /* 3c7 */ uint8_t QpcShift;
    /* 3c8 */ _LARGE_INTEGER TimeZoneBiasEffectiveStart;
    /* 3d0 */ _LARGE_INTEGER TimeZoneBiasEffectiveEnd;
    /* 3d8 */ _XSTATE_CONFIGURATION XState;
    /* 720 */ _KSYSTEM_TIME FeatureConfigurationChangeStamp;
    /* 72c */ uint32_t Spare;
    /* 730 */ uint64_t UserPointerAuthMask;
};
using KUSER_SHARED_DATA  = struct _KUSER_SHARED_DATA;
using PKUSER_SHARED_DATA = struct _KUSER_SHARED_DATA*;

struct _WHEA_XPF_CMC_DESCRIPTOR
{
    /* 00 */ uint16_t Type;
    /* 02 */ uint8_t Enabled;
    /* 03 */ uint8_t NumberOfBanks;
    /* 04 */ uint32_t Reserved;
    /* 08 */ _WHEA_NOTIFICATION_DESCRIPTOR Notify;
    /* 24 */ std::array<_WHEA_XPF_MC_BANK_DESCRIPTOR, 32> Banks;
};
using WHEA_XPF_CMC_DESCRIPTOR  = struct _WHEA_XPF_CMC_DESCRIPTOR;
using PWHEA_XPF_CMC_DESCRIPTOR = struct _WHEA_XPF_CMC_DESCRIPTOR*;

struct _WHEA_GENERIC_ERROR_DESCRIPTOR_V2
{
    /* 00 */ uint16_t Type;
    /* 02 */ uint8_t Reserved;
    /* 03 */ uint8_t Enabled;
    /* 04 */ uint32_t ErrStatusBlockLength;
    /* 08 */ uint32_t RelatedErrorSourceId;
    /* 0c */ uint8_t ErrStatusAddressSpaceID;
    /* 0d */ uint8_t ErrStatusAddressBitWidth;
    /* 0e */ uint8_t ErrStatusAddressBitOffset;
    /* 0f */ uint8_t ErrStatusAddressAccessSize;
    /* 10 */ _LARGE_INTEGER ErrStatusAddress;
    /* 18 */ _WHEA_NOTIFICATION_DESCRIPTOR Notify;
    /* 34 */ uint8_t ReadAckAddressSpaceID;
    /* 35 */ uint8_t ReadAckAddressBitWidth;
    /* 36 */ uint8_t ReadAckAddressBitOffset;
    /* 37 */ uint8_t ReadAckAddressAccessSize;
    /* 38 */ _LARGE_INTEGER ReadAckAddress;
    /* 40 */ uint64_t ReadAckPreserveMask;
    /* 48 */ uint64_t ReadAckWriteMask;
};
using WHEA_GENERIC_ERROR_DESCRIPTOR_V2  = struct _WHEA_GENERIC_ERROR_DESCRIPTOR_V2;
using PWHEA_GENERIC_ERROR_DESCRIPTOR_V2 = struct _WHEA_GENERIC_ERROR_DESCRIPTOR_V2*;

struct _WHEA_GENERIC_ERROR_DESCRIPTOR
{
    /* 00 */ uint16_t Type;
    /* 02 */ uint8_t Reserved;
    /* 03 */ uint8_t Enabled;
    /* 04 */ uint32_t ErrStatusBlockLength;
    /* 08 */ uint32_t RelatedErrorSourceId;
    /* 0c */ uint8_t ErrStatusAddressSpaceID;
    /* 0d */ uint8_t ErrStatusAddressBitWidth;
    /* 0e */ uint8_t ErrStatusAddressBitOffset;
    /* 0f */ uint8_t ErrStatusAddressAccessSize;
    /* 10 */ _LARGE_INTEGER ErrStatusAddress;
    /* 18 */ _WHEA_NOTIFICATION_DESCRIPTOR Notify;
};
using WHEA_GENERIC_ERROR_DESCRIPTOR  = struct _WHEA_GENERIC_ERROR_DESCRIPTOR;
using PWHEA_GENERIC_ERROR_DESCRIPTOR = struct _WHEA_GENERIC_ERROR_DESCRIPTOR*;

struct _PROCESSOR_PROFILE_CONTROL_AREA
{
    /* 00 */ _PEBS_DS_SAVE_AREA PebsDsSaveArea;
};
using PROCESSOR_PROFILE_CONTROL_AREA  = struct _PROCESSOR_PROFILE_CONTROL_AREA;
using PPROCESSOR_PROFILE_CONTROL_AREA = struct _PROCESSOR_PROFILE_CONTROL_AREA*;

struct _PROC_IDLE_ACCOUNTING
{
    /* 00 */ uint32_t StateCount;
    /* 04 */ uint32_t TotalTransitions;
    /* 08 */ uint32_t ResetCount;
    /* 0c */ uint32_t AbortCount;
    /* 10 */ uint64_t StartTime;
    /* 18 */ uint64_t PriorIdleTime;
    /* 20 */ PPM_IDLE_BUCKET_TIME_TYPE TimeUnit;
    /* 28 */ std::array<_PROC_IDLE_STATE_ACCOUNTING, 1> State;
};
using PROC_IDLE_ACCOUNTING  = struct _PROC_IDLE_ACCOUNTING;
using PPROC_IDLE_ACCOUNTING = struct _PROC_IDLE_ACCOUNTING*;

struct _RTL_DYNAMIC_TIME_ZONE_INFORMATION
{
    /* 00 */ _RTL_TIME_ZONE_INFORMATION tzi;
    /* ac */ std::array<wchar_t, 128> TimeZoneKeyName;
    /* 1ac */ uint8_t DynamicDaylightTimeDisabled;
};
using RTL_DYNAMIC_TIME_ZONE_INFORMATION  = struct _RTL_DYNAMIC_TIME_ZONE_INFORMATION;
using PRTL_DYNAMIC_TIME_ZONE_INFORMATION = struct _RTL_DYNAMIC_TIME_ZONE_INFORMATION*;

struct _LOOKASIDE_LIST_EX
{
    /* 00 */ _GENERAL_LOOKASIDE_POOL L;
};
using LOOKASIDE_LIST_EX  = struct _LOOKASIDE_LIST_EX;
using PLOOKASIDE_LIST_EX = struct _LOOKASIDE_LIST_EX*;

struct _OBJECT_TYPE
{
    /* 00 */ _LIST_ENTRY TypeList;
    /* 10 */ _UNICODE_STRING Name;
    /* 20 */ void* DefaultObject;
    /* 28 */ uint8_t Index;
    /* 2c */ uint32_t TotalNumberOfObjects;
    /* 30 */ uint32_t TotalNumberOfHandles;
    /* 34 */ uint32_t HighWaterNumberOfObjects;
    /* 38 */ uint32_t HighWaterNumberOfHandles;
    /* 40 */ _OBJECT_TYPE_INITIALIZER TypeInfo;
    /* b8 */ _EX_PUSH_LOCK TypeLock;
    /* c0 */ uint32_t Key;
    /* c8 */ _LIST_ENTRY CallbackList;
};
using OBJECT_TYPE  = struct _OBJECT_TYPE;
using POBJECT_TYPE = struct _OBJECT_TYPE*;

struct _IO_STACK_LOCATION
{
    /* 00 */ uint8_t MajorFunction;
    /* 01 */ uint8_t MinorFunction;
    /* 02 */ uint8_t Flags;
    /* 03 */ uint8_t Control;
    /* 08 */ union
    {
        /* 00 */ struct
        {
            /* 00 */ _IO_SECURITY_CONTEXT* SecurityContext;
            /* 08 */ uint32_t Options;
            /* 10 */ uint16_t FileAttributes;
            /* 12 */ uint16_t ShareAccess;
            /* 18 */ uint32_t EaLength;
        } Create;

        /* 00 */ struct
        {
            /* 00 */ _IO_SECURITY_CONTEXT* SecurityContext;
            /* 08 */ uint32_t Options;
            /* 10 */ uint16_t Reserved;
            /* 12 */ uint16_t ShareAccess;
            /* 18 */ _NAMED_PIPE_CREATE_PARAMETERS* Parameters;
        } CreatePipe;

        /* 00 */ struct
        {
            /* 00 */ _IO_SECURITY_CONTEXT* SecurityContext;
            /* 08 */ uint32_t Options;
            /* 10 */ uint16_t Reserved;
            /* 12 */ uint16_t ShareAccess;
            /* 18 */ _MAILSLOT_CREATE_PARAMETERS* Parameters;
        } CreateMailslot;

        /* 00 */ struct
        {
            /* 00 */ uint32_t Length;
            /* 08 */ uint32_t Key;
            /* 0c */ uint32_t Flags;
            /* 10 */ _LARGE_INTEGER ByteOffset;
        } Read;

        /* 00 */ struct
        {
            /* 00 */ uint32_t Length;
            /* 08 */ uint32_t Key;
            /* 0c */ uint32_t Flags;
            /* 10 */ _LARGE_INTEGER ByteOffset;
        } Write;

        /* 00 */ struct
        {
            /* 00 */ uint32_t Length;
            /* 08 */ _UNICODE_STRING* FileName;
            /* 10 */ _FILE_INFORMATION_CLASS FileInformationClass;
            /* 18 */ uint32_t FileIndex;
        } QueryDirectory;

        /* 00 */ struct
        {
            /* 00 */ uint32_t Length;
            /* 08 */ uint32_t CompletionFilter;
        } NotifyDirectory;

        /* 00 */ struct
        {
            /* 00 */ uint32_t Length;
            /* 08 */ uint32_t CompletionFilter;
            /* 10 */ _DIRECTORY_NOTIFY_INFORMATION_CLASS DirectoryNotifyInformationClass;
        } NotifyDirectoryEx;

        /* 00 */ struct
        {
            /* 00 */ uint32_t Length;
            /* 08 */ _FILE_INFORMATION_CLASS FileInformationClass;
        } QueryFile;

        /* 00 */ struct
        {
            /* 00 */ uint32_t Length;
            /* 08 */ _FILE_INFORMATION_CLASS FileInformationClass;
            /* 10 */ _FILE_OBJECT* FileObject;
            /* 18 */ uint8_t ReplaceIfExists;
            /* 19 */ uint8_t AdvanceOnly;
            /* 18 */ uint32_t ClusterCount;
            /* 18 */ void* DeleteHandle;
        } SetFile;

        /* 00 */ struct
        {
            /* 00 */ uint32_t Length;
            /* 08 */ void* EaList;
            /* 10 */ uint32_t EaListLength;
            /* 18 */ uint32_t EaIndex;
        } QueryEa;

        /* 00 */ struct
        {
            /* 00 */ uint32_t Length;
        } SetEa;

        /* 00 */ struct
        {
            /* 00 */ uint32_t Length;
            /* 08 */ _FSINFOCLASS FsInformationClass;
        } QueryVolume;

        /* 00 */ struct
        {
            /* 00 */ uint32_t Length;
            /* 08 */ _FSINFOCLASS FsInformationClass;
        } SetVolume;

        /* 00 */ struct
        {
            /* 00 */ uint32_t OutputBufferLength;
            /* 08 */ uint32_t InputBufferLength;
            /* 10 */ uint32_t FsControlCode;
            /* 18 */ void* Type3InputBuffer;
        } FileSystemControl;

        /* 00 */ struct
        {
            /* 00 */ _LARGE_INTEGER* Length;
            /* 08 */ uint32_t Key;
            /* 10 */ _LARGE_INTEGER ByteOffset;
        } LockControl;

        /* 00 */ struct
        {
            /* 00 */ uint32_t OutputBufferLength;
            /* 08 */ uint32_t InputBufferLength;
            /* 10 */ uint32_t IoControlCode;
            /* 18 */ void* Type3InputBuffer;
        } DeviceIoControl;

        /* 00 */ struct
        {
            /* 00 */ uint32_t SecurityInformation;
            /* 08 */ uint32_t Length;
        } QuerySecurity;

        /* 00 */ struct
        {
            /* 00 */ uint32_t SecurityInformation;
            /* 08 */ void* SecurityDescriptor;
        } SetSecurity;

        /* 00 */ struct
        {
            /* 00 */ _VPB* Vpb;
            /* 08 */ _DEVICE_OBJECT* DeviceObject;
            /* 10 */ uint32_t OutputBufferLength;
        } MountVolume;

        /* 00 */ struct
        {
            /* 00 */ _VPB* Vpb;
            /* 08 */ _DEVICE_OBJECT* DeviceObject;
        } VerifyVolume;

        /* 00 */ struct
        {
            /* 00 */ _SCSI_REQUEST_BLOCK* Srb;
        } Scsi;

        /* 00 */ struct
        {
            /* 00 */ uint32_t Length;
            /* 08 */ void* StartSid;
            /* 10 */ _FILE_GET_QUOTA_INFORMATION* SidList;
            /* 18 */ uint32_t SidListLength;
        } QueryQuota;

        /* 00 */ struct
        {
            /* 00 */ uint32_t Length;
        } SetQuota;

        /* 00 */ struct
        {
            /* 00 */ _DEVICE_RELATION_TYPE Type;
        } QueryDeviceRelations;

        /* 00 */ struct
        {
            /* 00 */ _GUID* InterfaceType;
            /* 08 */ uint16_t Size;
            /* 0a */ uint16_t Version;
            /* 10 */ _INTERFACE* Interface;
            /* 18 */ void* InterfaceSpecificData;
        } QueryInterface;

        /* 00 */ struct
        {
            /* 00 */ _DEVICE_CAPABILITIES* Capabilities;
        } DeviceCapabilities;

        /* 00 */ struct
        {
            /* 00 */ _IO_RESOURCE_REQUIREMENTS_LIST* IoResourceRequirementList;
        } FilterResourceRequirements;

        /* 00 */ struct
        {
            /* 00 */ uint32_t WhichSpace;
            /* 08 */ void* Buffer;
            /* 10 */ uint32_t Offset;
            /* 18 */ uint32_t Length;
        } ReadWriteConfig;

        /* 00 */ struct
        {
            /* 00 */ uint8_t Lock;
        } SetLock;

        /* 00 */ struct
        {
            /* 00 */ BUS_QUERY_ID_TYPE IdType;
        } QueryId;

        /* 00 */ struct
        {
            /* 00 */ DEVICE_TEXT_TYPE DeviceTextType;
            /* 08 */ uint32_t LocaleId;
        } QueryDeviceText;

        /* 00 */ struct
        {
            /* 00 */ uint8_t InPath;
            /* 01 */ std::array<uint8_t, 3> Reserved;
            /* 08 */ _DEVICE_USAGE_NOTIFICATION_TYPE Type;
        } UsageNotification;

        /* 00 */ struct
        {
            /* 00 */ _SYSTEM_POWER_STATE PowerState;
        } WaitWake;

        /* 00 */ struct
        {
            /* 00 */ _POWER_SEQUENCE* PowerSequence;
        } PowerSequence;

        /* 00 */ struct
        {
            /* 00 */ uint32_t SystemContext;
            /* 00 */ _SYSTEM_POWER_STATE_CONTEXT SystemPowerStateContext;
            /* 08 */ _POWER_STATE_TYPE Type;
            /* 10 */ _POWER_STATE State;
            /* 18 */ POWER_ACTION ShutdownType;
        } Power;

        /* 00 */ struct
        {
            /* 00 */ _CM_RESOURCE_LIST* AllocatedResources;
            /* 08 */ _CM_RESOURCE_LIST* AllocatedResourcesTranslated;
        } StartDevice;

        /* 00 */ struct
        {
            /* 00 */ uint64_t ProviderId;
            /* 08 */ void* DataPath;
            /* 10 */ uint32_t BufferSize;
            /* 18 */ void* Buffer;
        } WMI;

        /* 00 */ struct
        {
            /* 00 */ void* Argument1;
            /* 08 */ void* Argument2;
            /* 10 */ void* Argument3;
            /* 18 */ void* Argument4;
        } Others;
    } Parameters;

    /* 28 */ _DEVICE_OBJECT* DeviceObject;
    /* 30 */ _FILE_OBJECT* FileObject;
    /* 38 */ std::function<int32_t(_DEVICE_OBJECT*, _IRP*, void*)> CompletionRoutine;
    /* 40 */ void* Context;
};
using IO_STACK_LOCATION  = struct _IO_STACK_LOCATION;
using PIO_STACK_LOCATION = struct _IO_STACK_LOCATION*;

struct _WHEA_EVENT_LOG_ENTRY
{
    /* 00 */ _WHEA_EVENT_LOG_ENTRY_HEADER Header;
};
using WHEA_EVENT_LOG_ENTRY  = struct _WHEA_EVENT_LOG_ENTRY;
using PWHEA_EVENT_LOG_ENTRY = struct _WHEA_EVENT_LOG_ENTRY*;

struct _KTHREAD_COUNTERS
{
    /* 00 */ uint64_t WaitReasonBitMap;
    /* 08 */ _THREAD_PERFORMANCE_DATA* UserData;
    /* 10 */ uint32_t Flags;
    /* 14 */ uint32_t ContextSwitches;
    /* 18 */ uint64_t CycleTimeBias;
    /* 20 */ uint64_t HardwareCounters;
    /* 28 */ std::array<_COUNTER_READING, 16> HwCounter;
};
using KTHREAD_COUNTERS  = struct _KTHREAD_COUNTERS;
using PKTHREAD_COUNTERS = struct _KTHREAD_COUNTERS*;

struct _THREAD_PERFORMANCE_DATA
{
    /* 00 */ uint16_t Size;
    /* 02 */ uint16_t Version;
    /* 04 */ _PROCESSOR_NUMBER ProcessorNumber;
    /* 08 */ uint32_t ContextSwitches;
    /* 0c */ uint32_t HwCountersCount;
    /* 10 */ uint64_t UpdateCount;
    /* 18 */ uint64_t WaitReasonBitMap;
    /* 20 */ uint64_t HardwareCounters;
    /* 28 */ _COUNTER_READING CycleTime;
    /* 40 */ std::array<_COUNTER_READING, 16> HwCounters;
};
using THREAD_PERFORMANCE_DATA  = struct _THREAD_PERFORMANCE_DATA;
using PTHREAD_PERFORMANCE_DATA = struct _THREAD_PERFORMANCE_DATA*;

struct _IO_RESOURCE_LIST
{
    /* 00 */ uint16_t Version;
    /* 02 */ uint16_t Revision;
    /* 04 */ uint32_t Count;
    /* 08 */ std::array<_IO_RESOURCE_DESCRIPTOR, 1> Descriptors;
};
using IO_RESOURCE_LIST  = struct _IO_RESOURCE_LIST;
using PIO_RESOURCE_LIST = struct _IO_RESOURCE_LIST*;

struct _FS_FILTER_CALLBACK_DATA
{
    /* 00 */ uint32_t SizeOfFsFilterCallbackData;
    /* 04 */ uint8_t Operation;
    /* 05 */ uint8_t Reserved;
    /* 08 */ _DEVICE_OBJECT* DeviceObject;
    /* 10 */ _FILE_OBJECT* FileObject;
    /* 18 */ _FS_FILTER_PARAMETERS Parameters;
};
using FS_FILTER_CALLBACK_DATA  = struct _FS_FILTER_CALLBACK_DATA;
using PFS_FILTER_CALLBACK_DATA = struct _FS_FILTER_CALLBACK_DATA*;

struct _FAST_MUTEX
{
    /* 00 */ int32_t Count;
    /* 08 */ void* Owner;
    /* 10 */ uint32_t Contention;
    /* 18 */ _KEVENT Event;
    /* 30 */ uint32_t OldIrql;
};
using FAST_MUTEX  = struct _FAST_MUTEX;
using PFAST_MUTEX = struct _FAST_MUTEX*;

struct _EJOB
{
    /* 00 */ _KEVENT Event;
    /* 18 */ _LIST_ENTRY JobLinks;
    /* 28 */ _LIST_ENTRY ProcessListHead;
    /* 38 */ _ERESOURCE JobLock;
    /* a0 */ _LARGE_INTEGER TotalUserTime;
    /* a8 */ _LARGE_INTEGER TotalKernelTime;
    /* b0 */ _LARGE_INTEGER TotalCycleTime;
    /* b8 */ _LARGE_INTEGER ThisPeriodTotalUserTime;
    /* c0 */ _LARGE_INTEGER ThisPeriodTotalKernelTime;
    /* c8 */ uint64_t TotalContextSwitches;
    /* d0 */ uint32_t TotalPageFaultCount;
    /* d4 */ uint32_t TotalProcesses;
    /* d8 */ uint32_t ActiveProcesses;
    /* dc */ uint32_t TotalTerminatedProcesses;
    /* e0 */ _LARGE_INTEGER PerProcessUserTimeLimit;
    /* e8 */ _LARGE_INTEGER PerJobUserTimeLimit;
    /* f0 */ uint64_t MinimumWorkingSetSize;
    /* f8 */ uint64_t MaximumWorkingSetSize;
    /* 100 */ uint32_t LimitFlags;
    /* 104 */ uint32_t ActiveProcessLimit;
    /* 108 */ _KAFFINITY_EX Affinity;
    /* 210 */ _JOB_ACCESS_STATE* AccessState;
    /* 218 */ void* AccessStateQuotaReference;
    /* 220 */ uint32_t UIRestrictionsClass;
    /* 224 */ uint32_t EndOfJobTimeAction;
    /* 228 */ void* CompletionPort;
    /* 230 */ void* CompletionKey;
    /* 238 */ uint64_t CompletionCount;
    /* 240 */ uint32_t SessionId;
    /* 244 */ uint32_t SchedulingClass;
    /* 248 */ uint64_t ReadOperationCount;
    /* 250 */ uint64_t WriteOperationCount;
    /* 258 */ uint64_t OtherOperationCount;
    /* 260 */ uint64_t ReadTransferCount;
    /* 268 */ uint64_t WriteTransferCount;
    /* 270 */ uint64_t OtherTransferCount;
    /* 278 */ _PROCESS_DISK_COUNTERS DiskIoInfo;
    /* 2a0 */ uint64_t ProcessMemoryLimit;
    /* 2a8 */ uint64_t JobMemoryLimit;
    /* 2b0 */ uint64_t JobTotalMemoryLimit;
    /* 2b8 */ uint64_t PeakProcessMemoryUsed;
    /* 2c0 */ uint64_t PeakJobMemoryUsed;
    /* 2c8 */ _KAFFINITY_EX EffectiveAffinity;
    /* 3d0 */ _LARGE_INTEGER EffectivePerProcessUserTimeLimit;
    /* 3d8 */ uint64_t EffectiveMinimumWorkingSetSize;
    /* 3e0 */ uint64_t EffectiveMaximumWorkingSetSize;
    /* 3e8 */ uint64_t EffectiveProcessMemoryLimit;
    /* 3f0 */ _EJOB* EffectiveProcessMemoryLimitJob;
    /* 3f8 */ _EJOB* EffectivePerProcessUserTimeLimitJob;
    /* 400 */ _EJOB* EffectiveNetIoRateLimitJob;
    /* 408 */ _EJOB* EffectiveHeapAttributionJob;
    /* 410 */ uint32_t EffectiveLimitFlags;
    /* 414 */ uint32_t EffectiveSchedulingClass;
    /* 418 */ uint32_t EffectiveFreezeCount;
    /* 41c */ uint32_t EffectiveGraphicsFreezeCount;
    /* 420 */ uint32_t EffectiveBackgroundCount;
    /* 424 */ uint32_t EffectiveSwapCount;
    /* 428 */ uint32_t EffectiveNotificationLimitCount;
    /* 42c */ uint32_t EffectiveIoPriorityLimit;
    /* 430 */ uint32_t IoPriorityLimit;
    /* 434 */ uint32_t EffectivePagePriorityLimit;
    /* 438 */ uint32_t PagePriorityLimit;
    /* 43c */ uint8_t EffectivePriorityClass;
    /* 43d */ uint8_t PriorityClass;
    /* 43e */ uint8_t NestingDepth;
    /* 43f */ std::array<uint8_t, 1> Reserved1;
    /* 440 */ uint32_t CompletionFilter;
    /* 448 */ _WNF_STATE_NAME WakeChannel;
    /* 448 */ _PS_JOB_WAKE_INFORMATION WakeInfo;
    /* 490 */ _JOBOBJECT_WAKE_FILTER WakeFilter;
    /* 498 */ uint32_t LowEdgeLatchFilter;
    /* 4a0 */ _EJOB* NotificationLink;
    /* 4a8 */ uint64_t CurrentJobMemoryUsed;
    /* 4b0 */ _JOB_NOTIFICATION_INFORMATION* NotificationInfo;
    /* 4b8 */ void* NotificationInfoQuotaReference;
    /* 4c0 */ _IO_MINI_COMPLETION_PACKET_USER* NotificationPacket;
    /* 4c8 */ _JOB_CPU_RATE_CONTROL* CpuRateControl;
    /* 4d0 */ void* EffectiveSchedulingGroup;
    /* 4d8 */ uint64_t ReadyTime;
    /* 4e0 */ _EX_PUSH_LOCK MemoryLimitsLock;
    /* 4e8 */ _LIST_ENTRY SiblingJobLinks;
    /* 4f8 */ _LIST_ENTRY ChildJobListHead;
    /* 508 */ _EJOB* ParentJob;
    /* 510 */ _EJOB* RootJob;
    /* 518 */ _LIST_ENTRY IteratorListHead;
    /* 528 */ uint64_t AncestorCount;
    /* 530 */ _EJOB** Ancestors;
    /* 530 */ void* SessionObject;
    /* 538 */ _EPROCESS_VALUES Accounting;
    /* 5a0 */ uint32_t ShadowActiveProcessCount;
    /* 5a4 */ uint32_t ActiveAuxiliaryProcessCount;
    /* 5a8 */ uint32_t SequenceNumber;
    /* 5ac */ uint32_t JobId;
    /* 5b0 */ _GUID ContainerId;
    /* 5c0 */ _GUID ContainerTelemetryId;
    /* 5d0 */ _ESERVERSILO_GLOBALS* ServerSiloGlobals;
    /* 5d8 */ _PS_PROPERTY_SET PropertySet;
    /* 5f0 */ _PSP_STORAGE* Storage;
    /* 5f8 */ _JOB_NET_RATE_CONTROL* NetRateControl;
    /* 600 */ uint32_t JobFlags;
    /* 600:0 */ uint32_t CloseDone                      : 1;
    /* 600:1 */ uint32_t MultiGroup                     : 1;
    /* 600:2 */ uint32_t OutstandingNotification        : 1;
    /* 600:3 */ uint32_t NotificationInProgress         : 1;
    /* 600:4 */ uint32_t UILimits                       : 1;
    /* 600:5 */ uint32_t CpuRateControlActive           : 1;
    /* 600:6 */ uint32_t OwnCpuRateControl              : 1;
    /* 600:7 */ uint32_t Terminating                    : 1;
    /* 600:8 */ uint32_t WorkingSetLock                 : 1;
    /* 600:9 */ uint32_t JobFrozen                      : 1;
    /* 600:10 */ uint32_t Background                    : 1;
    /* 600:11 */ uint32_t WakeNotificationAllocated     : 1;
    /* 600:12 */ uint32_t WakeNotificationEnabled       : 1;
    /* 600:13 */ uint32_t WakeNotificationPending       : 1;
    /* 600:14 */ uint32_t LimitNotificationRequired     : 1;
    /* 600:15 */ uint32_t ZeroCountNotificationRequired : 1;
    /* 600:16 */ uint32_t CycleTimeNotificationRequired : 1;
    /* 600:17 */ uint32_t CycleTimeNotificationPending  : 1;
    /* 600:18 */ uint32_t TimersVirtualized             : 1;
    /* 600:19 */ uint32_t JobSwapped                    : 1;
    /* 600:20 */ uint32_t ViolationDetected             : 1;
    /* 600:21 */ uint32_t EmptyJobNotified              : 1;
    /* 600:22 */ uint32_t NoSystemCharge                : 1;
    /* 600:23 */ uint32_t DropNoWakeCharges             : 1;
    /* 600:24 */ uint32_t NoWakeChargePolicyDecided     : 1;
    /* 600:25 */ uint32_t NetRateControlActive          : 1;
    /* 600:26 */ uint32_t OwnNetRateControl             : 1;
    /* 600:27 */ uint32_t IoRateControlActive           : 1;
    /* 600:28 */ uint32_t OwnIoRateControl              : 1;
    /* 600:29 */ uint32_t DisallowNewProcesses          : 1;
    /* 600:30 */ uint32_t Silo                          : 1;
    /* 600:31 */ uint32_t ContainerTelemetryIdSet       : 1;
    /* 604 */ uint32_t JobFlags2;
    /* 604:0 */ uint32_t ParentLocked                            : 1;
    /* 604:1 */ uint32_t EnableUsermodeSiloThreadImpersonation   : 1;
    /* 604:2 */ uint32_t DisallowUsermodeSiloThreadImpersonation : 1;
    /* 604:3 */ uint32_t JobGraphicsFreezeOptimized              : 1;
    /* 608 */ _PROCESS_EXTENDED_ENERGY_VALUES* EnergyValues;
    /* 610 */ uint64_t SharedCommitCharge;
    /* 618 */ uint32_t DiskIoAttributionUserRefCount;
    /* 61c */ uint32_t DiskIoAttributionRefCount;
    /* 620 */ void* DiskIoAttributionContext;
    /* 620 */ _EJOB* DiskIoAttributionOwnerJob;
    /* 628 */ _JOB_RATE_CONTROL_HEADER IoRateControlHeader;
    /* 650 */ _PS_IO_CONTROL_ENTRY GlobalIoControl;
    /* 688 */ int32_t IoControlStateLock;
    /* 690 */ _RTL_RB_TREE VolumeIoControlTree;
    /* 6a0 */ uint64_t IoRateOverQuotaHistory;
    /* 6a8 */ uint32_t IoRateCurrentGeneration;
    /* 6ac */ uint32_t IoRateLastQueryGeneration;
    /* 6b0 */ uint32_t IoRateGenerationLength;
    /* 6b4 */ uint32_t IoRateOverQuotaNotifySequenceId;
    /* 6b8 */ uint64_t LastThrottledIoTime;
    /* 6c0 */ _EX_PUSH_LOCK IoControlLock;
    /* 6c8 */ int64_t SiloHardReferenceCount;
    /* 6d0 */ _WORK_QUEUE_ITEM RundownWorkItem;
    /* 6f0 */ void* PartitionObject;
    /* 6f8 */ _EJOB* PartitionOwnerJob;
    /* 700 */ _JOBOBJECT_ENERGY_TRACKING_STATE EnergyTrackingState;
    /* 708 */ uint64_t KernelWaitTime;
    /* 710 */ uint64_t UserWaitTime;
};
using EJOB  = struct _EJOB;
using PEJOB = struct _EJOB*;

struct _FILE_OBJECT
{
    /* 00 */ int16_t Type;
    /* 02 */ int16_t Size;
    /* 08 */ _DEVICE_OBJECT* DeviceObject;
    /* 10 */ _VPB* Vpb;
    /* 18 */ void* FsContext;
    /* 20 */ void* FsContext2;
    /* 28 */ _SECTION_OBJECT_POINTERS* SectionObjectPointer;
    /* 30 */ void* PrivateCacheMap;
    /* 38 */ int32_t FinalStatus;
    /* 40 */ _FILE_OBJECT* RelatedFileObject;
    /* 48 */ uint8_t LockOperation;
    /* 49 */ uint8_t DeletePending;
    /* 4a */ uint8_t ReadAccess;
    /* 4b */ uint8_t WriteAccess;
    /* 4c */ uint8_t DeleteAccess;
    /* 4d */ uint8_t SharedRead;
    /* 4e */ uint8_t SharedWrite;
    /* 4f */ uint8_t SharedDelete;
    /* 50 */ uint32_t Flags;
    /* 58 */ _UNICODE_STRING FileName;
    /* 68 */ _LARGE_INTEGER CurrentByteOffset;
    /* 70 */ uint32_t Waiters;
    /* 74 */ uint32_t Busy;
    /* 78 */ void* LastLock;
    /* 80 */ _KEVENT Lock;
    /* 98 */ _KEVENT Event;
    /* b0 */ _IO_COMPLETION_CONTEXT* CompletionContext;
    /* b8 */ uint64_t IrpListLock;
    /* c0 */ _LIST_ENTRY IrpList;
    /* d0 */ void* FileObjectExtension;
};
using FILE_OBJECT  = struct _FILE_OBJECT;
using PFILE_OBJECT = struct _FILE_OBJECT*;

struct _PF_KERNEL_GLOBALS
{
    /* 00 */ uint64_t AccessBufferAgeThreshold;
    /* 08 */ _EX_RUNDOWN_REF AccessBufferRef;
    /* 10 */ _KEVENT AccessBufferExistsEvent;
    /* 28 */ uint32_t AccessBufferMax;
    /* 40 */ _SLIST_HEADER AccessBufferList;
    /* 50 */ int32_t StreamSequenceNumber;
    /* 54 */ uint32_t Flags;
    /* 58 */ int32_t ScenarioPrefetchCount;
};
using PF_KERNEL_GLOBALS  = struct _PF_KERNEL_GLOBALS;
using PPF_KERNEL_GLOBALS = struct _PF_KERNEL_GLOBALS*;

struct _KTHREAD
{
    /* 00 */ _DISPATCHER_HEADER Header;
    /* 18 */ void* SListFaultAddress;
    /* 20 */ uint64_t QuantumTarget;
    /* 28 */ void* InitialStack;
    /* 30 */ void* StackLimit;
    /* 38 */ void* StackBase;
    /* 40 */ uint64_t ThreadLock;
    /* 48 */ uint64_t CycleTime;
    /* 50 */ uint32_t CurrentRunTime;
    /* 54 */ uint32_t ExpectedRunTime;
    /* 58 */ void* KernelStack;
    /* 60 */ _XSAVE_FORMAT* StateSaveArea;
    /* 68 */ _KSCHEDULING_GROUP* SchedulingGroup;
    /* 70 */ _KWAIT_STATUS_REGISTER WaitRegister;
    /* 71 */ uint8_t Running;
    /* 72 */ std::array<uint8_t, 2> Alerted;
    /* 74:0 */ uint32_t AutoBoostActive          : 1;
    /* 74:1 */ uint32_t ReadyTransition          : 1;
    /* 74:2 */ uint32_t WaitNext                 : 1;
    /* 74:3 */ uint32_t SystemAffinityActive     : 1;
    /* 74:4 */ uint32_t Alertable                : 1;
    /* 74:5 */ uint32_t UserStackWalkActive      : 1;
    /* 74:6 */ uint32_t ApcInterruptRequest      : 1;
    /* 74:7 */ uint32_t QuantumEndMigrate        : 1;
    /* 74:8 */ uint32_t SecureThread             : 1;
    /* 74:9 */ uint32_t TimerActive              : 1;
    /* 74:10 */ uint32_t SystemThread            : 1;
    /* 74:11 */ uint32_t ProcessDetachActive     : 1;
    /* 74:12 */ uint32_t CalloutActive           : 1;
    /* 74:13 */ uint32_t ScbReadyQueue           : 1;
    /* 74:14 */ uint32_t ApcQueueable            : 1;
    /* 74:15 */ uint32_t ReservedStackInUse      : 1;
    /* 74:16 */ uint32_t Spare                   : 1;
    /* 74:17 */ uint32_t TimerSuspended          : 1;
    /* 74:18 */ uint32_t SuspendedWaitMode       : 1;
    /* 74:19 */ uint32_t SuspendSchedulerApcWait : 1;
    /* 74:20 */ uint32_t CetUserShadowStack      : 1;
    /* 74:21 */ uint32_t BypassProcessFreeze     : 1;
    /* 74:22 */ uint32_t CetKernelShadowStack    : 1;
    /* 74:23 */ uint32_t StateSaveAreaDecoupled  : 1;
    /* 74:24 */ uint32_t Reserved                : 8;
    /* 74 */ int32_t MiscFlags;
    /* 78:0 */ uint32_t UserIdealProcessorFixed          : 1;
    /* 78:1 */ uint32_t IsolationWidth                   : 1;
    /* 78:2 */ uint32_t AutoAlignment                    : 1;
    /* 78:3 */ uint32_t DisableBoost                     : 1;
    /* 78:4 */ uint32_t AlertedByThreadId                : 1;
    /* 78:5 */ uint32_t QuantumDonation                  : 1;
    /* 78:6 */ uint32_t EnableStackSwap                  : 1;
    /* 78:7 */ uint32_t GuiThread                        : 1;
    /* 78:8 */ uint32_t DisableQuantum                   : 1;
    /* 78:9 */ uint32_t ChargeOnlySchedulingGroup        : 1;
    /* 78:10 */ uint32_t DeferPreemption                 : 1;
    /* 78:11 */ uint32_t QueueDeferPreemption            : 1;
    /* 78:12 */ uint32_t ForceDeferSchedule              : 1;
    /* 78:13 */ uint32_t SharedReadyQueueAffinity        : 1;
    /* 78:14 */ uint32_t FreezeCount                     : 1;
    /* 78:15 */ uint32_t TerminationApcRequest           : 1;
    /* 78:16 */ uint32_t AutoBoostEntriesExhausted       : 1;
    /* 78:17 */ uint32_t KernelStackResident             : 1;
    /* 78:18 */ uint32_t TerminateRequestReason          : 2;
    /* 78:20 */ uint32_t ProcessStackCountDecremented    : 1;
    /* 78:21 */ uint32_t RestrictedGuiThread             : 1;
    /* 78:22 */ uint32_t VpBackingThread                 : 1;
    /* 78:23 */ uint32_t EtwStackTraceCrimsonApcDisabled : 1;
    /* 78:24 */ uint32_t EtwStackTraceApcInserted        : 8;
    /* 78 */ int32_t ThreadFlags;
    /* 7c */ uint8_t Tag;
    /* 7d */ uint8_t SystemHeteroCpuPolicy;
    /* 7e:0 */ uint8_t UserHeteroCpuPolicy           : 7;
    /* 7e:7 */ uint8_t ExplicitSystemHeteroCpuPolicy : 1;
    /* 7f */ uint8_t Spare0;
    /* 80 */ uint32_t SystemCallNumber;
    /* 84 */ uint32_t ReadyTime;
    /* 88 */ void* FirstArgument;
    /* 90 */ _KTRAP_FRAME* TrapFrame;
    /* 98 */ _KAPC_STATE ApcState;
    /* 98 */ std::array<uint8_t, 43> ApcStateFill;
    /* c3 */ char Priority;
    /* c4 */ uint32_t UserIdealProcessor;
    /* c8 */ int64_t WaitStatus;
    /* d0 */ _KWAIT_BLOCK* WaitBlockList;
    /* d8 */ _LIST_ENTRY WaitListEntry;
    /* d8 */ _SINGLE_LIST_ENTRY SwapListEntry;
    /* e8 */ _DISPATCHER_HEADER* Queue;
    /* f0 */ void* Teb;
    /* f8 */ uint64_t RelativeTimerBias;
    /* 100 */ _KTIMER Timer;
    /* 140 */ std::array<_KWAIT_BLOCK, 4> WaitBlock;
    /* 140 */ std::array<uint8_t, 20> WaitBlockFill4;
    /* 154 */ uint32_t ContextSwitches;
    /* 140 */ std::array<uint8_t, 68> WaitBlockFill5;
    /* 184 */ uint8_t State;
    /* 185 */ char Spare13;
    /* 186 */ uint8_t WaitIrql;
    /* 187 */ char WaitMode;
    /* 140 */ std::array<uint8_t, 116> WaitBlockFill6;
    /* 1b4 */ uint32_t WaitTime;
    /* 140 */ std::array<uint8_t, 164> WaitBlockFill7;
    /* 1e4 */ int16_t KernelApcDisable;
    /* 1e6 */ int16_t SpecialApcDisable;
    /* 1e4 */ uint32_t CombinedApcDisable;
    /* 140 */ std::array<uint8_t, 40> WaitBlockFill8;
    /* 168 */ _KTHREAD_COUNTERS* ThreadCounters;
    /* 140 */ std::array<uint8_t, 88> WaitBlockFill9;
    /* 198 */ _XSTATE_SAVE* XStateSave;
    /* 140 */ std::array<uint8_t, 136> WaitBlockFill10;
    /* 1c8 */ void* Win32Thread;
    /* 140 */ std::array<uint8_t, 176> WaitBlockFill11;
    /* 1f0 */ uint64_t Spare18;
    /* 1f8 */ uint64_t Spare19;
    /* 200 */ int32_t ThreadFlags2;
    /* 200:0 */ uint32_t BamQosLevel          : 8;
    /* 200:8 */ uint32_t ThreadFlags2Reserved : 24;
    /* 204 */ uint8_t HgsFeedbackClass;
    /* 205 */ std::array<uint8_t, 3> Spare23;
    /* 208 */ _LIST_ENTRY QueueListEntry;
    /* 218 */ uint32_t NextProcessor;
    /* 218:0 */ uint32_t NextProcessorNumber : 31;
    /* 218:31 */ uint32_t SharedReadyQueue   : 1;
    /* 21c */ int32_t QueuePriority;
    /* 220 */ _KPROCESS* Process;
    /* 228 */ _KAFFINITY_EX* UserAffinity;
    /* 230 */ uint16_t UserAffinityPrimaryGroup;
    /* 232 */ char PreviousMode;
    /* 233 */ char BasePriority;
    /* 234 */ char PriorityDecrement;
    /* 234:0 */ uint8_t ForegroundBoost : 4;
    /* 234:4 */ uint8_t UnusualBoost    : 4;
    /* 235 */ uint8_t Preempted;
    /* 236 */ uint8_t AdjustReason;
    /* 237 */ char AdjustIncrement;
    /* 238 */ uint64_t AffinityVersion;
    /* 240 */ _KAFFINITY_EX* Affinity;
    /* 248 */ uint16_t AffinityPrimaryGroup;
    /* 24a */ uint8_t ApcStateIndex;
    /* 24b */ uint8_t WaitBlockCount;
    /* 24c */ uint32_t IdealProcessor;
    /* 250 */ uint64_t NpxState;
    /* 258 */ _KAPC_STATE SavedApcState;
    /* 258 */ std::array<uint8_t, 43> SavedApcStateFill;
    /* 283 */ uint8_t WaitReason;
    /* 284 */ char SuspendCount;
    /* 285 */ char Saturation;
    /* 286 */ uint16_t SListFaultCount;
    /* 288 */ _KAPC SchedulerApc;
    /* 288 */ std::array<uint8_t, 3> SchedulerApcFill1;
    /* 28b */ uint8_t QuantumReset;
    /* 288 */ std::array<uint8_t, 4> SchedulerApcFill2;
    /* 28c */ uint32_t KernelTime;
    /* 288 */ std::array<uint8_t, 64> SchedulerApcFill3;
    /* 2c8 */ _KPRCB* WaitPrcb;
    /* 288 */ std::array<uint8_t, 72> SchedulerApcFill4;
    /* 2d0 */ void* LegoData;
    /* 288 */ std::array<uint8_t, 83> SchedulerApcFill5;
    /* 2db */ uint8_t CallbackNestingLevel;
    /* 2dc */ uint32_t UserTime;
    /* 2e0 */ _KEVENT SuspendEvent;
    /* 2f8 */ _LIST_ENTRY ThreadListEntry;
    /* 308 */ _LIST_ENTRY MutantListHead;
    /* 318 */ uint8_t AbEntrySummary;
    /* 319 */ uint8_t AbWaitEntryCount;
    /* 31a */ uint8_t FreezeFlags;
    /* 31a:0 */ uint8_t FreezeCount2 : 1;
    /* 31a:1 */ uint8_t FreezeNormal : 1;
    /* 31a:2 */ uint8_t FreezeDeep   : 1;
    /* 31b */ char SystemPriority;
    /* 31c */ uint32_t SecureThreadCookie;
    /* 320 */ void* Spare22;
    /* 328 */ _SINGLE_LIST_ENTRY PropagateBoostsEntry;
    /* 330 */ _SINGLE_LIST_ENTRY IoSelfBoostsEntry;
    /* 338 */ std::array<uint8_t, 32> PriorityFloorCounts;
    /* 358 */ uint32_t PriorityFloorSummary;
    /* 35c */ int32_t AbCompletedIoBoostCount;
    /* 360 */ int32_t AbCompletedIoQoSBoostCount;
    /* 364 */ int16_t KeReferenceCount;
    /* 366 */ uint8_t AbOrphanedEntrySummary;
    /* 367 */ uint8_t AbOwnedEntryCount;
    /* 368 */ uint32_t ForegroundLossTime;
    /* 370 */ _LIST_ENTRY GlobalForegroundListEntry;
    /* 370 */ _SINGLE_LIST_ENTRY ForegroundDpcStackListEntry;
    /* 378 */ uint64_t InGlobalForegroundList;
    /* 380 */ int64_t ReadOperationCount;
    /* 388 */ int64_t WriteOperationCount;
    /* 390 */ int64_t OtherOperationCount;
    /* 398 */ int64_t ReadTransferCount;
    /* 3a0 */ int64_t WriteTransferCount;
    /* 3a8 */ int64_t OtherTransferCount;
    /* 3b0 */ _KSCB* QueuedScb;
    /* 3b8 */ uint32_t ThreadTimerDelay;
    /* 3bc */ int32_t ThreadFlags3;
    /* 3bc:0 */ uint32_t ThreadFlags3Reserved   : 8;
    /* 3bc:8 */ uint32_t PpmPolicy              : 3;
    /* 3bc:11 */ uint32_t ThreadFlags3Reserved2 : 21;
    /* 3c0 */ std::array<uint64_t, 1> TracingPrivate;
    /* 3c8 */ void* SchedulerAssist;
    /* 3d0 */ void* AbWaitObject;
    /* 3d8 */ uint32_t ReservedPreviousReadyTimeValue;
    /* 3e0 */ uint64_t KernelWaitTime;
    /* 3e8 */ uint64_t UserWaitTime;
    /* 3f0 */ _LIST_ENTRY GlobalUpdateVpThreadPriorityListEntry;
    /* 3f0 */ _SINGLE_LIST_ENTRY UpdateVpThreadPriorityDpcStackListEntry;
    /* 3f8 */ uint64_t InGlobalUpdateVpThreadPriorityList;
    /* 400 */ int32_t SchedulerAssistPriorityFloor;
    /* 404 */ int32_t RealtimePriorityFloor;
    /* 408 */ void* KernelShadowStack;
    /* 410 */ void* KernelShadowStackInitial;
    /* 418 */ void* KernelShadowStackBase;
    /* 420 */ _KERNEL_SHADOW_STACK_LIMIT KernelShadowStackLimit;
    /* 428 */ uint64_t ExtendedFeatureDisableMask;
    /* 430 */ uint64_t HgsFeedbackStartTime;
    /* 438 */ uint64_t HgsFeedbackCycles;
    /* 440 */ uint32_t HgsInvalidFeedbackCount;
    /* 444 */ uint32_t HgsLowerPerfClassFeedbackCount;
    /* 448 */ uint32_t HgsHigherPerfClassFeedbackCount;
    /* 44c */ uint32_t Spare27;
    /* 450 */ _SINGLE_LIST_ENTRY SystemAffinityTokenListHead;
    /* 458 */ void* IptSaveArea;
    /* 460 */ uint8_t ResourceIndex;
    /* 461 */ uint8_t CoreIsolationReasons;
    /* 462 */ uint8_t BamQosLevelFromAssistPage;
    /* 463 */ std::array<uint8_t, 1> Spare31;
    /* 464 */ uint32_t Spare32;
    /* 468 */ std::array<uint64_t, 3> EndPadding;
};
using KTHREAD  = struct _KTHREAD;
using PKTHREAD = struct _KTHREAD*;

struct _TIMEZONE_CHANGE_EVENT
{
    /* 00 */ _KDPC Dpc;
    /* 40 */ _KTIMER Timer;
    /* 80 */ _WORK_QUEUE_ITEM WorkItem;
};
using TIMEZONE_CHANGE_EVENT  = struct _TIMEZONE_CHANGE_EVENT;
using PTIMEZONE_CHANGE_EVENT = struct _TIMEZONE_CHANGE_EVENT*;

struct _DEVICE_OBJECT
{
    /* 00 */ int16_t Type;
    /* 02 */ uint16_t Size;
    /* 04 */ int32_t ReferenceCount;
    /* 08 */ _DRIVER_OBJECT* DriverObject;
    /* 10 */ _DEVICE_OBJECT* NextDevice;
    /* 18 */ _DEVICE_OBJECT* AttachedDevice;
    /* 20 */ _IRP* CurrentIrp;
    /* 28 */ _IO_TIMER* Timer;
    /* 30 */ uint32_t Flags;
    /* 34 */ uint32_t Characteristics;
    /* 38 */ _VPB* Vpb;
    /* 40 */ void* DeviceExtension;
    /* 48 */ uint32_t DeviceType;
    /* 4c */ char StackSize;
    /* 50 */ union
    {
        /* 00 */ _LIST_ENTRY ListEntry;
        /* 00 */ _WAIT_CONTEXT_BLOCK Wcb;
    } Queue;

    /* 98 */ uint32_t AlignmentRequirement;
    /* a0 */ _KDEVICE_QUEUE DeviceQueue;
    /* c8 */ _KDPC Dpc;
    /* 108 */ uint32_t ActiveThreadCount;
    /* 110 */ void* SecurityDescriptor;
    /* 118 */ _KEVENT DeviceLock;
    /* 130 */ uint16_t SectorSize;
    /* 132 */ uint16_t Spare1;
    /* 138 */ _DEVOBJ_EXTENSION* DeviceObjectExtension;
    /* 140 */ void* Reserved;
};
using DEVICE_OBJECT  = struct _DEVICE_OBJECT;
using PDEVICE_OBJECT = struct _DEVICE_OBJECT*;

struct _PPM_IDLE_STATES
{
    /* 00 */ uint8_t InterfaceVersion;
    /* 01 */ uint8_t IdleOverride;
    /* 02 */ uint8_t EstimateIdleDuration;
    /* 03 */ uint8_t ExitLatencyTraceEnabled;
    /* 04 */ uint8_t NonInterruptibleTransition;
    /* 05 */ uint8_t UnaccountedTransition;
    /* 06 */ uint8_t IdleDurationLimited;
    /* 07 */ uint8_t IdleCheckLimited;
    /* 08 */ uint64_t IdleReevaluationDuration;
    /* 10 */ uint8_t StrictVetoBias;
    /* 14 */ uint32_t ExitLatencyCountdown;
    /* 18 */ uint32_t TargetState;
    /* 1c */ uint32_t ActualState;
    /* 20 */ uint32_t OldState;
    /* 24 */ uint32_t OverrideIndex;
    /* 28 */ uint32_t ProcessorIdleCount;
    /* 2c */ uint32_t Type;
    /* 30 */ uint64_t LevelId;
    /* 38 */ uint16_t ReasonFlags;
    /* 40 */ uint64_t InitiateWakeStamp;
    /* 48 */ int32_t PreviousStatus;
    /* 4c */ uint32_t PreviousCancelReason;
    /* 50 */ _KAFFINITY_EX PrimaryProcessorMask;
    /* 158 */ _KAFFINITY_EX SecondaryProcessorMask;
    /* 260 */ std::function<void(_PROCESSOR_IDLE_PREPARE_INFO*)> IdlePrepare;
    /* 268 */ std::function<int32_t(void*, uint32_t, uint32_t, uint32_t, uint32_t*)> IdlePreExecute;
    /* 270 */ std::function<int32_t(void*, uint64_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t*)> IdleExecute;
    /* 278 */ std::function<uint32_t(void*, _PROCESSOR_IDLE_CONSTRAINTS*)> IdlePreselect;
    /* 280 */ std::function<uint32_t(void*, uint32_t, uint32_t)> IdleTest;
    /* 288 */ std::function<uint32_t(void*, uint32_t)> IdleAvailabilityCheck;
    /* 290 */ std::function<void(void*, uint32_t, uint32_t, uint32_t, uint32_t*)> IdleComplete;
    /* 298 */ std::function<void(void*, uint32_t)> IdleCancel;
    /* 2a0 */ std::function<uint8_t(void*)> IdleIsHalted;
    /* 2a8 */ std::function<uint8_t(void*)> IdleInitiateWake;
    /* 2b0 */ _PROCESSOR_IDLE_PREPARE_INFO PrepareInfo;
    /* 308 */ _KAFFINITY_EX DeepIdleSnapshot;
    /* 410 */ _PERFINFO_PPM_STATE_SELECTION* Tracing;
    /* 418 */ _PERFINFO_PPM_STATE_SELECTION* CoordinatedTracing;
    /* 420 */ _PPM_SELECTION_MENU ProcessorMenu;
    /* 430 */ _PPM_SELECTION_MENU CoordinatedMenu;
    /* 440 */ _PPM_COORDINATED_SELECTION CoordinatedSelection;
    /* 458 */ std::array<_PPM_IDLE_STATE, 1> State;
};
using PPM_IDLE_STATES  = struct _PPM_IDLE_STATES;
using PPPM_IDLE_STATES = struct _PPM_IDLE_STATES*;

struct _WHEA_ERROR_RECORD
{
    /* 00 */ _WHEA_ERROR_RECORD_HEADER Header;
    /* 80 */ std::array<_WHEA_ERROR_RECORD_SECTION_DESCRIPTOR, 1> SectionDescriptor;
};
using WHEA_ERROR_RECORD  = struct _WHEA_ERROR_RECORD;
using PWHEA_ERROR_RECORD = struct _WHEA_ERROR_RECORD*;

struct _CM_FULL_RESOURCE_DESCRIPTOR
{
    /* 00 */ _INTERFACE_TYPE InterfaceType;
    /* 04 */ uint32_t BusNumber;
    /* 08 */ _CM_PARTIAL_RESOURCE_LIST PartialResourceList;
};
using CM_FULL_RESOURCE_DESCRIPTOR  = struct _CM_FULL_RESOURCE_DESCRIPTOR;
using PCM_FULL_RESOURCE_DESCRIPTOR = struct _CM_FULL_RESOURCE_DESCRIPTOR*;

struct _ACCESS_STATE
{
    /* 00 */ _LUID OperationID;
    /* 08 */ uint8_t SecurityEvaluated;
    /* 09 */ uint8_t GenerateAudit;
    /* 0a */ uint8_t GenerateOnClose;
    /* 0b */ uint8_t PrivilegesAllocated;
    /* 0c */ uint32_t Flags;
    /* 10 */ uint32_t RemainingDesiredAccess;
    /* 14 */ uint32_t PreviouslyGrantedAccess;
    /* 18 */ uint32_t OriginalDesiredAccess;
    /* 20 */ _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext;
    /* 40 */ void* SecurityDescriptor;
    /* 48 */ void* AuxData;
    /* 50 */ union
    {
        /* 00 */ _INITIAL_PRIVILEGE_SET InitialPrivilegeSet;
        /* 00 */ _PRIVILEGE_SET PrivilegeSet;
    } Privileges;

    /* 7c */ uint8_t AuditPrivileges;
    /* 80 */ _UNICODE_STRING ObjectName;
    /* 90 */ _UNICODE_STRING ObjectTypeName;
};
using ACCESS_STATE  = struct _ACCESS_STATE;
using PACCESS_STATE = struct _ACCESS_STATE*;

struct _ESERVERSILO_GLOBALS
{
    /* 00 */ _OBP_SILODRIVERSTATE ObSiloState;
    /* 2e0 */ _SEP_SILOSTATE SeSiloState;
    /* 310 */ _SEP_RM_LSA_CONNECTION_STATE SeRmSiloState;
    /* 360 */ _ETW_SILODRIVERSTATE* EtwSiloState;
    /* 368 */ _EPROCESS* MiSessionLeaderProcess;
    /* 370 */ _EPROCESS* ExpDefaultErrorPortProcess;
    /* 378 */ void* ExpDefaultErrorPort;
    /* 380 */ uint32_t HardErrorState;
    /* 388 */ _EXP_LICENSE_STATE* ExpLicenseState;
    /* 390 */ _WNF_SILODRIVERSTATE WnfSiloState;
    /* 3c8 */ _DBGK_SILOSTATE DbgkSiloState;
    /* 3e8 */ _UNICODE_STRING PsProtectedCurrentDirectory;
    /* 3f8 */ _UNICODE_STRING PsProtectedEnvironment;
    /* 408 */ void* ApiSetSection;
    /* 410 */ void* ApiSetSchema;
    /* 418 */ uint8_t OneCoreForwardersEnabled;
    /* 420 */ _NLS_STATE* NlsState;
    /* 428 */ _RTL_NLS_STATE RtlNlsState;
    /* 4e0 */ void* ImgFileExecOptions;
    /* 4e8 */ _EX_TIMEZONE_STATE* ExTimeZoneState;
    /* 4f0 */ _UNICODE_STRING NtSystemRoot;
    /* 500 */ _UNICODE_STRING SiloRootDirectoryName;
    /* 510 */ _PSP_STORAGE* Storage;
    /* 518 */ _SERVERSILO_STATE State;
    /* 51c */ int32_t ExitStatus;
    /* 520 */ _KEVENT* DeleteEvent;
    /* 528 */ _SILO_USER_SHARED_DATA* UserSharedData;
    /* 530 */ void* UserSharedSection;
    /* 538 */ _WORK_QUEUE_ITEM TerminateWorkItem;
    /* 558 */ uint8_t IsDownlevelContainer;
};
using ESERVERSILO_GLOBALS  = struct _ESERVERSILO_GLOBALS;
using PESERVERSILO_GLOBALS = struct _ESERVERSILO_GLOBALS*;

struct _HEAP_VAMGR_CTX
{
    /* 00 */ _HEAP_VAMGR_VASPACE VaSpace;
    /* 860 */ uint64_t AllocatorLock;
    /* 868 */ uint32_t AllocatorCount;
    /* 870 */ std::array<_HEAP_VAMGR_ALLOCATOR, 255> Allocators;
};
using HEAP_VAMGR_CTX  = struct _HEAP_VAMGR_CTX;
using PHEAP_VAMGR_CTX = struct _HEAP_VAMGR_CTX*;

struct _PS_TRUSTLET_ATTRIBUTE_DATA
{
    /* 00 */ _PS_TRUSTLET_ATTRIBUTE_HEADER Header;
    /* 08 */ std::array<uint64_t, 1> Data;
};
using PS_TRUSTLET_ATTRIBUTE_DATA  = struct _PS_TRUSTLET_ATTRIBUTE_DATA;
using PPS_TRUSTLET_ATTRIBUTE_DATA = struct _PS_TRUSTLET_ATTRIBUTE_DATA*;

struct _STACK_TRACE_DATABASE
{
    /* 00 */ std::array<char, 104> Reserved;
    /* 00 */ _RTL_STACK_DATABASE_LOCK Lock;
    /* 68 */ void* Reserved2;
    /* 70 */ uint64_t PeakHashCollisionListLength;
    /* 78 */ void* LowerMemoryStart;
    /* 80 */ uint8_t PreCommitted;
    /* 81 */ uint8_t DumpInProgress;
    /* 88 */ void* CommitBase;
    /* 90 */ void* CurrentLowerCommitLimit;
    /* 98 */ void* CurrentUpperCommitLimit;
    /* a0 */ char* NextFreeLowerMemory;
    /* a8 */ char* NextFreeUpperMemory;
    /* b0 */ uint32_t NumberOfEntriesLookedUp;
    /* b4 */ uint32_t NumberOfEntriesAdded;
    /* b8 */ _RTL_STACK_TRACE_ENTRY** EntryIndexArray;
    /* c0 */ uint32_t NumberOfEntriesAllocated;
    /* c4 */ uint32_t NumberOfEntriesAvailable;
    /* c8 */ uint32_t NumberOfAllocationFailures;
    /* d0 */ std::array<_SLIST_HEADER, 32> FreeLists;
    /* 2d0 */ uint32_t NumberOfBuckets;
    /* 2d8 */ std::array<_RTL_STD_LIST_HEAD, 1> Buckets;
};
using STACK_TRACE_DATABASE  = struct _STACK_TRACE_DATABASE;
using PSTACK_TRACE_DATABASE = struct _STACK_TRACE_DATABASE*;

struct _SEGMENT_HEAP
{
    /* 00 */ RTL_HP_ENV_HANDLE EnvHandle;
    /* 10 */ uint32_t Signature;
    /* 14 */ uint32_t GlobalFlags;
    /* 18 */ uint32_t Interceptor;
    /* 1c */ uint16_t ProcessHeapListIndex;
    /* 1e:0 */ uint16_t AllocatedFromMetadata : 1;
    /* 20 */ _RTL_HEAP_MEMORY_LIMIT_DATA CommitLimitData;
    /* 20 */ uint64_t ReservedMustBeZero1;
    /* 28 */ void* UserContext;
    /* 30 */ uint64_t ReservedMustBeZero2;
    /* 38 */ void* Spare;
    /* 40 */ uint64_t LargeMetadataLock;
    /* 48 */ _RTL_RB_TREE LargeAllocMetadata;
    /* 58 */ uint64_t LargeReservedPages;
    /* 60 */ uint64_t LargeCommittedPages;
    /* 68 */ uint64_t Tag;
    /* 70 */ _RTL_RUN_ONCE StackTraceInitVar;
    /* 80 */ _HEAP_RUNTIME_MEMORY_STATS MemStats;
    /* d8 */ uint16_t GlobalLockCount;
    /* dc */ uint32_t GlobalLockOwner;
    /* e0 */ uint64_t ContextExtendLock;
    /* e8 */ uint8_t* AllocatedBase;
    /* f0 */ uint8_t* UncommittedBase;
    /* f8 */ uint8_t* ReservedLimit;
    /* 100 */ uint8_t* ReservedRegionEnd;
    /* 108 */ _RTL_HP_HEAP_VA_CALLBACKS_ENCODED CallbacksEncoded;
    /* 140 */ std::array<_HEAP_SEG_CONTEXT, 2> SegContexts;
    /* 2c0 */ _HEAP_VS_CONTEXT VsContext;
    /* 380 */ _HEAP_LFH_CONTEXT LfhContext;
};
using SEGMENT_HEAP  = struct _SEGMENT_HEAP;
using PSEGMENT_HEAP = struct _SEGMENT_HEAP*;

struct _KPROCESSOR_STATE
{
    /* 00 */ _KSPECIAL_REGISTERS SpecialRegisters;
    /* f0 */ _CONTEXT ContextFrame;
};
using KPROCESSOR_STATE  = struct _KPROCESSOR_STATE;
using PKPROCESSOR_STATE = struct _KPROCESSOR_STATE*;

struct _HEAP_FAILURE_INFORMATION
{
    /* 00 */ uint32_t Version;
    /* 04 */ uint32_t StructureSize;
    /* 08 */ _HEAP_FAILURE_TYPE FailureType;
    /* 10 */ void* HeapAddress;
    /* 18 */ void* Address;
    /* 20 */ void* Param1;
    /* 28 */ void* Param2;
    /* 30 */ void* Param3;
    /* 38 */ void* PreviousBlock;
    /* 40 */ void* NextBlock;
    /* 48 */ _FAKE_HEAP_ENTRY ExpectedDecodedEntry;
    /* 58 */ std::array<void*, 32> StackTrace;
    /* 158 */ uint8_t HeapMajorVersion;
    /* 159 */ uint8_t HeapMinorVersion;
    /* 160 */ _EXCEPTION_RECORD ExceptionRecord;
    /* 200 */ _CONTEXT ContextRecord;
};
using HEAP_FAILURE_INFORMATION  = struct _HEAP_FAILURE_INFORMATION;
using PHEAP_FAILURE_INFORMATION = struct _HEAP_FAILURE_INFORMATION*;

struct _EPROCESS
{
    /* 00 */ _KPROCESS Pcb;
    /* 438 */ _EX_PUSH_LOCK ProcessLock;
    /* 440 */ void* UniqueProcessId;
    /* 448 */ _LIST_ENTRY ActiveProcessLinks;
    /* 458 */ _EX_RUNDOWN_REF RundownProtect;
    /* 460 */ uint32_t Flags2;
    /* 460:0 */ uint32_t JobNotReallyActive               : 1;
    /* 460:1 */ uint32_t AccountingFolded                 : 1;
    /* 460:2 */ uint32_t NewProcessReported               : 1;
    /* 460:3 */ uint32_t ExitProcessReported              : 1;
    /* 460:4 */ uint32_t ReportCommitChanges              : 1;
    /* 460:5 */ uint32_t LastReportMemory                 : 1;
    /* 460:6 */ uint32_t ForceWakeCharge                  : 1;
    /* 460:7 */ uint32_t CrossSessionCreate               : 1;
    /* 460:8 */ uint32_t NeedsHandleRundown               : 1;
    /* 460:9 */ uint32_t RefTraceEnabled                  : 1;
    /* 460:10 */ uint32_t PicoCreated                     : 1;
    /* 460:11 */ uint32_t EmptyJobEvaluated               : 1;
    /* 460:12 */ uint32_t DefaultPagePriority             : 3;
    /* 460:15 */ uint32_t PrimaryTokenFrozen              : 1;
    /* 460:16 */ uint32_t ProcessVerifierTarget           : 1;
    /* 460:17 */ uint32_t RestrictSetThreadContext        : 1;
    /* 460:18 */ uint32_t AffinityPermanent               : 1;
    /* 460:19 */ uint32_t AffinityUpdateEnable            : 1;
    /* 460:20 */ uint32_t PropagateNode                   : 1;
    /* 460:21 */ uint32_t ExplicitAffinity                : 1;
    /* 460:22 */ uint32_t Flags2Available1                : 2;
    /* 460:24 */ uint32_t EnableReadVmLogging             : 1;
    /* 460:25 */ uint32_t EnableWriteVmLogging            : 1;
    /* 460:26 */ uint32_t FatalAccessTerminationRequested : 1;
    /* 460:27 */ uint32_t DisableSystemAllowedCpuSet      : 1;
    /* 460:28 */ uint32_t Flags2Available2                : 3;
    /* 460:31 */ uint32_t InPrivate                       : 1;
    /* 464 */ uint32_t Flags;
    /* 464:0 */ uint32_t CreateReported               : 1;
    /* 464:1 */ uint32_t NoDebugInherit               : 1;
    /* 464:2 */ uint32_t ProcessExiting               : 1;
    /* 464:3 */ uint32_t ProcessDelete                : 1;
    /* 464:4 */ uint32_t ManageExecutableMemoryWrites : 1;
    /* 464:5 */ uint32_t VmDeleted                    : 1;
    /* 464:6 */ uint32_t OutswapEnabled               : 1;
    /* 464:7 */ uint32_t Outswapped                   : 1;
    /* 464:8 */ uint32_t FailFastOnCommitFail         : 1;
    /* 464:9 */ uint32_t Wow64VaSpace4Gb              : 1;
    /* 464:10 */ uint32_t AddressSpaceInitialized     : 2;
    /* 464:12 */ uint32_t SetTimerResolution          : 1;
    /* 464:13 */ uint32_t BreakOnTermination          : 1;
    /* 464:14 */ uint32_t DeprioritizeViews           : 1;
    /* 464:15 */ uint32_t WriteWatch                  : 1;
    /* 464:16 */ uint32_t ProcessInSession            : 1;
    /* 464:17 */ uint32_t OverrideAddressSpace        : 1;
    /* 464:18 */ uint32_t HasAddressSpace             : 1;
    /* 464:19 */ uint32_t LaunchPrefetched            : 1;
    /* 464:20 */ uint32_t Reserved                    : 1;
    /* 464:21 */ uint32_t VmTopDown                   : 1;
    /* 464:22 */ uint32_t ImageNotifyDone             : 1;
    /* 464:23 */ uint32_t PdeUpdateNeeded             : 1;
    /* 464:24 */ uint32_t VdmAllowed                  : 1;
    /* 464:25 */ uint32_t ProcessRundown              : 1;
    /* 464:26 */ uint32_t ProcessInserted             : 1;
    /* 464:27 */ uint32_t DefaultIoPriority           : 3;
    /* 464:30 */ uint32_t ProcessSelfDelete           : 1;
    /* 464:31 */ uint32_t SetTimerResolutionLink      : 1;
    /* 468 */ _LARGE_INTEGER CreateTime;
    /* 470 */ std::array<uint64_t, 2> ProcessQuotaUsage;
    /* 480 */ std::array<uint64_t, 2> ProcessQuotaPeak;
    /* 490 */ uint64_t PeakVirtualSize;
    /* 498 */ uint64_t VirtualSize;
    /* 4a0 */ _LIST_ENTRY SessionProcessLinks;
    /* 4b0 */ void* ExceptionPortData;
    /* 4b0 */ uint64_t ExceptionPortValue;
    /* 4b0:0 */ uint64_t ExceptionPortState : 3;
    /* 4b8 */ _EX_FAST_REF Token;
    /* 4c0 */ uint64_t MmReserved;
    /* 4c8 */ _EX_PUSH_LOCK AddressCreationLock;
    /* 4d0 */ _EX_PUSH_LOCK PageTableCommitmentLock;
    /* 4d8 */ _ETHREAD* RotateInProgress;
    /* 4e0 */ _ETHREAD* ForkInProgress;
    /* 4e8 */ _EJOB* CommitChargeJob;
    /* 4f0 */ _RTL_AVL_TREE CloneRoot;
    /* 4f8 */ uint64_t NumberOfPrivatePages;
    /* 500 */ uint64_t NumberOfLockedPages;
    /* 508 */ void* Win32Process;
    /* 510 */ _EJOB* Job;
    /* 518 */ void* SectionObject;
    /* 520 */ void* SectionBaseAddress;
    /* 528 */ uint32_t Cookie;
    /* 530 */ _PAGEFAULT_HISTORY* WorkingSetWatch;
    /* 538 */ void* Win32WindowStation;
    /* 540 */ void* InheritedFromUniqueProcessId;
    /* 548 */ uint64_t OwnerProcessId;
    /* 550 */ _PEB* Peb;
    /* 558 */ _MM_SESSION_SPACE* Session;
    /* 560 */ void* Spare1;
    /* 568 */ _EPROCESS_QUOTA_BLOCK* QuotaBlock;
    /* 570 */ _HANDLE_TABLE* ObjectTable;
    /* 578 */ void* DebugPort;
    /* 580 */ _EWOW64PROCESS* WoW64Process;
    /* 588 */ _EX_FAST_REF DeviceMap;
    /* 590 */ void* EtwDataSource;
    /* 598 */ uint64_t PageDirectoryPte;
    /* 5a0 */ _FILE_OBJECT* ImageFilePointer;
    /* 5a8 */ std::array<uint8_t, 15> ImageFileName;
    /* 5b7 */ uint8_t PriorityClass;
    /* 5b8 */ void* SecurityPort;
    /* 5c0 */ _SE_AUDIT_PROCESS_CREATION_INFO SeAuditProcessCreationInfo;
    /* 5c8 */ _LIST_ENTRY JobLinks;
    /* 5d8 */ void* HighestUserAddress;
    /* 5e0 */ _LIST_ENTRY ThreadListHead;
    /* 5f0 */ uint32_t ActiveThreads;
    /* 5f4 */ uint32_t ImagePathHash;
    /* 5f8 */ uint32_t DefaultHardErrorProcessing;
    /* 5fc */ int32_t LastThreadExitStatus;
    /* 600 */ _EX_FAST_REF PrefetchTrace;
    /* 608 */ void* LockedPagesList;
    /* 610 */ _LARGE_INTEGER ReadOperationCount;
    /* 618 */ _LARGE_INTEGER WriteOperationCount;
    /* 620 */ _LARGE_INTEGER OtherOperationCount;
    /* 628 */ _LARGE_INTEGER ReadTransferCount;
    /* 630 */ _LARGE_INTEGER WriteTransferCount;
    /* 638 */ _LARGE_INTEGER OtherTransferCount;
    /* 640 */ uint64_t CommitChargeLimit;
    /* 648 */ uint64_t CommitCharge;
    /* 650 */ uint64_t CommitChargePeak;
    /* 680 */ _MMSUPPORT_FULL Vm;
    /* 7c0 */ _LIST_ENTRY MmProcessLinks;
    /* 7d0 */ uint32_t ModifiedPageCount;
    /* 7d4 */ int32_t ExitStatus;
    /* 7d8 */ _RTL_AVL_TREE VadRoot;
    /* 7e0 */ void* VadHint;
    /* 7e8 */ uint64_t VadCount;
    /* 7f0 */ uint64_t VadPhysicalPages;
    /* 7f8 */ uint64_t VadPhysicalPagesLimit;
    /* 800 */ _ALPC_PROCESS_CONTEXT AlpcContext;
    /* 820 */ _LIST_ENTRY TimerResolutionLink;
    /* 830 */ _PO_DIAG_STACK_RECORD* TimerResolutionStackRecord;
    /* 838 */ uint32_t RequestedTimerResolution;
    /* 83c */ uint32_t SmallestTimerResolution;
    /* 840 */ _LARGE_INTEGER ExitTime;
    /* 848 */ _INVERTED_FUNCTION_TABLE_USER_MODE* InvertedFunctionTable;
    /* 850 */ _EX_PUSH_LOCK InvertedFunctionTableLock;
    /* 858 */ uint32_t ActiveThreadsHighWatermark;
    /* 85c */ uint32_t LargePrivateVadCount;
    /* 860 */ _EX_PUSH_LOCK ThreadListLock;
    /* 868 */ void* WnfContext;
    /* 870 */ _EJOB* ServerSilo;
    /* 878 */ uint8_t SignatureLevel;
    /* 879 */ uint8_t SectionSignatureLevel;
    /* 87a */ _PS_PROTECTION Protection;
    /* 87b:0 */ uint8_t HangCount          : 3;
    /* 87b:3 */ uint8_t GhostCount         : 3;
    /* 87b:6 */ uint8_t PrefilterException : 1;
    /* 87c */ uint32_t Flags3;
    /* 87c:0 */ uint32_t Minimal                                  : 1;
    /* 87c:1 */ uint32_t ReplacingPageRoot                        : 1;
    /* 87c:2 */ uint32_t Crashed                                  : 1;
    /* 87c:3 */ uint32_t JobVadsAreTracked                        : 1;
    /* 87c:4 */ uint32_t VadTrackingDisabled                      : 1;
    /* 87c:5 */ uint32_t AuxiliaryProcess                         : 1;
    /* 87c:6 */ uint32_t SubsystemProcess                         : 1;
    /* 87c:7 */ uint32_t IndirectCpuSets                          : 1;
    /* 87c:8 */ uint32_t RelinquishedCommit                       : 1;
    /* 87c:9 */ uint32_t HighGraphicsPriority                     : 1;
    /* 87c:10 */ uint32_t CommitFailLogged                        : 1;
    /* 87c:11 */ uint32_t ReserveFailLogged                       : 1;
    /* 87c:12 */ uint32_t SystemProcess                           : 1;
    /* 87c:13 */ uint32_t HideImageBaseAddresses                  : 1;
    /* 87c:14 */ uint32_t AddressPolicyFrozen                     : 1;
    /* 87c:15 */ uint32_t ProcessFirstResume                      : 1;
    /* 87c:16 */ uint32_t ForegroundExternal                      : 1;
    /* 87c:17 */ uint32_t ForegroundSystem                        : 1;
    /* 87c:18 */ uint32_t HighMemoryPriority                      : 1;
    /* 87c:19 */ uint32_t EnableProcessSuspendResumeLogging       : 1;
    /* 87c:20 */ uint32_t EnableThreadSuspendResumeLogging        : 1;
    /* 87c:21 */ uint32_t SecurityDomainChanged                   : 1;
    /* 87c:22 */ uint32_t SecurityFreezeComplete                  : 1;
    /* 87c:23 */ uint32_t VmProcessorHost                         : 1;
    /* 87c:24 */ uint32_t VmProcessorHostTransition               : 1;
    /* 87c:25 */ uint32_t AltSyscall                              : 1;
    /* 87c:26 */ uint32_t TimerResolutionIgnore                   : 1;
    /* 87c:27 */ uint32_t DisallowUserTerminate                   : 1;
    /* 87c:28 */ uint32_t EnableProcessRemoteExecProtectVmLogging : 1;
    /* 87c:29 */ uint32_t EnableProcessLocalExecProtectVmLogging  : 1;
    /* 87c:30 */ uint32_t MemoryCompressionProcess                : 1;
    /* 880 */ int32_t DeviceAsid;
    /* 888 */ void* SvmData;
    /* 890 */ _EX_PUSH_LOCK SvmProcessLock;
    /* 898 */ uint64_t SvmLock;
    /* 8a0 */ _LIST_ENTRY SvmProcessDeviceListHead;
    /* 8b0 */ uint64_t LastFreezeInterruptTime;
    /* 8b8 */ _PROCESS_DISK_COUNTERS* DiskCounters;
    /* 8c0 */ void* PicoContext;
    /* 8c8 */ void* EnclaveTable;
    /* 8d0 */ uint64_t EnclaveNumber;
    /* 8d8 */ _EX_PUSH_LOCK EnclaveLock;
    /* 8e0 */ uint32_t HighPriorityFaultsAllowed;
    /* 8e8 */ _PO_PROCESS_ENERGY_CONTEXT* EnergyContext;
    /* 8f0 */ void* VmContext;
    /* 8f8 */ uint64_t SequenceNumber;
    /* 900 */ uint64_t CreateInterruptTime;
    /* 908 */ uint64_t CreateUnbiasedInterruptTime;
    /* 910 */ uint64_t TotalUnbiasedFrozenTime;
    /* 918 */ uint64_t LastAppStateUpdateTime;
    /* 920:0 */ uint64_t LastAppStateUptime : 61;
    /* 920:61 */ uint64_t LastAppState      : 3;
    /* 928 */ uint64_t SharedCommitCharge;
    /* 930 */ _EX_PUSH_LOCK SharedCommitLock;
    /* 938 */ _LIST_ENTRY SharedCommitLinks;
    /* 948 */ uint64_t AllowedCpuSets;
    /* 950 */ uint64_t DefaultCpuSets;
    /* 948 */ uint64_t* AllowedCpuSetsIndirect;
    /* 950 */ uint64_t* DefaultCpuSetsIndirect;
    /* 958 */ void* DiskIoAttribution;
    /* 960 */ void* DxgProcess;
    /* 968 */ uint32_t Win32KFilterSet;
    /* 96c */ uint16_t Machine;
    /* 96e */ uint16_t Spare0;
    /* 970 */ _PS_INTERLOCKED_TIMER_DELAY_VALUES ProcessTimerDelay;
    /* 978 */ uint32_t KTimerSets;
    /* 97c */ uint32_t KTimer2Sets;
    /* 980 */ uint32_t ThreadTimerSets;
    /* 988 */ uint64_t VirtualTimerListLock;
    /* 990 */ _LIST_ENTRY VirtualTimerListHead;
    /* 9a0 */ _WNF_STATE_NAME WakeChannel;
    /* 9a0 */ _PS_PROCESS_WAKE_INFORMATION WakeInfo;
    /* 9d0 */ uint32_t MitigationFlags;
    /* 9d0 */ struct
    {
        /* 00:0 */ uint32_t ControlFlowGuardEnabled                   : 1;
        /* 00:1 */ uint32_t ControlFlowGuardExportSuppressionEnabled  : 1;
        /* 00:2 */ uint32_t ControlFlowGuardStrict                    : 1;
        /* 00:3 */ uint32_t DisallowStrippedImages                    : 1;
        /* 00:4 */ uint32_t ForceRelocateImages                       : 1;
        /* 00:5 */ uint32_t HighEntropyASLREnabled                    : 1;
        /* 00:6 */ uint32_t StackRandomizationDisabled                : 1;
        /* 00:7 */ uint32_t ExtensionPointDisable                     : 1;
        /* 00:8 */ uint32_t DisableDynamicCode                        : 1;
        /* 00:9 */ uint32_t DisableDynamicCodeAllowOptOut             : 1;
        /* 00:10 */ uint32_t DisableDynamicCodeAllowRemoteDowngrade   : 1;
        /* 00:11 */ uint32_t AuditDisableDynamicCode                  : 1;
        /* 00:12 */ uint32_t DisallowWin32kSystemCalls                : 1;
        /* 00:13 */ uint32_t AuditDisallowWin32kSystemCalls           : 1;
        /* 00:14 */ uint32_t EnableFilteredWin32kAPIs                 : 1;
        /* 00:15 */ uint32_t AuditFilteredWin32kAPIs                  : 1;
        /* 00:16 */ uint32_t DisableNonSystemFonts                    : 1;
        /* 00:17 */ uint32_t AuditNonSystemFontLoading                : 1;
        /* 00:18 */ uint32_t PreferSystem32Images                     : 1;
        /* 00:19 */ uint32_t ProhibitRemoteImageMap                   : 1;
        /* 00:20 */ uint32_t AuditProhibitRemoteImageMap              : 1;
        /* 00:21 */ uint32_t ProhibitLowILImageMap                    : 1;
        /* 00:22 */ uint32_t AuditProhibitLowILImageMap               : 1;
        /* 00:23 */ uint32_t SignatureMitigationOptIn                 : 1;
        /* 00:24 */ uint32_t AuditBlockNonMicrosoftBinaries           : 1;
        /* 00:25 */ uint32_t AuditBlockNonMicrosoftBinariesAllowStore : 1;
        /* 00:26 */ uint32_t LoaderIntegrityContinuityEnabled         : 1;
        /* 00:27 */ uint32_t AuditLoaderIntegrityContinuity           : 1;
        /* 00:28 */ uint32_t EnableModuleTamperingProtection          : 1;
        /* 00:29 */ uint32_t EnableModuleTamperingProtectionNoInherit : 1;
        /* 00:30 */ uint32_t RestrictIndirectBranchPrediction         : 1;
        /* 00:31 */ uint32_t IsolateSecurityDomain                    : 1;
    } MitigationFlagsValues;

    /* 9d4 */ uint32_t MitigationFlags2;
    /* 9d4 */ struct
    {
        /* 00:0 */ uint32_t EnableExportAddressFilter                 : 1;
        /* 00:1 */ uint32_t AuditExportAddressFilter                  : 1;
        /* 00:2 */ uint32_t EnableExportAddressFilterPlus             : 1;
        /* 00:3 */ uint32_t AuditExportAddressFilterPlus              : 1;
        /* 00:4 */ uint32_t EnableRopStackPivot                       : 1;
        /* 00:5 */ uint32_t AuditRopStackPivot                        : 1;
        /* 00:6 */ uint32_t EnableRopCallerCheck                      : 1;
        /* 00:7 */ uint32_t AuditRopCallerCheck                       : 1;
        /* 00:8 */ uint32_t EnableRopSimExec                          : 1;
        /* 00:9 */ uint32_t AuditRopSimExec                           : 1;
        /* 00:10 */ uint32_t EnableImportAddressFilter                : 1;
        /* 00:11 */ uint32_t AuditImportAddressFilter                 : 1;
        /* 00:12 */ uint32_t DisablePageCombine                       : 1;
        /* 00:13 */ uint32_t SpeculativeStoreBypassDisable            : 1;
        /* 00:14 */ uint32_t CetUserShadowStacks                      : 1;
        /* 00:15 */ uint32_t AuditCetUserShadowStacks                 : 1;
        /* 00:16 */ uint32_t AuditCetUserShadowStacksLogged           : 1;
        /* 00:17 */ uint32_t UserCetSetContextIpValidation            : 1;
        /* 00:18 */ uint32_t AuditUserCetSetContextIpValidation       : 1;
        /* 00:19 */ uint32_t AuditUserCetSetContextIpValidationLogged : 1;
        /* 00:20 */ uint32_t CetUserShadowStacksStrictMode            : 1;
        /* 00:21 */ uint32_t BlockNonCetBinaries                      : 1;
        /* 00:22 */ uint32_t BlockNonCetBinariesNonEhcont             : 1;
        /* 00:23 */ uint32_t AuditBlockNonCetBinaries                 : 1;
        /* 00:24 */ uint32_t AuditBlockNonCetBinariesLogged           : 1;
        /* 00:25 */ uint32_t XtendedControlFlowGuard                  : 1;
        /* 00:26 */ uint32_t AuditXtendedControlFlowGuard             : 1;
        /* 00:27 */ uint32_t PointerAuthUserIp                        : 1;
        /* 00:28 */ uint32_t AuditPointerAuthUserIp                   : 1;
        /* 00:29 */ uint32_t AuditPointerAuthUserIpLogged             : 1;
        /* 00:30 */ uint32_t CetDynamicApisOutOfProcOnly              : 1;
        /* 00:31 */ uint32_t UserCetSetContextIpValidationRelaxedMode : 1;
    } MitigationFlags2Values;

    /* 9d8 */ void* PartitionObject;
    /* 9e0 */ uint64_t SecurityDomain;
    /* 9e8 */ uint64_t ParentSecurityDomain;
    /* 9f0 */ void* CoverageSamplerContext;
    /* 9f8 */ void* MmHotPatchContext;
    /* a00 */ _KE_IDEAL_PROCESSOR_ASSIGNMENT_BLOCK IdealProcessorAssignmentBlock;
    /* b18 */ _RTL_AVL_TREE DynamicEHContinuationTargetsTree;
    /* b20 */ _EX_PUSH_LOCK DynamicEHContinuationTargetsLock;
    /* b28 */ _PS_DYNAMIC_ENFORCED_ADDRESS_RANGES DynamicEnforcedCetCompatibleRanges;
    /* b38 */ uint32_t DisabledComponentFlags;
    /* b3c */ int32_t PageCombineSequence;
    /* b40 */ _EX_PUSH_LOCK EnableOptionalXStateFeaturesLock;
    /* b48 */ uint32_t* PathRedirectionHashes;
    /* b50 */ std::array<void*, 4> SyscallProviderReserved;
    /* b70 */ uint32_t MitigationFlags3;
    /* b70 */ struct
    {
        /* 00:0 */ uint32_t RestrictCoreSharing           : 1;
        /* 00:1 */ uint32_t DisallowFsctlSystemCalls      : 1;
        /* 00:2 */ uint32_t AuditDisallowFsctlSystemCalls : 1;
        /* 00:3 */ uint32_t MitigationFlags3Spare         : 29;
    } MitigationFlags3Values;

    /* b74 */ _PROCESS_EXECUTION Execution;
};
using EPROCESS  = struct _EPROCESS;
using PEPROCESS = struct _EPROCESS*;

struct _HEAP
{
    /* 00 */ _HEAP_SEGMENT Segment;
    /* 00 */ _HEAP_ENTRY Entry;
    /* 10 */ uint32_t SegmentSignature;
    /* 14 */ uint32_t SegmentFlags;
    /* 18 */ _LIST_ENTRY SegmentListEntry;
    /* 28 */ _HEAP* Heap;
    /* 30 */ void* BaseAddress;
    /* 38 */ uint32_t NumberOfPages;
    /* 40 */ _HEAP_ENTRY* FirstEntry;
    /* 48 */ _HEAP_ENTRY* LastValidEntry;
    /* 50 */ uint32_t NumberOfUnCommittedPages;
    /* 54 */ uint32_t NumberOfUnCommittedRanges;
    /* 58 */ uint16_t SegmentAllocatorBackTraceIndex;
    /* 5a */ uint16_t Reserved;
    /* 60 */ _LIST_ENTRY UCRSegmentList;
    /* 70 */ uint32_t Flags;
    /* 74 */ uint32_t ForceFlags;
    /* 78 */ uint32_t CompatibilityFlags;
    /* 7c */ uint32_t EncodeFlagMask;
    /* 80 */ _HEAP_ENTRY Encoding;
    /* 90 */ uint32_t Interceptor;
    /* 94 */ uint32_t VirtualMemoryThreshold;
    /* 98 */ uint32_t Signature;
    /* a0 */ uint64_t SegmentReserve;
    /* a8 */ uint64_t SegmentCommit;
    /* b0 */ uint64_t DeCommitFreeBlockThreshold;
    /* b8 */ uint64_t DeCommitTotalFreeThreshold;
    /* c0 */ uint64_t TotalFreeSize;
    /* c8 */ uint64_t MaximumAllocationSize;
    /* d0 */ uint16_t ProcessHeapsListIndex;
    /* d2 */ uint16_t HeaderValidateLength;
    /* d8 */ void* HeaderValidateCopy;
    /* e0 */ uint16_t NextAvailableTagIndex;
    /* e2 */ uint16_t MaximumTagIndex;
    /* e8 */ _HEAP_TAG_ENTRY* TagEntries;
    /* f0 */ _LIST_ENTRY UCRList;
    /* 100 */ uint64_t AlignRound;
    /* 108 */ uint64_t AlignMask;
    /* 110 */ _LIST_ENTRY VirtualAllocdBlocks;
    /* 120 */ _LIST_ENTRY SegmentList;
    /* 130 */ uint16_t AllocatorBackTraceIndex;
    /* 134 */ uint32_t NonDedicatedListLength;
    /* 138 */ void* BlocksIndex;
    /* 140 */ void* UCRIndex;
    /* 148 */ _HEAP_PSEUDO_TAG_ENTRY* PseudoTagEntries;
    /* 150 */ _LIST_ENTRY FreeLists;
    /* 160 */ _HEAP_LOCK* LockVariable;
    /* 168 */ std::function<int32_t(void*, void**, uint64_t*)> CommitRoutine;
    /* 170 */ _RTL_RUN_ONCE StackTraceInitVar;
    /* 178 */ _RTL_HEAP_MEMORY_LIMIT_DATA CommitLimitData;
    /* 198 */ void* FrontEndHeap;
    /* 1a0 */ uint16_t FrontHeapLockCount;
    /* 1a2 */ uint8_t FrontEndHeapType;
    /* 1a3 */ uint8_t RequestedFrontEndHeapType;
    /* 1a8 */ uint16_t* FrontEndHeapUsageData;
    /* 1b0 */ uint16_t FrontEndHeapMaximumIndex;
    /* 1b2 */ std::array<uint8_t, 129> FrontEndHeapStatusBitmap;
    /* 238 */ _HEAP_COUNTERS Counters;
    /* 2b0 */ _HEAP_TUNING_PARAMETERS TuningParameters;
};
using HEAP  = struct _HEAP;
using PHEAP = struct _HEAP*;

struct _WHEA_ERROR_SOURCE_DESCRIPTOR
{
    /* 00 */ uint32_t Length;
    /* 04 */ uint32_t Version;
    /* 08 */ _WHEA_ERROR_SOURCE_TYPE Type;
    /* 0c */ _WHEA_ERROR_SOURCE_STATE State;
    /* 10 */ uint32_t MaxRawDataLength;
    /* 14 */ uint32_t NumRecordsToPreallocate;
    /* 18 */ uint32_t MaxSectionsPerRecord;
    /* 1c */ uint32_t ErrorSourceId;
    /* 20 */ uint32_t PlatformErrorSourceId;
    /* 24 */ uint32_t Flags;
    /* 28 */ union
    {
        /* 00 */ _WHEA_XPF_MCE_DESCRIPTOR XpfMceDescriptor;
        /* 00 */ _WHEA_XPF_CMC_DESCRIPTOR XpfCmcDescriptor;
        /* 00 */ _WHEA_XPF_NMI_DESCRIPTOR XpfNmiDescriptor;
        /* 00 */ _WHEA_IPF_MCA_DESCRIPTOR IpfMcaDescriptor;
        /* 00 */ _WHEA_IPF_CMC_DESCRIPTOR IpfCmcDescriptor;
        /* 00 */ _WHEA_IPF_CPE_DESCRIPTOR IpfCpeDescriptor;
        /* 00 */ _WHEA_AER_ROOTPORT_DESCRIPTOR AerRootportDescriptor;
        /* 00 */ _WHEA_AER_ENDPOINT_DESCRIPTOR AerEndpointDescriptor;
        /* 00 */ _WHEA_AER_BRIDGE_DESCRIPTOR AerBridgeDescriptor;
        /* 00 */ _WHEA_GENERIC_ERROR_DESCRIPTOR GenErrDescriptor;
        /* 00 */ _WHEA_GENERIC_ERROR_DESCRIPTOR_V2 GenErrDescriptorV2;
        /* 00 */ _WHEA_DEVICE_DRIVER_DESCRIPTOR DeviceDriverDescriptor;
    } Info;
};
using WHEA_ERROR_SOURCE_DESCRIPTOR  = struct _WHEA_ERROR_SOURCE_DESCRIPTOR;
using PWHEA_ERROR_SOURCE_DESCRIPTOR = struct _WHEA_ERROR_SOURCE_DESCRIPTOR*;

struct _IO_RESOURCE_REQUIREMENTS_LIST
{
    /* 00 */ uint32_t ListSize;
    /* 04 */ _INTERFACE_TYPE InterfaceType;
    /* 08 */ uint32_t BusNumber;
    /* 0c */ uint32_t SlotNumber;
    /* 10 */ std::array<uint32_t, 3> Reserved;
    /* 1c */ uint32_t AlternativeLists;
    /* 20 */ std::array<_IO_RESOURCE_LIST, 1> List;
};
using IO_RESOURCE_REQUIREMENTS_LIST  = struct _IO_RESOURCE_REQUIREMENTS_LIST;
using PIO_RESOURCE_REQUIREMENTS_LIST = struct _IO_RESOURCE_REQUIREMENTS_LIST*;

struct _HANDLE_TRACE_DEBUG_INFO
{
    /* 00 */ int32_t RefCount;
    /* 04 */ uint32_t TableSize;
    /* 08 */ uint32_t BitMaskFlags;
    /* 10 */ _FAST_MUTEX CloseCompactionLock;
    /* 48 */ uint32_t CurrentStackIndex;
    /* 50 */ std::array<_HANDLE_TRACE_DB_ENTRY, 1> TraceDb;
};
using HANDLE_TRACE_DEBUG_INFO  = struct _HANDLE_TRACE_DEBUG_INFO;
using PHANDLE_TRACE_DEBUG_INFO = struct _HANDLE_TRACE_DEBUG_INFO*;

struct _ETHREAD
{
    /* 00 */ _KTHREAD Tcb;
    /* 480 */ _LARGE_INTEGER CreateTime;
    /* 488 */ _LARGE_INTEGER ExitTime;
    /* 488 */ _LIST_ENTRY KeyedWaitChain;
    /* 498 */ _LIST_ENTRY PostBlockList;
    /* 498 */ void* ForwardLinkShadow;
    /* 4a0 */ void* StartAddress;
    /* 4a8 */ _TERMINATION_PORT* TerminationPort;
    /* 4a8 */ _ETHREAD* ReaperLink;
    /* 4a8 */ void* KeyedWaitValue;
    /* 4b0 */ uint64_t ActiveTimerListLock;
    /* 4b8 */ _LIST_ENTRY ActiveTimerListHead;
    /* 4c8 */ _CLIENT_ID Cid;
    /* 4d8 */ _KSEMAPHORE KeyedWaitSemaphore;
    /* 4d8 */ _KSEMAPHORE AlpcWaitSemaphore;
    /* 4f8 */ _PS_CLIENT_SECURITY_CONTEXT ClientSecurity;
    /* 500 */ _LIST_ENTRY IrpList;
    /* 510 */ uint64_t TopLevelIrp;
    /* 518 */ _DEVICE_OBJECT* DeviceToVerify;
    /* 520 */ void* Win32StartAddress;
    /* 528 */ void* ChargeOnlySession;
    /* 530 */ void* LegacyPowerObject;
    /* 538 */ _LIST_ENTRY ThreadListEntry;
    /* 548 */ _EX_RUNDOWN_REF RundownProtect;
    /* 550 */ _EX_PUSH_LOCK ThreadLock;
    /* 558 */ uint32_t ReadClusterSize;
    /* 55c */ int32_t MmLockOrdering;
    /* 560 */ uint32_t CrossThreadFlags;
    /* 560:0 */ uint32_t Terminated                : 1;
    /* 560:1 */ uint32_t ThreadInserted            : 1;
    /* 560:2 */ uint32_t HideFromDebugger          : 1;
    /* 560:3 */ uint32_t ActiveImpersonationInfo   : 1;
    /* 560:4 */ uint32_t HardErrorsAreDisabled     : 1;
    /* 560:5 */ uint32_t BreakOnTermination        : 1;
    /* 560:6 */ uint32_t SkipCreationMsg           : 1;
    /* 560:7 */ uint32_t SkipTerminationMsg        : 1;
    /* 560:8 */ uint32_t CopyTokenOnOpen           : 1;
    /* 560:9 */ uint32_t ThreadIoPriority          : 3;
    /* 560:12 */ uint32_t ThreadPagePriority       : 3;
    /* 560:15 */ uint32_t RundownFail              : 1;
    /* 560:16 */ uint32_t UmsForceQueueTermination : 1;
    /* 560:17 */ uint32_t IndirectCpuSets          : 1;
    /* 560:18 */ uint32_t DisableDynamicCodeOptOut : 1;
    /* 560:19 */ uint32_t ExplicitCaseSensitivity  : 1;
    /* 560:20 */ uint32_t PicoNotifyExit           : 1;
    /* 560:21 */ uint32_t DbgWerUserReportActive   : 1;
    /* 560:22 */ uint32_t ForcedSelfTrimActive     : 1;
    /* 560:23 */ uint32_t SamplingCoverage         : 1;
    /* 560:24 */ uint32_t ReservedCrossThreadFlags : 8;
    /* 564 */ uint32_t SameThreadPassiveFlags;
    /* 564:0 */ uint32_t ActiveExWorker                  : 1;
    /* 564:1 */ uint32_t MemoryMaker                     : 1;
    /* 564:2 */ uint32_t StoreLockThread                 : 2;
    /* 564:4 */ uint32_t ClonedThread                    : 1;
    /* 564:5 */ uint32_t KeyedEventInUse                 : 1;
    /* 564:6 */ uint32_t SelfTerminate                   : 1;
    /* 564:7 */ uint32_t RespectIoPriority               : 1;
    /* 564:8 */ uint32_t ActivePageLists                 : 1;
    /* 564:9 */ uint32_t SecureContext                   : 1;
    /* 564:10 */ uint32_t ZeroPageThread                 : 1;
    /* 564:11 */ uint32_t WorkloadClass                  : 1;
    /* 564:12 */ uint32_t GenerateDumpOnBadHandleAccess  : 1;
    /* 564:13 */ uint32_t ReservedSameThreadPassiveFlags : 19;
    /* 568 */ uint32_t SameThreadApcFlags;
    /* 568:0 */ uint8_t OwnsProcessAddressSpaceExclusive    : 1;
    /* 568:1 */ uint8_t OwnsProcessAddressSpaceShared       : 1;
    /* 568:2 */ uint8_t HardFaultBehavior                   : 1;
    /* 568:3 */ uint8_t StartAddressInvalid                 : 1;
    /* 568:4 */ uint8_t EtwCalloutActive                    : 1;
    /* 568:5 */ uint8_t SuppressSymbolLoad                  : 1;
    /* 568:6 */ uint8_t Prefetching                         : 1;
    /* 568:7 */ uint8_t OwnsVadExclusive                    : 1;
    /* 569:0 */ uint8_t SystemPagePriorityActive            : 1;
    /* 569:1 */ uint8_t SystemPagePriority                  : 3;
    /* 569:4 */ uint8_t AllowUserWritesToExecutableMemory   : 1;
    /* 569:5 */ uint8_t AllowKernelWritesToExecutableMemory : 1;
    /* 569:6 */ uint8_t OwnsVadShared                       : 1;
    /* 569:7 */ uint8_t SessionAttachActive                 : 1;
    /* 56a:0 */ uint8_t PasidMsrValid                       : 1;
    /* 56c */ uint8_t CacheManagerActive;
    /* 56d */ uint8_t DisablePageFaultClustering;
    /* 56e */ uint8_t ActiveFaultCount;
    /* 56f */ uint8_t LockOrderState;
    /* 570 */ uint32_t PerformanceCountLowReserved;
    /* 574 */ int32_t PerformanceCountHighReserved;
    /* 578 */ uint64_t AlpcMessageId;
    /* 580 */ void* AlpcMessage;
    /* 580 */ uint32_t AlpcReceiveAttributeSet;
    /* 588 */ _LIST_ENTRY AlpcWaitListEntry;
    /* 598 */ int32_t ExitStatus;
    /* 59c */ uint32_t CacheManagerCount;
    /* 5a0 */ uint32_t IoBoostCount;
    /* 5a4 */ uint32_t IoQoSBoostCount;
    /* 5a8 */ uint32_t IoQoSThrottleCount;
    /* 5ac */ uint32_t KernelStackReference;
    /* 5b0 */ _LIST_ENTRY BoostList;
    /* 5c0 */ _LIST_ENTRY DeboostList;
    /* 5d0 */ uint64_t BoostListLock;
    /* 5d8 */ uint64_t IrpListLock;
    /* 5e0 */ void* ReservedForSynchTracking;
    /* 5e8 */ _SINGLE_LIST_ENTRY CmCallbackListHead;
    /* 5f0 */ _GUID* ActivityId;
    /* 5f8 */ _SINGLE_LIST_ENTRY SeLearningModeListHead;
    /* 600 */ void* VerifierContext;
    /* 608 */ void* AdjustedClientToken;
    /* 610 */ void* WorkOnBehalfThread;
    /* 618 */ _PS_PROPERTY_SET PropertySet;
    /* 630 */ void* PicoContext;
    /* 638 */ uint64_t UserFsBase;
    /* 640 */ uint64_t UserGsBase;
    /* 648 */ _THREAD_ENERGY_VALUES* EnergyValues;
    /* 650 */ uint64_t SelectedCpuSets;
    /* 650 */ uint64_t* SelectedCpuSetsIndirect;
    /* 658 */ _EJOB* Silo;
    /* 660 */ _UNICODE_STRING* ThreadName;
    /* 668 */ _CONTEXT* SetContextState;
    /* 670 */ uint8_t LastSoftParkElectionQos;
    /* 671 */ uint8_t LastSoftParkElectionWorkloadType;
    /* 672 */ uint8_t LastSoftParkElectionRunningType;
    /* 673 */ uint8_t Spare1;
    /* 674 */ uint32_t HeapData;
    /* 678 */ _LIST_ENTRY OwnerEntryListHead;
    /* 688 */ uint64_t DisownedOwnerEntryListLock;
    /* 690 */ _LIST_ENTRY DisownedOwnerEntryListHead;
    /* 6a0 */ std::array<_KLOCK_ENTRY, 6> LockEntries;
    /* 8e0 */ void* CmThreadInfo;
    /* 8e8 */ void* FlsData;
    /* 8f0 */ uint32_t LastExpectedRunTime;
    /* 8f4 */ uint32_t LastSoftParkElectionRunTime;
    /* 8f8 */ uint64_t LastSoftParkElectionGeneration;
    /* 900 */ _GROUP_AFFINITY LastSoftParkElectionGroupAffinity;
};
using ETHREAD  = struct _ETHREAD;
using PETHREAD = struct _ETHREAD*;

struct _EX_TIMEZONE_STATE
{
    /* 00 */ _RTL_DYNAMIC_TIME_ZONE_INFORMATION TimeZoneInformation;
    /* 1b0 */ uint32_t CurrentTimeZoneId;
    /* 1b4 */ int32_t LastTimeZoneBias;
    /* 1b8 */ _LARGE_INTEGER TimeZoneBias;
    /* 1c0 */ _TIMEZONE_CHANGE_EVENT TimeZone;
    /* 260 */ _TIMEZONE_CHANGE_EVENT Century;
    /* 300 */ _TIMEZONE_CHANGE_EVENT NextYear;
    /* 3a0 */ int32_t OkToTimeZoneRefresh;
    /* 3a8 */ _LARGE_INTEGER NextCenturyTimeInUTC;
    /* 3b0 */ _TIME_FIELDS NextCenturyTimeFieldsInLocalTime;
    /* 3c0 */ _LARGE_INTEGER NextYearTimeInUTC;
    /* 3c8 */ _TIME_FIELDS NextYearTimeFieldsInLocalTime;
    /* 3d8 */ int16_t LastDynamicTimeZoneYear;
    /* 3e0 */ _LARGE_INTEGER NextSystemCutoverInUTC;
    /* 3e8 */ uint32_t RefreshFailures;
};
using EX_TIMEZONE_STATE  = struct _EX_TIMEZONE_STATE;
using PEX_TIMEZONE_STATE = struct _EX_TIMEZONE_STATE*;

struct _CM_RESOURCE_LIST
{
    /* 00 */ uint32_t Count;
    /* 04 */ std::array<_CM_FULL_RESOURCE_DESCRIPTOR, 1> List;
};
using CM_RESOURCE_LIST  = struct _CM_RESOURCE_LIST;
using PCM_RESOURCE_LIST = struct _CM_RESOURCE_LIST*;

struct _RTLP_HP_HEAP_MANAGER
{
    /* 00 */ _RTLP_HP_HEAP_GLOBALS* Globals;
    /* 08 */ _RTLP_HP_ALLOC_TRACKER AllocTracker;
    /* 58 */ _HEAP_VAMGR_CTX VaMgr;
    /* 3898 */ std::array<_RTLP_HP_METADATA_HEAP_CTX, 4> MetadataHeaps;
    /* 38d8 */ _RTL_HP_SUB_ALLOCATOR_CONFIGS SubAllocConfigs;
};
using RTLP_HP_HEAP_MANAGER  = struct _RTLP_HP_HEAP_MANAGER;
using PRTLP_HP_HEAP_MANAGER = struct _RTLP_HP_HEAP_MANAGER*;

struct _PS_TRUSTLET_CREATE_ATTRIBUTES
{
    /* 00 */ uint64_t TrustletIdentity;
    /* 08 */ std::array<_PS_TRUSTLET_ATTRIBUTE_DATA, 1> Attributes;
};
using PS_TRUSTLET_CREATE_ATTRIBUTES  = struct _PS_TRUSTLET_CREATE_ATTRIBUTES;
using PPS_TRUSTLET_CREATE_ATTRIBUTES = struct _PS_TRUSTLET_CREATE_ATTRIBUTES*;

struct _KPRCB
{
    /* 00 */ uint32_t MxCsr;
    /* 04 */ uint8_t LegacyNumber;
    /* 05 */ uint8_t ReservedMustBeZero;
    /* 06 */ uint8_t InterruptRequest;
    /* 07 */ uint8_t IdleHalt;
    /* 08 */ _KTHREAD* CurrentThread;
    /* 10 */ _KTHREAD* NextThread;
    /* 18 */ _KTHREAD* IdleThread;
    /* 20 */ uint8_t NestingLevel;
    /* 21 */ uint8_t ClockOwner;
    /* 22 */ uint8_t PendingTickFlags;
    /* 22:0 */ uint8_t PendingTick       : 1;
    /* 22:1 */ uint8_t PendingBackupTick : 1;
    /* 23 */ uint8_t IdleState;
    /* 24 */ uint32_t Number;
    /* 28 */ uint64_t RspBase;
    /* 30 */ uint64_t PrcbLock;
    /* 38 */ _KPRIORITY_STATE* PriorityState;
    /* 40 */ char CpuType;
    /* 41 */ char CpuID;
    /* 42 */ uint16_t CpuStep;
    /* 42 */ uint8_t CpuStepping;
    /* 43 */ uint8_t CpuModel;
    /* 44 */ uint32_t MHz;
    /* 48 */ std::array<uint64_t, 8> HalReserved;
    /* 88 */ uint16_t MinorVersion;
    /* 8a */ uint16_t MajorVersion;
    /* 8c */ uint8_t BuildType;
    /* 8d */ uint8_t CpuVendor;
    /* 8e */ uint8_t LegacyCoresPerPhysicalProcessor;
    /* 8f */ uint8_t LegacyLogicalProcessorsPerCore;
    /* 90 */ uint64_t TscFrequency;
    /* 98 */ _KPRCB_TRACEPOINT_LOG* TracepointLog;
    /* a0 */ uint32_t CoresPerPhysicalProcessor;
    /* a4 */ uint32_t LogicalProcessorsPerCore;
    /* a8 */ std::array<uint64_t, 3> PrcbPad04;
    /* c0 */ _KSCHEDULER_SUBNODE* SchedulerSubNode;
    /* c8 */ uint64_t GroupSetMember;
    /* d0 */ uint8_t Group;
    /* d1 */ uint8_t GroupIndex;
    /* d2 */ std::array<uint8_t, 2> PrcbPad05;
    /* d4 */ uint32_t InitialApicId;
    /* d8 */ uint32_t ScbOffset;
    /* dc */ uint32_t ApicMask;
    /* e0 */ void* AcpiReserved;
    /* e8 */ uint32_t CFlushSize;
    /* ec */ _KPRCBFLAG PrcbFlags;
    /* f0 */ std::array<uint64_t, 2> PrcbPad11;
    /* 100 */ _KPROCESSOR_STATE ProcessorState;
    /* 6c0 */ _XSAVE_AREA_HEADER* ExtendedSupervisorState;
    /* 6c8 */ uint32_t ProcessorSignature;
    /* 6cc */ uint32_t ProcessorFlags;
    /* 6d0 */ uint16_t BpbRetpolineExitSpecCtrl;
    /* 6d2 */ uint16_t BpbTrappedRetpolineExitSpecCtrl;
    /* 6d4 */ uint16_t BpbTrappedBpbState;
    /* 6d4:0 */ uint16_t BpbTrappedCpuIdle             : 1;
    /* 6d4:1 */ uint16_t BpbTrappedFlushRsbOnTrap      : 1;
    /* 6d4:2 */ uint16_t BpbTrappedIbpbOnReturn        : 1;
    /* 6d4:3 */ uint16_t BpbTrappedIbpbOnTrap          : 1;
    /* 6d4:4 */ uint16_t BpbTrappedIbpbOnRetpolineExit : 1;
    /* 6d4:5 */ uint16_t BpbTrappedBpbStateReserved    : 3;
    /* 6d4:8 */ uint16_t BpbTrappedBpbStateReserved2   : 8;
    /* 6d6 */ uint8_t BpbRetpolineState;
    /* 6d6:0 */ uint8_t BpbRunningNonRetpolineCode : 1;
    /* 6d6:1 */ uint8_t BpbIndirectCallsSafe       : 1;
    /* 6d6:2 */ uint8_t BpbRetpolineEnabled        : 1;
    /* 6d6:3 */ uint8_t BpbRetpolineStateReserved  : 5;
    /* 6d7 */ uint8_t PrcbPad12b;
    /* 6d0 */ uint64_t PrcbPad12a;
    /* 6d8 */ uint64_t TrappedSecurityDomain;
    /* 6e0 */ uint16_t BpbState;
    /* 6e0:0 */ uint16_t BpbCpuIdle                 : 1;
    /* 6e0:1 */ uint16_t BpbFlushRsbOnTrap          : 1;
    /* 6e0:2 */ uint16_t BpbIbpbOnReturn            : 1;
    /* 6e0:3 */ uint16_t BpbIbpbOnTrap              : 1;
    /* 6e0:4 */ uint16_t BpbIbpbOnRetpolineExit     : 1;
    /* 6e0:5 */ uint16_t BpbFlushRsbOnReturn        : 1;
    /* 6e0:6 */ uint16_t BpbFlushRsbOnRetpolineExit : 1;
    /* 6e0:7 */ uint16_t BpbDivideOnReturn          : 1;
    /* 6e0:8 */ uint16_t VerwOnNonKvaReturn         : 1;
    /* 6e0:9 */ uint16_t FlushBhbOnTrap             : 1;
    /* 6e0:10 */ uint16_t Spare                     : 6;
    /* 6e2 */ uint8_t BpbFeatures;
    /* 6e2:0 */ uint8_t BpbClearOnIdle      : 1;
    /* 6e2:1 */ uint8_t BpbEnabled          : 1;
    /* 6e2:2 */ uint8_t BpbSmep             : 1;
    /* 6e2:3 */ uint8_t BpbKCet             : 1;
    /* 6e2:4 */ uint8_t BhbFlushSequence    : 2;
    /* 6e2:6 */ uint8_t BpbFeaturesReserved : 2;
    /* 6e3 */ std::array<uint8_t, 1> PrcbPad12e;
    /* 6e4 */ uint16_t BpbCurrentSpecCtrl;
    /* 6e6 */ uint16_t BpbKernelSpecCtrl;
    /* 6e8 */ uint16_t BpbNmiSpecCtrl;
    /* 6ea */ uint16_t BpbUserSpecCtrl;
    /* 6ec */ int16_t PairRegister;
    /* 6ee */ std::array<uint8_t, 2> PrcbPad12d;
    /* 6d8 */ std::array<uint64_t, 3> PrcbPad12c;
    /* 6f0 */ std::array<_KSPIN_LOCK_QUEUE, 17> LockQueue;
    /* 800 */ std::array<_PP_LOOKASIDE_LIST, 16> PPLookasideList;
    /* 900 */ std::array<_GENERAL_LOOKASIDE_POOL, 32> PPNxPagedLookasideList;
    /* 1500 */ std::array<_GENERAL_LOOKASIDE_POOL, 32> PPNPagedLookasideList;
    /* 2100 */ std::array<_GENERAL_LOOKASIDE_POOL, 32> PPPagedLookasideList;
    /* 2d00 */ uint64_t PrcbPad20;
    /* 2d08 */ _SINGLE_LIST_ENTRY DeferredReadyListHead;
    /* 2d10 */ int32_t MmPageFaultCount;
    /* 2d14 */ int32_t MmCopyOnWriteCount;
    /* 2d18 */ int32_t MmTransitionCount;
    /* 2d1c */ int32_t MmDemandZeroCount;
    /* 2d20 */ int32_t MmPageReadCount;
    /* 2d24 */ int32_t MmPageReadIoCount;
    /* 2d28 */ int32_t MmDirtyPagesWriteCount;
    /* 2d2c */ int32_t MmDirtyWriteIoCount;
    /* 2d30 */ int32_t MmMappedPagesWriteCount;
    /* 2d34 */ int32_t MmMappedWriteIoCount;
    /* 2d38 */ uint32_t KeSystemCalls;
    /* 2d3c */ uint32_t KeContextSwitches;
    /* 2d40 */ uint32_t PrcbPad40;
    /* 2d44 */ uint32_t CcFastReadNoWait;
    /* 2d48 */ uint32_t CcFastReadWait;
    /* 2d4c */ uint32_t CcFastReadNotPossible;
    /* 2d50 */ uint32_t CcCopyReadNoWait;
    /* 2d54 */ uint32_t CcCopyReadWait;
    /* 2d58 */ uint32_t CcCopyReadNoWaitMiss;
    /* 2d5c */ int32_t IoReadOperationCount;
    /* 2d60 */ int32_t IoWriteOperationCount;
    /* 2d64 */ int32_t IoOtherOperationCount;
    /* 2d68 */ _LARGE_INTEGER IoReadTransferCount;
    /* 2d70 */ _LARGE_INTEGER IoWriteTransferCount;
    /* 2d78 */ _LARGE_INTEGER IoOtherTransferCount;
    /* 2d80 */ int32_t PacketBarrier;
    /* 2d84 */ int32_t TargetCount;
    /* 2d88 */ uint32_t IpiFrozen;
    /* 2d8c */ uint32_t PrcbPad30;
    /* 2d90 */ void* IsrDpcStats;
    /* 2d98 */ uint32_t DeviceInterrupts;
    /* 2d9c */ int32_t LookasideIrpFloat;
    /* 2da0 */ uint32_t InterruptLastCount;
    /* 2da4 */ uint32_t InterruptRate;
    /* 2da8 */ uint64_t PrcbPad31;
    /* 2db0 */ _KPRCB* PairPrcb;
    /* 2db8 */ _KSTATIC_AFFINITY_BLOCK StaticAffinity;
    /* 31d8 */ _KSOFTWARE_INTERRUPT_BATCH DeferredDispatchInterrupts;
    /* 32e8 */ std::array<uint64_t, 3> PrcbPad35;
    /* 3300 */ _SLIST_HEADER InterruptObjectPool;
    /* 3310 */ _RTL_HASH_TABLE* DpcRuntimeHistoryHashTable;
    /* 3318 */ _KDPC* DpcRuntimeHistoryHashTableCleanupDpc;
    /* 3320 */ std::function<void(_KDPC*, void*, void*, void*)> CurrentDpcRoutine;
    /* 3328 */ uint64_t CurrentDpcRuntimeHistoryCached;
    /* 3330 */ uint64_t CurrentDpcStartTime;
    /* 3338 */ _KTHREAD* DpcDelegateThread;
    /* 3340 */ std::array<_KDPC_DATA, 2> DpcData;
    /* 33a0 */ void* DpcStack;
    /* 33a8 */ int32_t MaximumDpcQueueDepth;
    /* 33ac */ uint32_t DpcRequestRate;
    /* 33b0 */ uint32_t MinimumDpcRate;
    /* 33b4 */ uint32_t DpcLastCount;
    /* 33b8 */ uint8_t ThreadDpcEnable;
    /* 33b9 */ uint8_t QuantumEnd;
    /* 33ba */ uint8_t DpcRoutineActive;
    /* 33bb */ uint8_t IdleSchedule;
    /* 33bc */ int32_t DpcRequestSummary;
    /* 33bc */ std::array<int16_t, 2> DpcRequestSlot;
    /* 33bc */ int16_t NormalDpcState;
    /* 33be */ int16_t ThreadDpcState;
    /* 33bc:0 */ uint32_t DpcNormalProcessingActive       : 1;
    /* 33bc:1 */ uint32_t DpcNormalProcessingRequested    : 1;
    /* 33bc:2 */ uint32_t DpcNormalThreadSignal           : 1;
    /* 33bc:3 */ uint32_t DpcNormalTimerExpiration        : 1;
    /* 33bc:4 */ uint32_t DpcNormalDpcPresent             : 1;
    /* 33bc:5 */ uint32_t DpcNormalLocalInterrupt         : 1;
    /* 33bc:6 */ uint32_t DpcNormalPriorityAntiStarvation : 1;
    /* 33bc:7 */ uint32_t DpcNormalSwapToDpcDelegate      : 1;
    /* 33bc:8 */ uint32_t DpcNormalSpare                  : 8;
    /* 33bc:16 */ uint32_t DpcThreadActive                : 1;
    /* 33bc:17 */ uint32_t DpcThreadRequested             : 1;
    /* 33bc:18 */ uint32_t DpcThreadSpare                 : 14;
    /* 33c0 */ uint32_t LastTick;
    /* 33c4 */ uint32_t ClockInterrupts;
    /* 33c8 */ uint32_t ReadyScanTick;
    /* 33cc */ uint32_t SingleDpcSoftTimeLimitTicks;
    /* 33d0 */ _KSINGLE_DPC_SOFT_TIMEOUT_EVENT_INFO* SingleDpcSoftTimeoutEventInfo;
    /* 33d8 */ uint32_t CumulativeDpcSoftTimeLimitTicks;
    /* 33dc */ uint32_t DpcWatchdogProfileBufferSize;
    /* 33e0 */ std::array<uint32_t, 8> PrcbPad93;
    /* 3400 */ std::array<void*, 256> InterruptObject;
    /* 3c00 */ _KTIMER_TABLE TimerTable;
    /* 7e18 */ std::array<uint32_t, 10> PrcbPad92;
    /* 7e40 */ _KGATE DpcGate;
    /* 7e58 */ void* PrcbPad52;
    /* 7e60 */ _KDPC CallDpc;
    /* 7ea0 */ int32_t ClockKeepAlive;
    /* 7ea4 */ std::array<uint8_t, 2> PrcbPad60;
    /* 7ea6 */ uint8_t NmiActive;
    /* 7ea7 */ uint8_t MceActive;
    /* 7ea6 */ uint16_t CombinedNmiMceActive;
    /* 7ea8 */ int32_t DpcWatchdogPeriodTicks;
    /* 7eac */ int32_t DpcWatchdogCount;
    /* 7eb0 */ int32_t KeSpinLockOrdering;
    /* 7eb4 */ uint32_t DpcWatchdogProfileCumulativeDpcThresholdTicks;
    /* 7eb8 */ void* CachedPtes;
    /* 7ec0 */ _LIST_ENTRY WaitListHead;
    /* 7ed0 */ uint64_t WaitLock;
    /* 7ed8 */ uint32_t ReadySummary;
    /* 7edc */ int32_t AffinitizedSelectionMask;
    /* 7ee0 */ uint32_t QueueIndex;
    /* 7ee4 */ uint32_t NormalPriorityQueueIndex;
    /* 7ee8 */ uint32_t NormalPriorityReadyScanTick;
    /* 7eec */ uint32_t DpcWatchdogSequenceNumber;
    /* 7ef0 */ _KDPC TimerExpirationDpc;
    /* 7f30 */ _RTL_RB_TREE ScbQueue;
    /* 7f40 */ std::array<_LIST_ENTRY, 32> DispatcherReadyListHead;
    /* 8140 */ uint32_t InterruptCount;
    /* 8144 */ uint32_t KernelTime;
    /* 8148 */ uint32_t UserTime;
    /* 814c */ uint32_t DpcTime;
    /* 8150 */ uint32_t InterruptTime;
    /* 8154 */ uint32_t AdjustDpcThreshold;
    /* 8158 */ uint8_t DebuggerSavedIRQL;
    /* 8159 */ uint8_t GroupSchedulingOverQuota;
    /* 815a */ uint8_t DeepSleep;
    /* 815b */ uint8_t PrcbPad80;
    /* 815c */ uint32_t DpcTimeCount;
    /* 8160 */ uint32_t DpcTimeLimitTicks;
    /* 8164 */ uint32_t PeriodicCount;
    /* 8168 */ uint32_t PeriodicBias;
    /* 816c */ uint32_t AvailableTime;
    /* 8170 */ uint32_t KeExceptionDispatchCount;
    /* 8174 */ uint32_t ReadyThreadCount;
    /* 8178 */ uint64_t ReadyQueueExpectedRunTime;
    /* 8180 */ uint64_t StartCycles;
    /* 8188 */ std::array<uint64_t, 4> TaggedCycles;
    /* 81a8 */ uint64_t AffinitizedCycles;
    /* 81b0 */ uint64_t* CyclesByThreadType;
    /* 81b8 */ uint32_t CpuCycleScalingFactor;
    /* 81bc */ std::array<uint16_t, 8> PerformanceScoreByClass;
    /* 81cc */ std::array<uint16_t, 8> EfficiencyScoreByClass;
    /* 81dc */ std::array<uint32_t, 23> PrcbPad83;
    /* 8238 */ uint64_t NumberOfSecureFaults;
    /* 8240 */ uint32_t DpcWatchdogProfileSingleDpcThresholdTicks;
    /* 8244 */ int32_t PrcbPad82;
    /* 8248 */ void* CachedStack;
    /* 8250 */ uint32_t PageColor;
    /* 8254 */ uint32_t NodeColor;
    /* 8258 */ uint32_t NodeShiftedColor;
    /* 825c */ uint32_t SecondaryColorMask;
    /* 8260 */ std::array<uint8_t, 5> PrcbPad81;
    /* 8265 */ uint8_t SystemWorkKickInProgress;
    /* 8266 */ uint8_t ExceptionStackActive;
    /* 8267 */ uint8_t TbFlushListActive;
    /* 8268 */ void* ExceptionStack;
    /* 8270 */ int64_t MmSpinLockOrdering;
    /* 8278 */ uint64_t CycleTime;
    /* 8280 */ std::array<std::array<uint64_t, 2>, 4> Cycles;
    /* 82c0 */ uint32_t CcFastMdlReadNoWait;
    /* 82c4 */ uint32_t CcFastMdlReadWait;
    /* 82c8 */ uint32_t CcFastMdlReadNotPossible;
    /* 82cc */ uint32_t CcMapDataNoWait;
    /* 82d0 */ uint32_t CcMapDataWait;
    /* 82d4 */ uint32_t CcPinMappedDataCount;
    /* 82d8 */ uint32_t CcPinReadNoWait;
    /* 82dc */ uint32_t CcPinReadWait;
    /* 82e0 */ uint32_t CcMdlReadNoWait;
    /* 82e4 */ uint32_t CcMdlReadWait;
    /* 82e8 */ uint32_t CcLazyWriteHotSpots;
    /* 82ec */ uint32_t CcLazyWriteIos;
    /* 82f0 */ uint32_t CcLazyWritePages;
    /* 82f4 */ uint32_t CcDataFlushes;
    /* 82f8 */ uint32_t CcDataPages;
    /* 82fc */ uint32_t CcLostDelayedWrites;
    /* 8300 */ uint32_t CcFastReadResourceMiss;
    /* 8304 */ uint32_t CcCopyReadWaitMiss;
    /* 8308 */ uint32_t CcFastMdlReadResourceMiss;
    /* 830c */ uint32_t CcMapDataNoWaitMiss;
    /* 8310 */ uint32_t CcMapDataWaitMiss;
    /* 8314 */ uint32_t CcPinReadNoWaitMiss;
    /* 8318 */ uint32_t CcPinReadWaitMiss;
    /* 831c */ uint32_t CcMdlReadNoWaitMiss;
    /* 8320 */ uint32_t CcMdlReadWaitMiss;
    /* 8324 */ uint32_t CcReadAheadIos;
    /* 8328 */ int32_t MmCacheTransitionCount;
    /* 832c */ int32_t MmCacheReadCount;
    /* 8330 */ int32_t MmCacheIoCount;
    /* 8334 */ uint32_t PrcbPad91;
    /* 8338 */ void* MmInternal;
    /* 8340 */ _PROCESSOR_POWER_STATE PowerState;
    /* 8578 */ std::array<uint64_t, 1> PrcbPad96;
    /* 8580 */ void* PrcbPad90;
    /* 8588 */ _LIST_ENTRY ScbList;
    /* 8598 */ _KDPC ForceIdleDpc;
    /* 85d8 */ _KDPC DpcWatchdogDpc;
    /* 8618 */ std::array<uint64_t, 8> PrcbPad98;
    /* 8658 */ std::array<_CACHE_DESCRIPTOR, 5> Cache;
    /* 8694 */ uint32_t CacheCount;
    /* 8698 */ uint32_t CachedCommit;
    /* 869c */ uint32_t CachedResidentAvailable;
    /* 86a0 */ void* WheaInfo;
    /* 86a8 */ void* EtwSupport;
    /* 86b0 */ void* ExSaPageArray;
    /* 86b8 */ uint32_t KeAlignmentFixupCount;
    /* 86bc */ uint32_t PrcbPad95;
    /* 86c0 */ _SLIST_HEADER HypercallPageList;
    /* 86d0 */ uint64_t* StatisticsPage;
    /* 86d8 */ uint64_t GenerationTarget;
    /* 86e0 */ std::array<uint64_t, 4> PrcbPad85;
    /* 8700 */ void* HypercallCachedPages;
    /* 8708 */ void* VirtualApicAssist;
    /* 8710 */ _KAFFINITY_EX PackageProcessorSet;
    /* 8818 */ uint32_t ProcessorId;
    /* 881c */ uint32_t CoreId;
    /* 8820 */ uint32_t ModuleId;
    /* 8824 */ uint32_t DieId;
    /* 8828 */ uint32_t PackageId;
    /* 8818 */ std::array<uint32_t, 5> TopologyId;
    /* 882c */ std::array<uint32_t, 5> NodeRelativeTopologyIndex;
    /* 8840 */ uint64_t SharedReadyQueueMask;
    /* 8848 */ _KSHARED_READY_QUEUE* SharedReadyQueue;
    /* 8850 */ uint32_t SharedQueueScanOwner;
    /* 8854 */ uint32_t ScanSiblingIndex;
    /* 8858 */ _KCORE_CONTROL_BLOCK* CoreControlBlock;
    /* 8860 */ uint64_t CoreProcessorSet;
    /* 8868 */ uint64_t ScanSiblingMask;
    /* 8870 */ uint64_t LLCMask;
    /* 8878 */ uint64_t GroupModuleProcessorSet;
    /* 8880 */ _KTHREAD* SmtIsolationThread;
    /* 8888 */ std::array<uint64_t, 2> PrcbPad97;
    /* 8898 */ _PROCESSOR_PROFILE_CONTROL_AREA* ProcessorProfileControlArea;
    /* 88a0 */ void* ProfileEventIndexAddress;
    /* 88a8 */ void** DpcWatchdogProfile;
    /* 88b0 */ void** DpcWatchdogProfileCurrentEmptyCapture;
    /* 88b8 */ void* SchedulerAssist;
    /* 88c0 */ _SYNCH_COUNTERS SynchCounters;
    /* 8978 */ uint64_t PrcbPad94;
    /* 8980 */ _FILESYSTEM_DISK_COUNTERS FsCounters;
    /* 8990 */ std::array<uint8_t, 13> VendorString;
    /* 899d */ std::array<uint8_t, 3> PrcbPad100;
    /* 89a0 */ uint64_t FeatureBits;
    /* 89a8 */ _LARGE_INTEGER UpdateSignature;
    /* 89b0 */ uint64_t PteBitCache;
    /* 89b8 */ uint32_t PteBitOffset;
    /* 89bc */ uint32_t PrcbPad105;
    /* 89c0 */ _CONTEXT* Context;
    /* 89c8 */ uint32_t ContextFlagsInit;
    /* 89cc */ uint32_t PrcbPad115;
    /* 89d0 */ _XSAVE_AREA* ExtendedState;
    /* 89d8 */ void* IsrStack;
    /* 89e0 */ _KENTROPY_TIMING_STATE EntropyTimingState;
    /* 8b38 */ struct
    {
        /* 00 */ uint32_t UpdateCycle;
        /* 04 */ int16_t PairLocal;
        /* 04 */ uint8_t PairLocalLow;
        /* 05:0 */ uint8_t PairLocalForceStibp : 1;
        /* 05:1 */ uint8_t Reserved            : 4;
        /* 05:5 */ uint8_t Frozen              : 1;
        /* 05:6 */ uint8_t ForceUntrusted      : 1;
        /* 05:7 */ uint8_t SynchIpi            : 1;
        /* 06 */ int16_t PairRemote;
        /* 06 */ uint8_t PairRemoteLow;
        /* 07 */ uint8_t Reserved2;
        /* 08 */ std::array<uint8_t, 24> Trace;
        /* 20 */ uint64_t LocalDomain;
        /* 28 */ uint64_t RemoteDomain;
        /* 30 */ _KTHREAD* Thread;
    } StibpPairingTrace;

    /* 8b70 */ _SINGLE_LIST_ENTRY AbSelfIoBoostsList;
    /* 8b78 */ _SINGLE_LIST_ENTRY AbPropagateBoostsList;
    /* 8b80 */ _KDPC AbDpc;
    /* 8bc0 */ _IOP_IRP_STACK_PROFILER IoIrpStackProfilerCurrent;
    /* 8c14 */ _IOP_IRP_STACK_PROFILER IoIrpStackProfilerPrevious;
    /* 8c68 */ _KSECURE_FAULT_INFORMATION SecureFault;
    /* 8c80 */ _KSHARED_READY_QUEUE* LocalSharedReadyQueue;
    /* 8c88 */ std::array<uint64_t, 7> PrcbPad125;
    /* 8cc0 */ uint32_t TimerExpirationTraceCount;
    /* 8cc4 */ uint32_t PrcbPad127;
    /* 8cc8 */ std::array<_KTIMER_EXPIRATION_TRACE, 16> TimerExpirationTrace;
    /* 8dc8 */ std::array<uint64_t, 7> PrcbPad128;
    /* 8e00 */ _KCLOCK_TIMER_STATE ClockTimerState;
    /* 9318 */ std::array<uint8_t, 40> PrcbPad129;
    /* 9340 */ _REQUEST_MAILBOX* Mailbox;
    /* 9348 */ std::array<uint64_t, 7> PrcbPad130;
    /* 9380 */ std::array<_MACHINE_CHECK_CONTEXT, 2> McheckContext;
    /* 9420 */ uint64_t TransitionShadowStack;
    /* 9428 */ uint64_t KernelShadowStackInitial;
    /* 9430 */ uint64_t* IstShadowStacksTable;
    /* 9438 */ void* CachedShadowStack;
    /* 9440 */ std::array<_KLOCK_QUEUE_HANDLE, 4> SelfmapLockHandle;
    /* 94a0 */ std::array<uint64_t, 4> PrcbPad134a;
    /* 94c0 */ _KAFFINITY_EX DieProcessorSet;
    /* 95c8 */ uint32_t CoresPerPhysicalDie;
    /* 95cc */ uint32_t LogicalProcessorsPerModule;
    /* 95d0 */ std::array<uint8_t, 64> PrcbPad137;
    /* 9610 */ _KAFFINITY_EX ModuleProcessorSet;
    /* 9718 */ _KCORE_CONTROL_BLOCK LocalCoreControlBlock;
    /* 9760 */ std::array<uint8_t, 1824> PrcbPad138;
    /* 9e80 */ uint64_t KernelDirectoryTableBase;
    /* 9e88 */ uint64_t RspBaseShadow;
    /* 9e90 */ uint64_t UserRspShadow;
    /* 9e98 */ uint32_t ShadowFlags;
    /* 9e9c */ uint32_t PrcbPad138b;
    /* 9ea0 */ uint64_t PrcbPad138c;
    /* 9ea8 */ uint16_t PrcbPad138d;
    /* 9eaa */ uint16_t PrcbPad138e;
    /* 9eac */ uint32_t DbgMceNestingLevel;
    /* 9eb0 */ uint32_t DbgMceFlags;
    /* 9eb4 */ uint32_t PrcbPad139b;
    /* 9eb8 */ std::array<_KAFFINITY_EX, 5> CacheProcessorSet;
    /* a3e0 */ std::array<uint64_t, 340> PrcbPad140;
    /* ae80 */ std::array<uint64_t, 8> PrcbPad140a;
    /* aec0 */ std::array<uint64_t, 512> PrcbPad141;
    /* bec0 */ std::array<_REQUEST_MAILBOX, 1> RequestMailbox;
};
using KPRCB  = struct _KPRCB;
using PKPRCB = struct _KPRCB*;

struct _KPCR
{
    /* 00 */ _NT_TIB NtTib;
    /* 00 */ _KGDTENTRY64* GdtBase;
    /* 08 */ _KTSS64* TssBase;
    /* 10 */ uint64_t UserRsp;
    /* 18 */ _KPCR* Self;
    /* 20 */ _KPRCB* CurrentPrcb;
    /* 28 */ _KSPIN_LOCK_QUEUE* LockArray;
    /* 30 */ void* Used_Self;
    /* 38 */ _KIDTENTRY64* IdtBase;
    /* 40 */ std::array<uint64_t, 2> Unused;
    /* 50 */ uint8_t Irql;
    /* 51 */ uint8_t SecondLevelCacheAssociativity;
    /* 52 */ uint8_t ObsoleteNumber;
    /* 53 */ uint8_t Fill0;
    /* 54 */ std::array<uint32_t, 3> Unused0;
    /* 60 */ uint16_t MajorVersion;
    /* 62 */ uint16_t MinorVersion;
    /* 64 */ uint32_t StallScaleFactor;
    /* 68 */ std::array<void*, 3> Unused1;
    /* 80 */ std::array<uint32_t, 15> KernelReserved;
    /* bc */ uint32_t SecondLevelCacheSize;
    /* c0 */ std::array<uint32_t, 16> HalReserved;
    /* 100 */ uint32_t Unused2;
    /* 108 */ void* KdVersionBlock;
    /* 110 */ void* Unused3;
    /* 118 */ std::array<uint32_t, 24> PcrAlign1;
    /* 180 */ _KPRCB Prcb;
};
using KPCR  = struct _KPCR;
using PKPCR = struct _KPCR*;
}  // namespace windows

/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.9.3 at Sun Sep 29 18:14:50 2019. */

#ifndef PB_PB_MESSAGE_PB_H_INCLUDED
#define PB_PB_MESSAGE_PB_H_INCLUDED
#include <pb.h>

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Enum definitions */
typedef enum _DEVICE_WORK_STATE 
{
    DEVICE_WORK_STATE_RUNNING = 0,
    DEVICE_WORK_STATE_UPGRADE = 1,
    DEVICE_WORK_STATE_UPGRADE_SUCCESS = 2,
    DEVICE_WORK_STATE_UPGRADE_FAILED = 3
} DEVICE_WORK_STATE;

#define _DEVICE_WORK_STATE_MIN DEVICE_WORK_STATE_RUNNING
#define _DEVICE_WORK_STATE_MAX DEVICE_WORK_STATE_UPGRADE_FAILED
#define _DEVICE_WORK_STATE_ARRAYSIZE ((DEVICE_WORK_STATE)(DEVICE_WORK_STATE_UPGRADE_FAILED+1))

/* Struct definitions */
typedef struct _device_upgrade 
{
    pb_callback_t oad_address;
/* @@protoc_insertion_point(struct:device_upgrade) */
} device_upgrade_t;

typedef struct _ble_state 
{
    char ble_mac[16];
    char ble_device_version[8];
    uint32_t ble_device_type;
    bool ble_online_state;
/* @@protoc_insertion_point(struct:ble_state) */
} ble_state_t;

typedef struct _device_data 
{
    char ble_mac[16];
    uint32_t ble_packet_number;
    bool ble_charging_state;
    uint32_t ble_battery_level;
    pb_size_t raw_temperature_count;
    float raw_temperature[3];
    pb_size_t algorithm_temperature_count;
    float algorithm_temperature[3];
    uint32_t algorithm_state;
    uint32_t algorithm_gesture;
    bool algorithm_predict_state;
    int32_t ble_rssi;
    int32_t wifi_rssi;
    char current_time[32];
/* @@protoc_insertion_point(struct:device_data) */
} device_data_t;

typedef struct _device_information 
{
    uint32_t device_type;
    char device_version[8];
    DEVICE_WORK_STATE device_state;
    char algorithm_version[8];
/* @@protoc_insertion_point(struct:device_information) */
} device_information_t;

typedef struct _device_state 
{
    bool online_state;
/* @@protoc_insertion_point(struct:device_state) */
} device_state_t;

typedef struct _mqtt_server_configure 
{
    bool domain_name_flag;
    pb_callback_t address;
    uint32_t port;
    char username[128];
    char password[128];
/* @@protoc_insertion_point(struct:mqtt_server_configure) */
} mqtt_server_configure_t;

/* Default values for struct fields */

/* Initializer values for message structs */
#define device_information_init_default          {0, "", _DEVICE_WORK_STATE_MIN, ""}
#define mqtt_server_configure_init_default       {0, {{NULL}, NULL}, 0, "", ""}
#define device_upgrade_init_default              {{{NULL}, NULL}}
#define device_data_init_default                 {"", 0, 0, 0, 0, {0, 0, 0}, 0, {0, 0, 0}, 0, 0, 0, 0, 0, ""}
#define ble_state_init_default                   {"", "", 0, 0}
#define device_state_init_default                {0}
#define device_information_init_zero             {0, "", _DEVICE_WORK_STATE_MIN, ""}
#define mqtt_server_configure_init_zero          {0, {{NULL}, NULL}, 0, "", ""}
#define device_upgrade_init_zero                 {{{NULL}, NULL}}
#define device_data_init_zero                    {"", 0, 0, 0, 0, {0, 0, 0}, 0, {0, 0, 0}, 0, 0, 0, 0, 0, ""}
#define ble_state_init_zero                      {"", "", 0, 0}
#define device_state_init_zero                   {0}

/* Field tags (for use in manual encoding/decoding) */
#define device_upgrade_oad_address_tag           1
#define ble_state_ble_mac_tag                    1
#define ble_state_ble_device_version_tag         2
#define ble_state_ble_device_type_tag            3
#define ble_state_ble_online_state_tag           4
#define device_data_ble_mac_tag                  1
#define device_data_ble_packet_number_tag        2
#define device_data_ble_charging_state_tag       3
#define device_data_ble_battery_level_tag        4
#define device_data_raw_temperature_tag          5
#define device_data_algorithm_temperature_tag    6
#define device_data_algorithm_state_tag          7
#define device_data_algorithm_gesture_tag        8
#define device_data_algorithm_predict_state_tag  9
#define device_data_ble_rssi_tag                 10
#define device_data_wifi_rssi_tag                11
#define device_data_current_time_tag             12
#define device_information_device_type_tag       1
#define device_information_device_version_tag    2
#define device_information_device_state_tag      3
#define device_information_algorithm_version_tag 4
#define device_state_online_state_tag            1
#define mqtt_server_configure_domain_name_flag_tag 1
#define mqtt_server_configure_address_tag        2
#define mqtt_server_configure_port_tag           3
#define mqtt_server_configure_username_tag       4
#define mqtt_server_configure_password_tag       5

/* Struct field encoding specification for nanopb */
extern const pb_field_t device_information_fields[5];
extern const pb_field_t mqtt_server_configure_fields[6];
extern const pb_field_t device_upgrade_fields[2];
extern const pb_field_t device_data_fields[13];
extern const pb_field_t ble_state_fields[5];
extern const pb_field_t device_state_fields[2];

/* Maximum encoded size of messages (where known) */
#define device_information_size                  28
/* mqtt_server_configure_size depends on runtime parameters */
/* device_upgrade_size depends on runtime parameters */
#define device_data_size                         122
#define ble_state_size                           36
#define device_state_size                        2

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define PB_MESSAGE_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif

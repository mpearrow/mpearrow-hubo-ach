/** THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
 * BY HAND!!
 *
 * Generated by lcm-gen
 **/

#include <stdint.h>
#include <stdlib.h>
#include <lcm/lcm_coretypes.h>
#include <lcm/lcm.h>

#ifndef _lcmt_hubo_saggital_jointcommand_h
#define _lcmt_hubo_saggital_jointcommand_h

#ifdef __cplusplus
extern "C" {
#endif

typedef struct _lcmt_hubo_saggital_jointcommand lcmt_hubo_saggital_jointcommand;
struct _lcmt_hubo_saggital_jointcommand
{
    int64_t    timestamp;
    double     HP;
    double     LSP;
    double     LEP;
    double     LWP;
    double     RSP;
    double     REP;
    double     RWP;
    double     LHP;
    double     LKP;
    double     LAP;
    double     RHP;
    double     RKP;
    double     RAP;
};

lcmt_hubo_saggital_jointcommand   *lcmt_hubo_saggital_jointcommand_copy(const lcmt_hubo_saggital_jointcommand *p);
void lcmt_hubo_saggital_jointcommand_destroy(lcmt_hubo_saggital_jointcommand *p);

typedef struct _lcmt_hubo_saggital_jointcommand_subscription_t lcmt_hubo_saggital_jointcommand_subscription_t;
typedef void(*lcmt_hubo_saggital_jointcommand_handler_t)(const lcm_recv_buf_t *rbuf,
             const char *channel, const lcmt_hubo_saggital_jointcommand *msg, void *user);

int lcmt_hubo_saggital_jointcommand_publish(lcm_t *lcm, const char *channel, const lcmt_hubo_saggital_jointcommand *p);
lcmt_hubo_saggital_jointcommand_subscription_t* lcmt_hubo_saggital_jointcommand_subscribe(lcm_t *lcm, const char *channel, lcmt_hubo_saggital_jointcommand_handler_t f, void *userdata);
int lcmt_hubo_saggital_jointcommand_unsubscribe(lcm_t *lcm, lcmt_hubo_saggital_jointcommand_subscription_t* hid);
int lcmt_hubo_saggital_jointcommand_subscription_set_queue_capacity(lcmt_hubo_saggital_jointcommand_subscription_t* subs,
                              int num_messages);


int  lcmt_hubo_saggital_jointcommand_encode(void *buf, int offset, int maxlen, const lcmt_hubo_saggital_jointcommand *p);
int  lcmt_hubo_saggital_jointcommand_decode(const void *buf, int offset, int maxlen, lcmt_hubo_saggital_jointcommand *p);
int  lcmt_hubo_saggital_jointcommand_decode_cleanup(lcmt_hubo_saggital_jointcommand *p);
int  lcmt_hubo_saggital_jointcommand_encoded_size(const lcmt_hubo_saggital_jointcommand *p);

// LCM support functions. Users should not call these
int64_t __lcmt_hubo_saggital_jointcommand_get_hash(void);
int64_t __lcmt_hubo_saggital_jointcommand_hash_recursive(const __lcm_hash_ptr *p);
int     __lcmt_hubo_saggital_jointcommand_encode_array(void *buf, int offset, int maxlen, const lcmt_hubo_saggital_jointcommand *p, int elements);
int     __lcmt_hubo_saggital_jointcommand_decode_array(const void *buf, int offset, int maxlen, lcmt_hubo_saggital_jointcommand *p, int elements);
int     __lcmt_hubo_saggital_jointcommand_decode_array_cleanup(lcmt_hubo_saggital_jointcommand *p, int elements);
int     __lcmt_hubo_saggital_jointcommand_encoded_array_size(const lcmt_hubo_saggital_jointcommand *p, int elements);
int     __lcmt_hubo_saggital_jointcommand_clone_array(const lcmt_hubo_saggital_jointcommand *p, lcmt_hubo_saggital_jointcommand *q, int elements);

#ifdef __cplusplus
}
#endif

#endif

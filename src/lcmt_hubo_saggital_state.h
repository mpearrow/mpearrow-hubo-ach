/** THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
 * BY HAND!!
 *
 * Generated by lcm-gen
 **/

#include <stdint.h>
#include <stdlib.h>
#include <lcm/lcm_coretypes.h>
#include <lcm/lcm.h>

#ifndef _lcmt_hubo_saggital_state_h
#define _lcmt_hubo_saggital_state_h

#ifdef __cplusplus
extern "C" {
#endif

typedef struct _lcmt_hubo_saggital_state lcmt_hubo_saggital_state;
struct _lcmt_hubo_saggital_state
{
    int64_t    timestamp;
    double     base_link_x;
    double     base_link_z;
    double     base_link_p;
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
    double     base_link_xdot;
    double     base_link_zdot;
    double     base_link_pdot;
    double     HPdot;
    double     LSPdot;
    double     LEPdot;
    double     LWPdot;
    double     RSPdot;
    double     REPdot;
    double     RWPdot;
    double     LHPdot;
    double     LKPdot;
    double     LAPdot;
    double     RHPdot;
    double     RKPdot;
    double     RAPdot;
};

lcmt_hubo_saggital_state   *lcmt_hubo_saggital_state_copy(const lcmt_hubo_saggital_state *p);
void lcmt_hubo_saggital_state_destroy(lcmt_hubo_saggital_state *p);

typedef struct _lcmt_hubo_saggital_state_subscription_t lcmt_hubo_saggital_state_subscription_t;
typedef void(*lcmt_hubo_saggital_state_handler_t)(const lcm_recv_buf_t *rbuf,
             const char *channel, const lcmt_hubo_saggital_state *msg, void *user);

int lcmt_hubo_saggital_state_publish(lcm_t *lcm, const char *channel, const lcmt_hubo_saggital_state *p);
lcmt_hubo_saggital_state_subscription_t* lcmt_hubo_saggital_state_subscribe(lcm_t *lcm, const char *channel, lcmt_hubo_saggital_state_handler_t f, void *userdata);
int lcmt_hubo_saggital_state_unsubscribe(lcm_t *lcm, lcmt_hubo_saggital_state_subscription_t* hid);
int lcmt_hubo_saggital_state_subscription_set_queue_capacity(lcmt_hubo_saggital_state_subscription_t* subs,
                              int num_messages);


int  lcmt_hubo_saggital_state_encode(void *buf, int offset, int maxlen, const lcmt_hubo_saggital_state *p);
int  lcmt_hubo_saggital_state_decode(const void *buf, int offset, int maxlen, lcmt_hubo_saggital_state *p);
int  lcmt_hubo_saggital_state_decode_cleanup(lcmt_hubo_saggital_state *p);
int  lcmt_hubo_saggital_state_encoded_size(const lcmt_hubo_saggital_state *p);

// LCM support functions. Users should not call these
int64_t __lcmt_hubo_saggital_state_get_hash(void);
int64_t __lcmt_hubo_saggital_state_hash_recursive(const __lcm_hash_ptr *p);
int     __lcmt_hubo_saggital_state_encode_array(void *buf, int offset, int maxlen, const lcmt_hubo_saggital_state *p, int elements);
int     __lcmt_hubo_saggital_state_decode_array(const void *buf, int offset, int maxlen, lcmt_hubo_saggital_state *p, int elements);
int     __lcmt_hubo_saggital_state_decode_array_cleanup(lcmt_hubo_saggital_state *p, int elements);
int     __lcmt_hubo_saggital_state_encoded_array_size(const lcmt_hubo_saggital_state *p, int elements);
int     __lcmt_hubo_saggital_state_clone_array(const lcmt_hubo_saggital_state *p, lcmt_hubo_saggital_state *q, int elements);

#ifdef __cplusplus
}
#endif

#endif
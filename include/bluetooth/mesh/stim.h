#ifndef ZEPHYR_INCLUDE_BLUETOOTH_STIM_H_
#define ZEPHYR_INCLUDE_BLUETOOTH_STIM_H_

#ifdef __cplusplus
extern "C"{
#endif
	/*added to use beacon not in a mesh network*/
typedef void (*bt_mesh_scan_unprocressed_nonconn_ad_cb)(s8_t rssi,
										struct net_buf_simple *buf);

void set_callback(bt_mesh_scan_unprocressed_nonconn_ad_cb cb);

#ifdef __cplusplus
}
#endif

/**
 * @}
 */

#endif /* ZEPHYR_INCLUDE_BLUETOOTH_MESH_STIM_H_ */

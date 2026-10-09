#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

KSYMTAB_FUNC(buf_list_alloc, "", "");
KSYMTAB_FUNC(buf_list_is_empty, "", "");
KSYMTAB_FUNC(buf_list_is_full, "", "");
KSYMTAB_FUNC(buf_list_free, "", "");
KSYMTAB_FUNC(bus_chn_init, "", "");
KSYMTAB_FUNC(bus_chn_deinit, "", "");
KSYMTAB_FUNC(chn_ops, "", "");
KSYMTAB_FUNC(module_ops_register, "", "");
KSYMTAB_FUNC(module_ops_unregister, "", "");
KSYMTAB_FUNC(get_wcn_bus_ops, "", "");
KSYMTAB_FUNC(wcn_get_hw_if_type, "_gpl", "");
KSYMTAB_FUNC(marlin_get_power_state, "_gpl", "");
KSYMTAB_FUNC(marlin_get_bt_wl_wake_host_en, "_gpl", "");
KSYMTAB_FUNC(marlin_get_wcn_chipid, "_gpl", "");
KSYMTAB_FUNC(wcn_get_chip_model, "_gpl", "");
KSYMTAB_FUNC(wcn_get_chip_type, "_gpl", "");
KSYMTAB_FUNC(wcn_get_chip_name, "_gpl", "");
KSYMTAB_FUNC(marlin_get_wcn_module_vendor, "_gpl", "");
KSYMTAB_FUNC(marlin_get_ant_num, "_gpl", "");
KSYMTAB_FUNC(wcn_get_xtal_26m_clk_type, "_gpl", "");
KSYMTAB_FUNC(wcn_get_xtal_26m_clk_mode, "_gpl", "");
KSYMTAB_FUNC(marlin_chip_en, "_gpl", "");
KSYMTAB_FUNC(open_power_ctl, "_gpl", "");
KSYMTAB_FUNC(marlin_get_power, "_gpl", "");
KSYMTAB_FUNC(marlin_get_download_status, "_gpl", "");
KSYMTAB_FUNC(wcn_get_module_status_changed, "_gpl", "");
KSYMTAB_FUNC(wcn_set_module_status_changed, "_gpl", "");
KSYMTAB_FUNC(marlin_get_module_status, "_gpl", "");
KSYMTAB_FUNC(is_first_power_on, "_gpl", "");
KSYMTAB_FUNC(cali_ini_need_download, "_gpl", "");
KSYMTAB_FUNC(marlin_set_wakeup, "_gpl", "");
KSYMTAB_FUNC(marlin_set_sleep, "_gpl", "");
KSYMTAB_FUNC(marlin_reset_reg, "_gpl", "");
KSYMTAB_FUNC(start_marlin, "_gpl", "");
KSYMTAB_FUNC(stop_marlin, "_gpl", "");
KSYMTAB_FUNC(marlin_reset_register_notify, "_gpl", "");
KSYMTAB_FUNC(marlin_reset_unregister_notify, "_gpl", "");
KSYMTAB_FUNC(marlin_reset_notify_call, "_gpl", "");
KSYMTAB_FUNC(marlin_reset_callback_register, "_gpl", "");
KSYMTAB_FUNC(marlin_reset_callback_unregister, "_gpl", "");
KSYMTAB_FUNC(mdbg_send, "_gpl", "");
KSYMTAB_FUNC(mdbg_assert_interface, "_gpl", "");
KSYMTAB_FUNC(mdbg_assert_read, "_gpl", "");
KSYMTAB_FUNC(mdbg_loopcheck_read, "_gpl", "");
KSYMTAB_FUNC(mdbg_at_cmd_read, "_gpl", "");
KSYMTAB_FUNC(sdiohal_dump_aon_reg, "_gpl", "");
KSYMTAB_FUNC(module_bus_init, "", "");
KSYMTAB_FUNC(module_bus_deinit, "", "");
KSYMTAB_FUNC(sdio_wait_pub_int_done, "", "");
KSYMTAB_FUNC(sdio_ap_int_cp0, "", "");
KSYMTAB_FUNC(sdio_pub_int_RegCb, "", "");
KSYMTAB_FUNC(sdio_pub_int_btwf_en0, "", "");
KSYMTAB_FUNC(sdio_pub_int_gnss_en0, "", "");
KSYMTAB_FUNC(sdio_pub_int_poweron, "", "");
KSYMTAB_FUNC(sdio_pub_int_init, "", "");
KSYMTAB_FUNC(sdio_pub_int_deinit, "", "");
KSYMTAB_FUNC(slp_mgr_init, "", "");
KSYMTAB_FUNC(slp_mgr_deinit, "", "");

MODULE_INFO(depends, "");


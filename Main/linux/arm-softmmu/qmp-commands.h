

{
.name       = "quit",
.args_type  = "",
.params     = "",
.help       = "quit the emulator",
.user_print = monitor_user_noop,
.mhandler.cmd_new = do_quit,
},


{
.name       = "eject",
.args_type  = "force:-f,device:B",
.params     = "[-f] device",
.help       = "eject a removable medium (use -f to force it)",
.user_print = monitor_user_noop,
.mhandler.cmd_new = do_eject,
},


{
.name       = "change",
.args_type  = "device:B,target:F,arg:s?",
.params     = "device filename [format]",
.help       = "change a removable medium, optional format",
.user_print = monitor_user_noop,
.mhandler.cmd_new = do_change,
},


{
.name       = "screendump",
.args_type  = "filename:F",
.params     = "filename",
.help       = "save screen into PPM image 'filename'",
.user_print = monitor_user_noop,
.mhandler.cmd_new = do_screen_dump,
},


{
.name       = "stop",
.args_type  = "",
.params     = "",
.help       = "stop emulation",
.user_print = monitor_user_noop,
.mhandler.cmd_new = do_stop,
},


{
.name       = "cont",
.args_type  = "",
.params     = "",
.help       = "resume emulation",
.user_print = monitor_user_noop,
.mhandler.cmd_new = do_cont,
},


{
.name       = "system_reset",
.args_type  = "",
.params     = "",
.help       = "reset the system",
.user_print = monitor_user_noop,
.mhandler.cmd_new = do_system_reset,
},


{
.name       = "system_powerdown",
.args_type  = "",
.params     = "",
.help       = "send system power down event",
.user_print = monitor_user_noop,
.mhandler.cmd_new = do_system_powerdown,
},


{
.name       = "device_add",
.args_type  = "device:O",
.params     = "driver[,prop=value][,...]",
.help       = "add device, like -device on the command line",
.user_print = monitor_user_noop,
.mhandler.cmd_new = do_device_add,
},


{
.name       = "device_del",
.args_type  = "id:s",
.params     = "device",
.help       = "remove device",
.user_print = monitor_user_noop,
.mhandler.cmd_new = do_device_del,
},


{
.name       = "cpu",
.args_type  = "index:i",
.params     = "index",
.help       = "set the default CPU",
.user_print = monitor_user_noop,
.mhandler.cmd_new = do_cpu_set,
},


{
.name       = "memsave",
.args_type  = "val:l,size:i,filename:s",
.params     = "addr size file",
.help       = "save to disk virtual memory dump starting at 'addr' of size 'size'",
.user_print = monitor_user_noop,
.mhandler.cmd_new = do_memory_save,
},


{
.name       = "pmemsave",
.args_type  = "val:l,size:i,filename:s",
.params     = "addr size file",
.help       = "save to disk physical memory dump starting at 'addr' of size 'size'",
.user_print = monitor_user_noop,
.mhandler.cmd_new = do_physical_memory_save,
},


{
.name       = "migrate",
.args_type  = "detach:-d,blk:-b,inc:-i,uri:s",
.params     = "[-d] [-b] [-i] uri",
.help       = "migrate to URI (using -d to not wait for completion)"
"\n\t\t\t -b for migration without shared storage with"
" full copy of disk\n\t\t\t -i for migration without "
"shared storage with incremental copy of disk "
"(base image shared between src and destination)",
.user_print = monitor_user_noop,	
.mhandler.cmd_new = do_migrate,
},


{
.name       = "migrate_cancel",
.args_type  = "",
.params     = "",
.help       = "cancel the current VM migration",
.user_print = monitor_user_noop,
.mhandler.cmd_new = do_migrate_cancel,
},


{
.name       = "migrate_set_speed",
.args_type  = "value:o",
.params     = "value",
.help       = "set maximum speed (in bytes) for migrations",
.user_print = monitor_user_noop,
.mhandler.cmd_new = do_migrate_set_speed,
},


{
.name       = "migrate_set_downtime",
.args_type  = "value:T",
.params     = "value",
.help       = "set maximum tolerated downtime (in seconds) for migrations",
.user_print = monitor_user_noop,
.mhandler.cmd_new = do_migrate_set_downtime,
},


{
.name       = "client_migrate_info",
.args_type  = "protocol:s,hostname:s,port:i?,tls-port:i?,cert-subject:s?",
.params     = "protocol hostname port tls-port cert-subject",
.help       = "send migration info to spice/vnc client",
.user_print = monitor_user_noop,
.mhandler.cmd_new = client_migrate_info,
},


{
.name       = "netdev_add",
.args_type  = "netdev:O",
.params     = "[user|tap|socket],id=str[,prop=value][,...]",
.help       = "add host network device",
.user_print = monitor_user_noop,
.mhandler.cmd_new = do_netdev_add,
},


{
.name       = "netdev_del",
.args_type  = "id:s",
.params     = "id",
.help       = "remove host network device",
.user_print = monitor_user_noop,
.mhandler.cmd_new = do_netdev_del,
},


{
.name       = "block_resize",
.args_type  = "device:B,size:o",
.params     = "device size",
.help       = "resize a block image",
.user_print = monitor_user_noop,
.mhandler.cmd_new = do_block_resize,
},


{
.name       = "balloon",
.args_type  = "value:M",
.params     = "target",
.help       = "request VM to change its memory allocation (in MB)",
.user_print = monitor_user_noop,
.mhandler.cmd_async = do_balloon,
.flags      = MONITOR_CMD_ASYNC,
},


{
.name       = "set_link",
.args_type  = "name:s,up:b",
.params     = "name on|off",
.help       = "change the link status of a network adapter",
.user_print = monitor_user_noop,
.mhandler.cmd_new = do_set_link,
},


{
.name       = "getfd",
.args_type  = "fdname:s",
.params     = "getfd name",
.help       = "receive a file descriptor via SCM rights and assign it a name",
.user_print = monitor_user_noop,
.mhandler.cmd_new = do_getfd,
},


{
.name       = "closefd",
.args_type  = "fdname:s",
.params     = "closefd name",
.help       = "close a file descriptor previously passed via SCM rights",
.user_print = monitor_user_noop,
.mhandler.cmd_new = do_closefd,
},


{
.name       = "block_passwd",
.args_type  = "device:B,password:s",
.params     = "block_passwd device password",
.help       = "set the password of encrypted block devices",
.user_print = monitor_user_noop,
.mhandler.cmd_new = do_block_set_passwd,
},


{
.name       = "set_password",
.args_type  = "protocol:s,password:s,connected:s?",
.params     = "protocol password action-if-connected",
.help       = "set spice/vnc password",
.user_print = monitor_user_noop,
.mhandler.cmd_new = set_password,
},


{
.name       = "expire_password",
.args_type  = "protocol:s,time:s",
.params     = "protocol time",
.help       = "set spice/vnc password expire-time",
.user_print = monitor_user_noop,
.mhandler.cmd_new = expire_password,
},


{
.name       = "qmp_capabilities",
.args_type  = "",
.params     = "",
.help       = "enable QMP capabilities",
.user_print = monitor_user_noop,
.mhandler.cmd_new = do_qmp_capabilities,
},


{
.name       = "human-monitor-command",
.args_type  = "command-line:s,cpu-index:i?",
.params     = "",
.help       = "",
.user_print = monitor_user_noop,
.mhandler.cmd_new = do_hmp_passthrough,
},





















{
.name       = "help|?",
.args_type  = "name:s?",
.params     = "[cmd]",
.help       = "show the help",
.mhandler.cmd = do_help_cmd,
},


{
.name       = "commit",
.args_type  = "device:B",
.params     = "device|all",
.help       = "commit changes to the disk images (if -snapshot is used) or backing files",
.mhandler.cmd = do_commit,
},


{
.name       = "q|quit",
.args_type  = "",
.params     = "",
.help       = "quit the emulator",
.user_print = monitor_user_noop,
.mhandler.cmd_new = do_quit,
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
.name       = "eject",
.args_type  = "force:-f,device:B",
.params     = "[-f] device",
.help       = "eject a removable medium (use -f to force it)",
.user_print = monitor_user_noop,
.mhandler.cmd_new = do_eject,
},


{
.name       = "drive_del",
.args_type  = "id:s",
.params     = "device",
.help       = "remove host block device",
.user_print = monitor_user_noop,
.mhandler.cmd_new = do_drive_del,
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
.name       = "logfile",
.args_type  = "filename:F",
.params     = "filename",
.help       = "output logs to 'filename'",
.mhandler.cmd = do_logfile,
},


#ifdef CONFIG_SIMPLE_TRACE
{
.name       = "trace-event",
.args_type  = "name:s,option:b",
.params     = "name on|off",
.help       = "changes status of a specific trace event",
.mhandler.cmd = do_change_trace_event_state,
},


{
.name       = "trace-file",
.args_type  = "op:s?,arg:F?",
.params     = "on|off|flush|set [arg]",
.help       = "open, close, or flush trace file, or set a new file name",
.mhandler.cmd = do_trace_file,
},

#endif

{
.name       = "log",
.args_type  = "items:s",
.params     = "item1[,...]",
.help       = "activate logging of the specified items to '/tmp/qemu.log'",
.mhandler.cmd = do_log,
},


{
.name       = "savevm",
.args_type  = "name:s?",
.params     = "[tag|id]",
.help       = "save a VM snapshot. If no tag or id are provided, a new snapshot is created",
.mhandler.cmd = do_savevm,
},


{
.name       = "loadvm",
.args_type  = "name:s",
.params     = "tag|id",
.help       = "restore a VM snapshot from its tag or id",
.mhandler.cmd = do_loadvm,
},


{
.name       = "delvm",
.args_type  = "name:s",
.params     = "tag|id",
.help       = "delete a VM snapshot from its tag or id",
.mhandler.cmd = do_delvm,
},


{
.name       = "singlestep",
.args_type  = "option:s?",
.params     = "[on|off]",
.help       = "run emulation in singlestep mode or switch to normal mode",
.mhandler.cmd = do_singlestep,
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
.name       = "c|cont",
.args_type  = "",
.params     = "",
.help       = "resume emulation",
.user_print = monitor_user_noop,
.mhandler.cmd_new = do_cont,
},


{
.name       = "gdbserver",
.args_type  = "device:s?",
.params     = "[device]",
.help       = "start gdbserver on given device (default 'tcp::1234'), stop with 'none'",
.mhandler.cmd = do_gdbserver,
},


{
.name       = "x",
.args_type  = "fmt:/,addr:l",
.params     = "/fmt addr",
.help       = "virtual memory dump starting at 'addr'",
.mhandler.cmd = do_memory_dump,
},


{
.name       = "xp",
.args_type  = "fmt:/,addr:l",
.params     = "/fmt addr",
.help       = "physical memory dump starting at 'addr'",
.mhandler.cmd = do_physical_memory_dump,
},


{
.name       = "p|print",
.args_type  = "fmt:/,val:l",
.params     = "/fmt expr",
.help       = "print expression value (use $reg for CPU register access)",
.mhandler.cmd = do_print,
},


{
.name       = "i",
.args_type  = "fmt:/,addr:i,index:i.",
.params     = "/fmt addr",
.help       = "I/O port read",
.mhandler.cmd = do_ioport_read,
},


{
.name       = "o",
.args_type  = "fmt:/,addr:i,val:i",
.params     = "/fmt addr value",
.help       = "I/O port write",
.mhandler.cmd = do_ioport_write,
},


{
.name       = "sendkey",
.args_type  = "string:s,hold_time:i?",
.params     = "keys [hold_ms]",
.help       = "send keys to the VM (e.g. 'sendkey ctrl-alt-f1', default hold time=100 ms)",
.mhandler.cmd = do_sendkey,
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
.name       = "sum",
.args_type  = "start:i,size:i",
.params     = "addr size",
.help       = "compute the checksum of a memory region",
.mhandler.cmd = do_sum,
},


{
.name       = "usb_add",
.args_type  = "devname:s",
.params     = "device",
.help       = "add USB device (e.g. 'host:bus.addr' or 'host:vendor_id:product_id')",
.mhandler.cmd = do_usb_add,
},


{
.name       = "usb_del",
.args_type  = "devname:s",
.params     = "device",
.help       = "remove USB device 'bus.addr'",
.mhandler.cmd = do_usb_del,
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
.name       = "mouse_move",
.args_type  = "dx_str:s,dy_str:s,dz_str:s?",
.params     = "dx dy [dz]",
.help       = "send mouse move events",
.mhandler.cmd = do_mouse_move,
},


{
.name       = "mouse_button",
.args_type  = "button_state:i",
.params     = "state",
.help       = "change mouse button state (1=L, 2=M, 4=R)",
.mhandler.cmd = do_mouse_button,
},


{
.name       = "mouse_set",
.args_type  = "index:i",
.params     = "index",
.help       = "set which mouse device receives events",
.mhandler.cmd = do_mouse_set,
},


#ifdef HAS_AUDIO
{
.name       = "wavcapture",
.args_type  = "path:F,freq:i?,bits:i?,nchannels:i?",
.params     = "path [frequency [bits [channels]]]",
.help       = "capture audio to a wave file (default frequency=44100 bits=16 channels=2)",
.mhandler.cmd = do_wav_capture,
},
#endif

#ifdef HAS_AUDIO
{
.name       = "stopcapture",
.args_type  = "n:i",
.params     = "capture index",
.help       = "stop capture",
.mhandler.cmd = do_stop_capture,
},
#endif

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
.name       = "boot_set",
.args_type  = "bootdevice:s",
.params     = "bootdevice",
.help       = "define new values for the boot device list",
.mhandler.cmd = do_boot_set,
},


#if defined(TARGET_I386)
{
.name       = "nmi",
.args_type  = "cpu_index:i",
.params     = "cpu",
.help       = "inject an NMI on the given CPU",
.mhandler.cmd = do_inject_nmi,
},
#endif

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
.help       = "set maximum speed (in bytes) for migrations. "
"Defaults to MB if no size suffix is specified, ie. B/K/M/G/T",
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
.name       = "snapshot_blkdev",
.args_type  = "device:B,snapshot_file:s?,format:s?",
.params     = "device [new-image-file] [format]",
.help       = "initiates a live snapshot\n\t\t\t"
"of device. If a new image file is specified, the\n\t\t\t"
"new image file will become the new root image.\n\t\t\t"
"If format is specified, the snapshot file will\n\t\t\t"
"be created in that format. Otherwise the\n\t\t\t"
"snapshot will be internal! (currently unsupported)",
.mhandler.cmd_new = do_snapshot_blkdev,
},


#if defined(TARGET_I386)
{
.name       = "drive_add",
.args_type  = "pci_addr:s,opts:s",
.params     = "[[<domain>:]<bus>:]<slot>\n"
"[file=file][,if=type][,bus=n]\n"
"[,unit=m][,media=d][index=i]\n"
"[,cyls=c,heads=h,secs=s[,trans=t]]\n"
"[snapshot=on|off][,cache=on|off]",
.help       = "add drive to PCI storage controller",
.mhandler.cmd = drive_hot_add,
},
#endif


#if defined(TARGET_I386)
{
.name       = "pci_add",
.args_type  = "pci_addr:s,type:s,opts:s?",
.params     = "auto|[[<domain>:]<bus>:]<slot> nic|storage [[vlan=n][,macaddr=addr][,model=type]] [file=file][,if=type][,bus=nr]...",
.help       = "hot-add PCI device",
.mhandler.cmd = pci_device_hot_add,
},
#endif


#if defined(TARGET_I386)
{
.name       = "pci_del",
.args_type  = "pci_addr:s",
.params     = "[[<domain>:]<bus>:]<slot>",
.help       = "hot remove PCI device",
.mhandler.cmd = do_pci_device_hot_remove,
},
#endif


{
.name       = "pcie_aer_inject_error",
.args_type  = "advisory_non_fatal:-a,correctable:-c,"
"id:s,error_status:s,"
"header0:i?,header1:i?,header2:i?,header3:i?,"
"prefix0:i?,prefix1:i?,prefix2:i?,prefix3:i?",
.params     = "[-a] [-c] id "
"<error_status> [<tlp header> [<tlp header prefix>]]",
.help       = "inject pcie aer error\n\t\t\t"
" -a for advisory non fatal error\n\t\t\t"
" -c for correctable error\n\t\t\t"
"<id> = qdev device id\n\t\t\t"
"<error_status> = error string or 32bit\n\t\t\t"
"<tlb header> = 32bit x 4\n\t\t\t"
"<tlb header prefix> = 32bit x 4",
.user_print  = pcie_aer_inject_error_print,
.mhandler.cmd_new = do_pcie_aer_inejct_error,
},


{
.name       = "host_net_add",
.args_type  = "device:s,opts:s?",
.params     = "tap|user|socket|vde|dump [options]",
.help       = "add host VLAN client",
.mhandler.cmd = net_host_device_add,
},


{
.name       = "host_net_remove",
.args_type  = "vlan_id:i,device:s",
.params     = "vlan_id name",
.help       = "remove host VLAN client",
.mhandler.cmd = net_host_device_remove,
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


#ifdef CONFIG_SLIRP
{
.name       = "hostfwd_add",
.args_type  = "arg1:s,arg2:s?,arg3:s?",
.params     = "[vlan_id name] [tcp|udp]:[hostaddr]:hostport-[guestaddr]:guestport",
.help       = "redirect TCP or UDP connections from host to guest (requires -net user)",
.mhandler.cmd = net_slirp_hostfwd_add,
},
#endif

#ifdef CONFIG_SLIRP
{
.name       = "hostfwd_remove",
.args_type  = "arg1:s,arg2:s?,arg3:s?",
.params     = "[vlan_id name] [tcp|udp]:[hostaddr]:hostport",
.help       = "remove host-to-guest TCP or UDP redirection",
.mhandler.cmd = net_slirp_hostfwd_remove,
},

#endif

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
.name       = "watchdog_action",
.args_type  = "action:s",
.params     = "[reset|shutdown|poweroff|pause|debug|none]",
.help       = "change watchdog action",
.mhandler.cmd = do_watchdog_action,
},


{
.name       = "acl_show",
.args_type  = "aclname:s",
.params     = "aclname",
.help       = "list rules in the access control list",
.mhandler.cmd = do_acl_show,
},


{
.name       = "acl_policy",
.args_type  = "aclname:s,policy:s",
.params     = "aclname allow|deny",
.help       = "set default access control list policy",
.mhandler.cmd = do_acl_policy,
},


{
.name       = "acl_add",
.args_type  = "aclname:s,match:s,policy:s,index:i?",
.params     = "aclname match allow|deny [index]",
.help       = "add a match rule to the access control list",
.mhandler.cmd = do_acl_add,
},


{
.name       = "acl_remove",
.args_type  = "aclname:s,match:s",
.params     = "aclname match",
.help       = "remove a match rule from the access control list",
.mhandler.cmd = do_acl_remove,
},


{
.name       = "acl_reset",
.args_type  = "aclname:s",
.params     = "aclname",
.help       = "reset the access control list",
.mhandler.cmd = do_acl_reset,
},


#if defined(TARGET_I386)

{
.name       = "mce",
.args_type  = "broadcast:-b,cpu_index:i,bank:i,status:l,mcg_status:l,addr:l,misc:l",
.params     = "[-b] cpu bank status mcgstatus addr misc",
.help       = "inject a MCE on the given CPU [and broadcast to other CPUs with -b option]",
.mhandler.cmd = do_inject_mce,
},

#endif

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
.name       = "info",
.args_type  = "item:s?",
.params     = "[subcommand]",
.help       = "show various information about the system state",
.mhandler.cmd = do_info,
},


#ifdef CONFIG_SIMPLE_TRACE
#endif


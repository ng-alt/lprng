/***************************************************************************
 * LPRng - An Extended Print Spooler System
 *
 * Copyright 1988-1997, Patrick Powell, San Diego, CA
 *     papowell@sdsu.edu
 * See LICENSE for conditions of use.
 *
 ***************************************************************************
 * MODULE: default.c
 * PURPOSE: default printcap and configuration information
 **************************************************************************/

static char *const _id =
"$Id: default.c,v 3.6 1997/02/17 02:31:27 papowell Exp papowell $";

char *Default_configuration[] = {
"ae=jobend $H $n $P $k $b $t",

#ifdef GETENV
"allow_getenv",
#endif

"ar",

#if !defined(ARCHITECTURE)
"architecture=unknown" ,
#else
"architecture=" ARCHITECTURE ,
#endif

"as=jobstart $H $n $P $k $b $t",
"bk@",
"bk_filter_options=$P $w $l $x $y $F $c $L $i $J $C $0n $0h $-a",
"bk_of_filter_options=$w $l $x $y",
"bl=$-'C:$-'n Job: $-'J Date: $-'t",
"check_for_nonprintable",
"client_auth_command",
"client_config_file=/etc/lpd.conf:/etc/lpd_client.conf:/usr/etc/lpd.conf:/usr/etc/lpd_client.conf:/usr/spool/lpd/lpd.conf:/usr/spool/lpd/lpd_client.conf",
"co#20",
"connect_grace#0",
"connect_interval#10",
"connect_retry#0",
"connect_timeout#10",
"default_banner_printer",
"default_format=f",
"default_logger_port=2001",
"default_logger_protocol=UDP",
"default_permission=ACCEPT",
"default_printer",
"default_priority=A",
"default_remote_host=%H",
"default_tmp_dir=/tmp",
"domain_name",
"filter_ld_path=/lib:/usr/lib:/usr/5lib:/usr/ucblib",
"filter_options=$C $F $H $J $L $P $Q $R $Z $a $c $d $e $f $h $i $j $k $l $n $p $r $s $w $x $y $-a",
"filter_path=/bin:/usr/bin:/usr/ucb:/usr/sbin:/usr/etc:/etc",
"ff=\\f",
"forward_auth",
"fx=flp",
"group=daemon",
"la",
"lf=log",
"lo=lock",
"localhost=localhost",
"lockfile=/var/spool/lpd/lpd.lock.%h",
"logfile=/var/spool/lpd/lpd.log.%h",
"logger_destination",
"longnumber@",
"lpd_port=printer",
"lpd_printcap_path=/etc/lpd_printcap:/usr/etc/lpd_printcap:",
"kerberos_keytab=/etc/lpd.keytab",
"kerberos_service=lpr",
"mail_operator_on_error",
"max_status_size#10",
"mc#1",
"min_status_size#0",
"minfree=0",
"of_filter_options",
"originate_port=721 731",
"pass_env=PGPPASS,PGPPATH",
"pl#66",
"poll_time#600",
"pr=/bin/pr",
"printcap_path=/etc/printcap:/usr/etc/printcap:/var/spool/lpd/printcap.%h",
"printer_perms_path=/etc/lpd.perms:/usr/etc/lpd.perms:/var/spool/lpd/lpd.perms.%h",
"pw#80",
"save_on_error@",
"save_when_done@",
"send_data_first@",
"send_failure_action",
"send_timeout#6000",
"send_try#3",
"sendmail=/usr/lib/sendmail -oi -t",
"server_auth_command",
"server_config_file=/etc/lpd.conf:/usr/etc/lpd.conf:/usr/spool/lpd/lpd.conf.%h",
"server_tmp_dir=/tmp",
"server_user=daemon",
"spool_dir_perms#042700",
"spool_file_perms#000600",
"spread_jobs#0",
"st=status",
"syslog_device=/dev/console",
"use_auth",
"use_date@",
"use_identifier@",
"use_info_cache",
"use_queuename@",
"use_shorthost@",
"user=daemon",
"user_auth_command",
0
}
;

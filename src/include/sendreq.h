/***************************************************************************
 * LPRng - An Extended Print Spooler System
 *
 * Copyright 1988-2001, Patrick Powell, San Diego, CA
 *     papowell@lprng.com
 * See LICENSE for conditions of use.
 * $Id: sendreq.h,v 1.2 2002/01/23 01:01:28 papowell Exp $
 ***************************************************************************/



#ifndef _SENDREQ_H_
#define _SENDREQ_H_ 1

/* PROTOTYPES */
int Send_request(
	int class,					/* 'Q'= LPQ, 'C'= LPC, M = lprm */
	int format,					/* X for option */
	char **options,				/* options to send */
	int connnect_timeout,		/* timeout on connection */
	int transfer_timeout,		/* timeout on transfer */
	int output					/* output on this FD */
	);

#endif
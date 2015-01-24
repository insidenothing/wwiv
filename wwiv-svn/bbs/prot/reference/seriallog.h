/*	$Id: seriallog.h 6 2004-09-18 20:02:00Z rushfan $	*/

#ifndef	SERIALLOG_H
#define	SERIALLOG_H


extern	FILE	*SerialLogFile ;
extern	void	SerialLogFlush() ;
extern	void	SerialLog(const void *data, int len, int w) ;

#endif

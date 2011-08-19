/*******************************************************************
*
*  DESCRIPTION: Atomic Model : Network
*  Modeled as a labeled transition system.
*
*  AUTHOR: Alan
*
*
*******************************************************************/
/*handle duplicate inclusion of this header*/
#ifndef __LINK_H
#define __LINK_H
#define LinkVERBOSE false
/** include files **/
#include "atomic.h"  // class Atomic
#include "..\complexmessages.h" // static functions to manipulate "coded" messages in a consistent way across components
#include "..\complexmessages2.h"
#include "DBGraph.h"
#include "SGraph.h"
#include <queue> //STL for queue template class
/** declarations **/
class LinkFinder: public Atomic
{
public:


	LinkFinder( const string &name = "Linker" ) ;	 // Default constructor

	~LinkFinder();					// Destructor

	virtual string className() const
	{return "Linker";};



	protected:
		Model &initFunction()
		{
			return *this;
		};

		Model &externalFunction( const ExternalMessage & );

		Model &internalFunction( const InternalMessage & );

		Model &outputFunction( const InternalMessage & );

	private:
		const Port &in_q ;
	Port &q_out0 ;
	Port &q_out1 ;
	Port &q_out2 ;
	Port &q_out3 ;
	Port &q_out4 ;
	Port &q_out5 ;
	Port &q_out6 ;
	Port &q_out7 ;
	Port &q_out8 ;
	Port &q_out9 ;
	Port &q_out10 ;
	Port &q_out11 ;
	Port &q_out12 ;
	Port &q_out13 ;
	Port &q_out14 ;
	Port &q_out15 ;
	Port &q_out16 ;
	Port &q_out17 ;
	Port &q_out18 ;
	Port &q_out19 ;
	Port &q_out20 ;
	Port &q_out21 ;
	Port &q_out22 ;
	Port &q_out23 ;
	Port &q_out24 ;
	Port &q_out25 ;
	Port &q_out26 ;
	Port &q_out27 ;
	Port &q_out28 ;
	Port &q_out29 ;
	Port &q_out30 ;
	Port &q_out31 ;
	Port &q_out32 ;
	Port &q_out33 ;
	Port &q_out34 ;
	Port &q_out35 ;
	Port &q_out36 ;
	Port &q_out37 ;
	Port &q_out38 ;
	Port &q_out39 ;
	Port &q_out40 ;
	Port &q_out41 ;
	Port &q_out42 ;
	Port &q_out43 ;
	Port &q_out44 ;
	Port &q_out45 ;
	Port &q_out46 ;
	Port &q_out47 ;
	Port &q_out48 ;
	Port &q_out49 ;
	Port &q_out50 ;
	Port &q_out51 ;
	Port &q_out52 ;
	Port &q_out53 ;
	Port &q_out54 ;
	Port &q_out55 ;
	Port &q_out56 ;
	Port &q_out57 ;
	Port &q_out58 ;
	Port &q_out59 ;
	Port &q_out60 ;
	Port &q_out61 ;
	Port &q_out62 ;
	Port &q_out63 ;
	Port &q_out64 ;
	Port &q_out65 ;
	Port &q_out66 ;
	Port &q_out67 ;
	Port &q_out68 ;
	Port &q_out69 ;
	Port &q_out70 ;
	Port &q_out71 ;
	Port &q_out72 ;
	Port &q_out73 ;
	Port &q_out74 ;
	Port &q_out75 ;
	Port &q_out76 ;
	Port &q_out77 ;
	Port &q_out78 ;
	Port &q_out79 ;
	Port &q_out80 ;
	Port &q_out81 ;
	Port &q_out82 ;
	Port &q_out83 ;
	Port &q_out84 ;
	Port &q_out85 ;
	Port &q_out86 ;
	Port &q_out87 ;
	Port &q_out88 ;
	Port &q_out89 ;
	Port &q_out90 ;
	Port &q_out91 ;
	Port &q_out92 ;
	Port &q_out93 ;
	Port &q_out94 ;
	Port &q_out95 ;
	Port &q_out96 ;
	Port &q_out97 ;
	Port &q_out98 ;
	Port &q_out99 ;
	Port &q_out100 ;
	Port &q_out101 ;
	Port &q_out102 ;
	Port &q_out103 ;
	Port &q_out104 ;
	Port &q_out105 ;
	Port &q_out106 ;
	Port &q_out107 ;
	Port &q_out108 ;
	Port &q_out109 ;
	Port &q_out110 ;
	Port &q_out111 ;
	Port &q_out112 ;
	Port &q_out113 ;
	Port &q_out114 ;
	Port &q_out115 ;
	Port &q_out116 ;
	Port &q_out117 ;
	Port &q_out118 ;
	Port &q_out119 ;
	Port &q_out120 ;
	Port &q_out121 ;
	Port &q_out122 ;
	Port &q_out123 ;
	Port &q_out124 ;
	Port &q_out125 ;
	Port &q_out126 ;
	Port &q_out127 ;
	Port &q_out128 ;
	Port &q_out129 ;
	Port &q_out130 ;
	Port &q_out131 ;
	Port &q_out132 ;
	Port &q_out133 ;
	Port &q_out134 ;
	Port &q_out135 ;
	Port &q_out136 ;
	Port &q_out137 ;
	Port &q_out138 ;
	Port &q_out139 ;
	Port &q_out140 ;
	Port &q_out141 ;
	Port &q_out142 ;
	Port &q_out143 ;
	Port &q_out144 ;
	Port &q_out145 ;
	Port &q_out146 ;
	Port &q_out147 ;
	Port &q_out148 ;
	Port &q_out149 ;
	Port &q_out150 ;
	Port &q_out151 ;
	Port &q_out152 ;
	Port &q_out153 ;
	Port &q_out154 ;
	Port &q_out155 ;
	Port &q_out156 ;
	Port &q_out157 ;
	Port &q_out158 ;
	Port &q_out159 ;
	Port &q_out160 ;
	Port &q_out161 ;
	Port &q_out162 ;
	Port &q_out163 ;
	Port &q_out164 ;
	Port &q_out165 ;
	Port &q_out166 ;
	Port &q_out167 ;
	Port &q_out168 ;
	Port &q_out169 ;
	Port &q_out170 ;
	Port &q_out171 ;
	Port &q_out172 ;
	Port &q_out173 ;
	Port &q_out174 ;
	Port &q_out175 ;
	Port &q_out176 ;
	Port &q_out177 ;
	Port &q_out178 ;
	Port &q_out179 ;
	Port &q_out180 ;
	Port &q_out181 ;
	Port &q_out182 ;
	Port &q_out183 ;
	Port &q_out184 ;
	Port &q_out185 ;
	Port &q_out186 ;
	Port &q_out187 ;
	Port &q_out188 ;
	Port &q_out189 ;
	Port &q_out190 ;
	Port &q_out191 ;
	Port &q_out192 ;
	Port &q_out193 ;
	Port &q_out194 ;
	Port &q_out195 ;
	Port &q_out196 ;
	Port &q_out197 ;
	Port &q_out198 ;
	Port &q_out199 ;
	Port &q_out200 ;
	Port &q_out201 ;
	Port &q_out202 ;
	Port &q_out203 ;
	Port &q_out204 ;
	Port &q_out205 ;
	Port &q_out206 ;
	Port &q_out207 ;
	Port &q_out208 ;
	Port &q_out209 ;
	Port &q_out210 ;
	Port &q_out211 ;
	Port &q_out212 ;
	Port &q_out213 ;
	Port &q_out214 ;
	Port &q_out215 ;
	Port &q_out216 ;
	Port &q_out217 ;
	Port &q_out218 ;
	Port &q_out219 ;
	Port &q_out220 ;
	Port &q_out221 ;
	Port &q_out222 ;
	Port &q_out223 ;
	Port &q_out224 ;
	Port &q_out225 ;
	Port &q_out226 ;
	Port &q_out227 ;
	Port &q_out228 ;
	Port &q_out229 ;
	Port &q_out230 ;
	Port &q_out231 ;
	Port &q_out232 ;
	Port &q_out233 ;
	Port &q_out234 ;
	Port &q_out235 ;
	Port &q_out236 ;
	Port &q_out237 ;
	Port &q_out238 ;
	Port &q_out239 ;
	Port &q_out240 ;
	Port &q_out241 ;
	Port &q_out242 ;
	Port &q_out243 ;
	Port &q_out244 ;
	Port &q_out245 ;
	Port &q_out246 ;
	Port &q_out247 ;
	Port &q_out248 ;
	Port &q_out249 ;
	Port &q_out250 ;
	Port &q_out251 ;
	Port &q_out252 ;
	Port &q_out253 ;
	Port &q_out254 ;
	Port &q_out255 ;
	Port &q_out256 ;
	Port &q_out257 ;
	Port &q_out258 ;
	Port &q_out259 ;
	Port &q_out260 ;
	Port &q_out261 ;
	Port &q_out262 ;
	Port &q_out263 ;
	Port &q_out264 ;
	Port &q_out265 ;
	Port &q_out266 ;
	Port &q_out267 ;
	Port &q_out268 ;
	Port &q_out269 ;
	Port &q_out270 ;
	Port &q_out271 ;
	Port &q_out272 ;
	Port &q_out273 ;
	Port &q_out274 ;
	Port &q_out275 ;
	Port &q_out276 ;
	Port &q_out277 ;
	Port &q_out278 ;
	Port &q_out279 ;
	Port &q_out280 ;
	Port &q_out281 ;
	Port &q_out282 ;
	Port &q_out283 ;
	Port &q_out284 ;
	Port &q_out285 ;
	Port &q_out286 ;
	Port &q_out287 ;
	Port &q_out288 ;
	Port &q_out289 ;
	Port &q_out290 ;
	Port &q_out291 ;
	Port &q_out292 ;
	Port &q_out293 ;
	Port &q_out294 ;
	Port &q_out295 ;
	Port &q_out296 ;
	Port &q_out297 ;
	Port &q_out298 ;
	Port &q_out299 ;
	Port &q_out300 ;
	Port &q_out301 ;
	Port &q_out302 ;
	Port &q_out303 ;
	Port &q_out304 ;
	Port &q_out305 ;
	Port &q_out306 ;
	Port &q_out307 ;
	Port &q_out308 ;
	Port &q_out309 ;
	Port &q_out310 ;
	Port &q_out311 ;
	Port &q_out312 ;
	Port &q_out313 ;
	Port &q_out314 ;
	Port &q_out315 ;
	Port &q_out316 ;
	Port &q_out317 ;
	Port &q_out318 ;
	Port &q_out319 ;
	Port &q_out320 ;
	Port &q_out321 ;
	Port &q_out322 ;
	Port &q_out323 ;
	Port &q_out324 ;
	Port &q_out325 ;
	Port &q_out326 ;
	Port &q_out327 ;
	Port &q_out328 ;
	Port &q_out329 ;
	Port &q_out330 ;
	Port &q_out331 ;
	Port &q_out332 ;
	Port &q_out333 ;
	Port &q_out334 ;
	Port &q_out335 ;
	Port &q_out336 ;
	Port &q_out337 ;
	Port &q_out338 ;
	Port &q_out339 ;
	Port &q_out340 ;
	Port &q_out341 ;
	Port &q_out342 ;
	Port &q_out343 ;
	Port &q_out344 ;
	Port &q_out345 ;
	Port &q_out346 ;
	Port &q_out347 ;
	Port &q_out348 ;
	Port &q_out349 ;
	Port &q_out350 ;
	Port &q_out351 ;
	Port &q_out352 ;
	Port &q_out353 ;
	Port &q_out354 ;
	Port &q_out355 ;
	Port &q_out356 ;
	Port &q_out357 ;
	Port &q_out358 ;
	Port &q_out359 ;
	Port &q_out360 ;
	Port &q_out361 ;
	Port &q_out362 ;
	Port &q_out363 ;
	Port &q_out364 ;
	Port &q_out365 ;
	Port &q_out366 ;
	Port &q_out367 ;
	Port &q_out368 ;
	Port &q_out369 ;
	Port &q_out370 ;
	Port &q_out371 ;
	Port &q_out372 ;
	Port &q_out373 ;
	Port &q_out374 ;
	Port &q_out375 ;
	Port &q_out376 ;
	Port &q_out377 ;
	Port &q_out378 ;
	Port &q_out379 ;
	Port &q_out380 ;
	Port &q_out381 ;
	Port &q_out382 ;
	Port &q_out383 ;
	Port &q_out384 ;
	Port &q_out385 ;
	Port &q_out386 ;
	Port &q_out387 ;
	Port &q_out388 ;
	Port &q_out389 ;
	Port &q_out390 ;
	Port &q_out391 ;
	Port &q_out392 ;
	Port &q_out393 ;
	Port &q_out394 ;
	Port &q_out395 ;
	Port &q_out396 ;
	Port &q_out397 ;
	Port &q_out398 ;
	Port &q_out399 ;
	Port &q_out400 ;
	Port &q_out401 ;
	Port &q_out402 ;
	Port &q_out403 ;
	Port &q_out404 ;
	Port &q_out405 ;
	Port &q_out406 ;
	Port &q_out407 ;
	Port &q_out408 ;
	Port &q_out409 ;
	Port &q_out410 ;
	Port &q_out411 ;
	Port &q_out412 ;
	Port &q_out413 ;
	Port &q_out414 ;
	Port &q_out415 ;
	Port &q_out416 ;
	Port &q_out417 ;
	Port &q_out418 ;
	Port &q_out419 ;
	Port &q_out420 ;
	Port &q_out421 ;
	Port &q_out422 ;
	Port &q_out423 ;
	Port &q_out424 ;
	Port &q_out425 ;
	Port &q_out426 ;
	Port &q_out427 ;
	Port &q_out428 ;
	Port &q_out429 ;
	Port &q_out430 ;
	Port &q_out431 ;
	Port &q_out432 ;
	Port &q_out433 ;
	Port &q_out434 ;
	Port &q_out435 ;
	Port &q_out436 ;
	Port &q_out437 ;
	Port &q_out438 ;
	Port &q_out439 ;
	Port &q_out440 ;
	Port &q_out441 ;
	Port &q_out442 ;
	Port &q_out443 ;
	Port &q_out444 ;
	Port &q_out445 ;
	Port &q_out446 ;
	Port &q_out447 ;
	Port &q_out448 ;
	Port &q_out449 ;
	Port &q_out450 ;
	Port &q_out451 ;
	Port &q_out452 ;
	Port &q_out453 ;
	Port &q_out454 ;
	Port &q_out455 ;
	Port &q_out456 ;
	Port &q_out457 ;
	Port &q_out458 ;
	Port &q_out459 ;
	Port &q_out460 ;
	Port &q_out461 ;
	Port &q_out462 ;
	Port &q_out463 ;
	Port &q_out464 ;
	Port &q_out465 ;
	Port &q_out466 ;
	Port &q_out467 ;
	Port &q_out468 ;
	Port &q_out469 ;
	Port &q_out470 ;
	Port &q_out471 ;
	Port &q_out472 ;
	Port &q_out473 ;
	Port &q_out474 ;
	Port &q_out475 ;
	Port &q_out476 ;
	Port &q_out477 ;
	Port &q_out478 ;
	Port &q_out479 ;
	Port &q_out480 ;
	Port &q_out481 ;
	Port &q_out482 ;
	Port &q_out483 ;
	Port &q_out484 ;
	Port &q_out485 ;
	Port &q_out486 ;
	Port &q_out487 ;
	Port &q_out488 ;
	Port &q_out489 ;
	Port &q_out490 ;
	Port &q_out491 ;
	Port &q_out492 ;
	Port &q_out493 ;
	Port &q_out494 ;
	Port &q_out495 ;
	Port &q_out496 ;
	Port &q_out497 ;
	Port &q_out498 ;
	Port &q_out499 ;
	Port &q_out500 ;
	Port &q_out501 ;
	Port &q_out502 ;
	Port &q_out503 ;
	Port &q_out504 ;
	Port &q_out505 ;
	Port &q_out506 ;
	Port &q_out507 ;
	Port &q_out508 ;
	Port &q_out509 ;
	Port &q_out510 ;
	Port &q_out511 ;
	Port &q_out512 ;
	Port &q_out513 ;
	Port &q_out514 ;
	Port &q_out515 ;
	Port &q_out516 ;
	Port &q_out517 ;
	Port &q_out518 ;
	Port &q_out519 ;
	Port &q_out520 ;
	Port &q_out521 ;
	Port &q_out522 ;
	Port &q_out523 ;
	Port &q_out524 ;
	Port &q_out525 ;
	Port &q_out526 ;
	Port &q_out527 ;
	Port &q_out528 ;
	Port &q_out529 ;
	Port &q_out530 ;
	Port &q_out531 ;
	Port &q_out532 ;
	Port &q_out533 ;
	Port &q_out534 ;
	Port &q_out535 ;
	Port &q_out536 ;
	Port &q_out537 ;
	Port &q_out538 ;
	Port &q_out539 ;
	Port &q_out540 ;
	Port &q_out541 ;
	Port &q_out542 ;
	Port &q_out543 ;
	Port &q_out544 ;
	Port &q_out545 ;
	Port &q_out546 ;
	Port &q_out547 ;
	Port &q_out548 ;
	Port &q_out549 ;
	Port &q_out550 ;
	Port &q_out551 ;
	Port &q_out552 ;
	Port &q_out553 ;
	Port &q_out554 ;
	Port &q_out555 ;
	Port &q_out556 ;
	Port &q_out557 ;
	Port &q_out558 ;
	Port &q_out559 ;
	Port &q_out560 ;
	Port &q_out561 ;
	Port &q_out562 ;
	Port &q_out563 ;
	Port &q_out564 ;
	Port &q_out565 ;
	Port &q_out566 ;
	Port &q_out567 ;
	Port &q_out568 ;
	Port &q_out569 ;
	Port &q_out570 ;
	Port &q_out571 ;
	Port &q_out572 ;
	Port &q_out573 ;
	Port &q_out574 ;
	Port &q_out575 ;
	Port &q_out576 ;
	Port &q_out577 ;
	Port &q_out578 ;
	Port &q_out579 ;
	Port &q_out580 ;
	Port &q_out581 ;
	Port &q_out582 ;
	Port &q_out583 ;
	Port &q_out584 ;
	Port &q_out585 ;
	Port &q_out586 ;
	Port &q_out587 ;
	Port &q_out588 ;
	Port &q_out589 ;
	Port &q_out590 ;
	Port &q_out591 ;
	Port &q_out592 ;
	Port &q_out593 ;
	Port &q_out594 ;
	Port &q_out595 ;
	Port &q_out596 ;
	Port &q_out597 ;
	Port &q_out598 ;
	Port &q_out599 ;
	Port &q_out600 ;
	Port &q_out601 ;
	Port &q_out602 ;
	Port &q_out603 ;
	Port &q_out604 ;
	Port &q_out605 ;
	Port &q_out606 ;
	Port &q_out607 ;
	Port &q_out608 ;
	Port &q_out609 ;
	Port &q_out610 ;
	Port &q_out611 ;
	Port &q_out612 ;
	Port &q_out613 ;
	Port &q_out614 ;
	Port &q_out615 ;
	Port &q_out616 ;
	Port &q_out617 ;
	Port &q_out618 ;
	Port &q_out619 ;
	Port &q_out620 ;
	Port &q_out621 ;
	Port &q_out622 ;
	Port &q_out623 ;
	Port &q_out624 ;
	Port &q_out625 ;
	Port &q_out626 ;
	Port &q_out627 ;
	Port &q_out628 ;
	Port &q_out629 ;
	Port &q_out630 ;
	Port &q_out631 ;
	Port &q_out632 ;
	Port &q_out633 ;
	Port &q_out634 ;
	Port &q_out635 ;
	Port &q_out636 ;
	Port &q_out637 ;
	Port &q_out638 ;
	Port &q_out639 ;
	Port &q_out640 ;
	Port &q_out641 ;
	Port &q_out642 ;
	Port &q_out643 ;
	Port &q_out644 ;
	Port &q_out645 ;
	Port &q_out646 ;
	Port &q_out647 ;
	Port &q_out648 ;
	Port &q_out649 ;
	Port &q_out650 ;
	Port &q_out651 ;
	Port &q_out652 ;
	Port &q_out653 ;
	Port &q_out654 ;
	Port &q_out655 ;
	Port &q_out656 ;
	Port &q_out657 ;
	Port &q_out658 ;
	Port &q_out659 ;
	Port &q_out660 ;
	Port &q_out661 ;
	Port &q_out662 ;
	Port &q_out663 ;
	Port &q_out664 ;
	Port &q_out665 ;
	Port &q_out666 ;
	Port &q_out667 ;
	Port &q_out668 ;
	Port &q_out669 ;
	Port &q_out670 ;
	Port &q_out671 ;
	Port &q_out672 ;
	Port &q_out673 ;
	Port &q_out674 ;
	Port &q_out675 ;
	Port &q_out676 ;
	Port &q_out677 ;
	Port &q_out678 ;
	Port &q_out679 ;
	Port &q_out680 ;
	Port &q_out681 ;
	Port &q_out682 ;
	Port &q_out683 ;
	Port &q_out684 ;
	Port &q_out685 ;
	Port &q_out686 ;
	Port &q_out687 ;
	Port &q_out688 ;
	Port &q_out689 ;
	Port &q_out690 ;
	Port &q_out691 ;
	Port &q_out692 ;
	Port &q_out693 ;
	Port &q_out694 ;
	Port &q_out695 ;
	Port &q_out696 ;
	Port &q_out697 ;
	Port &q_out698 ;
	Port &q_out699 ;
	Port &q_out700 ;
	Port &q_out701 ;
	Port &q_out702 ;
	Port &q_out703 ;
	Port &q_out704 ;
	Port &q_out705 ;
	Port &q_out706 ;
	Port &q_out707 ;
	Port &q_out708 ;
	Port &q_out709 ;
	Port &q_out710 ;
	Port &q_out711 ;
	Port &q_out712 ;
	Port &q_out713 ;
	Port &q_out714 ;
	Port &q_out715 ;
	Port &q_out716 ;
	Port &q_out717 ;
	Port &q_out718 ;
	Port &q_out719 ;
	Port &q_out720 ;
	Port &q_out721 ;
	Port &q_out722 ;
	Port &q_out723 ;
	Port &q_out724 ;
	Port &q_out725 ;
	Port &q_out726 ;
	Port &q_out727 ;
	Port &q_out728 ;
	Port &q_out729 ;
	Port &q_out730 ;
	Port &q_out731 ;
	Port &q_out732 ;
	Port &q_out733 ;
	Port &q_out734 ;
	Port &q_out735 ;
	Port &q_out736 ;
	Port &q_out737 ;
	Port &q_out738 ;
	Port &q_out739 ;
	Port &q_out740 ;
	Port &q_out741 ;
	Port &q_out742 ;
	Port &q_out743 ;
	Port &q_out744 ;
	Port &q_out745 ;
	Port &q_out746 ;
	Port &q_out747 ;
	Port &q_out748 ;
	Port &q_out749 ;
	Port &q_out750 ;
	Port &q_out751 ;
	Port &q_out752 ;
	Port &q_out753 ;
	Port &q_out754 ;
	Port &q_out755 ;
	Port &q_out756 ;
	Port &q_out757 ;
	Port &q_out758 ;
	Port &q_out759 ;
	Port &q_out760 ;
	Port &q_out761 ;
	Port &q_out762 ;
	Port &q_out763 ;
	Port &q_out764 ;
	Port &q_out765 ;
	Port &q_out766 ;
	Port &q_out767 ;
	Port &q_out768 ;
	Port &q_out769 ;
	Port &q_out770 ;
	Port &q_out771 ;
	Port &q_out772 ;
	Port &q_out773 ;
	Port &q_out774 ;
	Port &q_out775 ;
	Port &q_out776 ;
	Port &q_out777 ;
	Port &q_out778 ;
	Port &q_out779 ;
	Port &q_out780 ;
	Port &q_out781 ;
	Port &q_out782 ;
	Port &q_out783 ;
	Port &q_out784 ;
	Port &q_out785 ;
	Port &q_out786 ;
	Port &q_out787 ;
	Port &q_out788 ;
	Port &q_out789 ;
	Port &q_out790 ;
	Port &q_out791 ;
	Port &q_out792 ;
	Port &q_out793 ;
	Port &q_out794 ;
	Port &q_out795 ;
	Port &q_out796 ;
	Port &q_out797 ;
	Port &q_out798 ;
	Port &q_out799 ;
	Port &q_out800 ;
	Port &q_out801 ;
	Port &q_out802 ;
	Port &q_out803 ;
	Port &q_out804 ;
	Port &q_out805 ;
	Port &q_out806 ;
	Port &q_out807 ;
	Port &q_out808 ;
	Port &q_out809 ;
	Port &q_out810 ;
	Port &q_out811 ;
	Port &q_out812 ;
	Port &q_out813 ;
	Port &q_out814 ;
	Port &q_out815 ;
	Port &q_out816 ;
	Port &q_out817 ;
	Port &q_out818 ;
	Port &q_out819 ;
	Port &q_out820 ;
	Port &q_out821 ;
	Port &q_out822 ;
	Port &q_out823 ;
	Port &q_out824 ;
	Port &q_out825 ;
	Port &q_out826 ;
	Port &q_out827 ;
	Port &q_out828 ;
	Port &q_out829 ;
	Port &q_out830 ;
	Port &q_out831 ;
	Port &q_out832 ;
	Port &q_out833 ;
	Port &q_out834 ;
	Port &q_out835 ;
	Port &q_out836 ;
	Port &q_out837 ;
	Port &q_out838 ;
	Port &q_out839 ;
	Port &q_out840 ;
	Port &q_out841 ;
	Port &q_out842 ;
	Port &q_out843 ;
	Port &q_out844 ;
	Port &q_out845 ;
	Port &q_out846 ;
	Port &q_out847 ;
	Port &q_out848 ;
	Port &q_out849 ;
	Port &q_out850 ;
	Port &q_out851 ;
	Port &q_out852 ;
	Port &q_out853 ;
	Port &q_out854 ;
	Port &q_out855 ;
	Port &q_out856 ;
	Port &q_out857 ;
	Port &q_out858 ;
	Port &q_out859 ;
	Port &q_out860 ;
	Port &q_out861 ;
	Port &q_out862 ;
	Port &q_out863 ;
	Port &q_out864 ;
	Port &q_out865 ;
	Port &q_out866 ;
	Port &q_out867 ;
	Port &q_out868 ;
	Port &q_out869 ;
	Port &q_out870 ;
	Port &q_out871 ;
	Port &q_out872 ;
	Port &q_out873 ;
	Port &q_out874 ;
	Port &q_out875 ;
	Port &q_out876 ;
	Port &q_out877 ;
	Port &q_out878 ;
	Port &q_out879 ;
	Port &q_out880 ;
	Port &q_out881 ;
	Port &q_out882 ;
	Port &q_out883 ;
	Port &q_out884 ;
	Port &q_out885 ;
	Port &q_out886 ;
	Port &q_out887 ;
	Port &q_out888 ;
	Port &q_out889 ;
	Port &q_out890 ;
	Port &q_out891 ;
	Port &q_out892 ;
	Port &q_out893 ;
	Port &q_out894 ;
	Port &q_out895 ;
	Port &q_out896 ;
	Port &q_out897 ;
	Port &q_out898 ;
	Port &q_out899 ;
	Port &q_out900 ;
	Port &q_out901 ;
	Port &q_out902 ;
	Port &q_out903 ;
	Port &q_out904 ;
	Port &q_out905 ;
	Port &q_out906 ;
	Port &q_out907 ;
	Port &q_out908 ;
	Port &q_out909 ;
	Port &q_out910 ;
	Port &q_out911 ;
	Port &q_out912 ;
	Port &q_out913 ;
	Port &q_out914 ;
	Port &q_out915 ;
	Port &q_out916 ;
	Port &q_out917 ;
	Port &q_out918 ;
	Port &q_out919 ;
	Port &q_out920 ;
	Port &q_out921 ;
	Port &q_out922 ;
	Port &q_out923 ;
	Port &q_out924 ;
	Port &q_out925 ;
	Port &q_out926 ;
	Port &q_out927 ;
	Port &q_out928 ;
	Port &q_out929 ;
	Port &q_out930 ;
	Port &q_out931 ;
	Port &q_out932 ;
	Port &q_out933 ;
	Port &q_out934 ;
	Port &q_out935 ;
	Port &q_out936 ;
	Port &q_out937 ;
	Port &q_out938 ;
	Port &q_out939 ;
	Port &q_out940 ;
	Port &q_out941 ;
	Port &q_out942 ;
	Port &q_out943 ;
	Port &q_out944 ;
	Port &q_out945 ;
	Port &q_out946 ;
	Port &q_out947 ;
	Port &q_out948 ;
	Port &q_out949 ;
	Port &q_out950 ;
	Port &q_out951 ;
	Port &q_out952 ;
	Port &q_out953 ;
	Port &q_out954 ;
	Port &q_out955 ;
	Port &q_out956 ;
	Port &q_out957 ;
	Port &q_out958 ;
	Port &q_out959 ;
	Port &q_out960 ;
	Port &q_out961 ;
	Port &q_out962 ;
	Port &q_out963 ;
	Port &q_out964 ;
	Port &q_out965 ;
	Port &q_out966 ;
	Port &q_out967 ;
	Port &q_out968 ;
	Port &q_out969 ;
	Port &q_out970 ;
	Port &q_out971 ;
	Port &q_out972 ;
	Port &q_out973 ;
	Port &q_out974 ;
	Port &q_out975 ;
	Port &q_out976 ;
	Port &q_out977 ;
	Port &q_out978 ;
	Port &q_out979 ;
	Port &q_out980 ;
	Port &q_out981 ;
	Port &q_out982 ;
	Port &q_out983 ;
	Port &q_out984 ;
	Port &q_out985 ;
	Port &q_out986 ;
	Port &q_out987 ;
	Port &q_out988 ;
	Port &q_out989 ;
	Port &q_out990 ;
	Port &q_out991 ;
	Port &q_out992 ;
	Port &q_out993 ;
	Port &q_out994 ;
	Port &q_out995 ;
	Port &q_out996 ;
	Port &q_out997 ;
	Port &q_out998 ;
	Port &q_out999 ;



	queue<long long> LinkQ;
	SGraph* serverdoc;
};	// class LinkFinder


#endif    //__LINK_H

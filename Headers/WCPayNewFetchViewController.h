//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "ILinkEventExt-Protocol.h"
#import "MMTipsViewControllerDelegate-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WCPayBalanceSelectCardViewDelegate-Protocol.h"
#import "WCPayDecimalKeyboardViewDelegate-Protocol.h"
#import "WCPayNoticeBannerDelegate-Protocol.h"

@class MMUIButton, MMUILabel, MMUIView, NSDictionary, NSString, RichTextView, UIButton, UIImageView, UITextField, WCPayBalanceTipsLogic, WCPayBindCardInfo, WCPayDecimalKeyboardView, WCPayFetchBalanceReport, WCPayNoticeBanner, WCPayWebImageView;
@protocol WCPayNewFetchViewControllerDelegate;

@interface WCPayNewFetchViewController : WCPayBaseViewController <UITableViewDelegate, WCPayNoticeBannerDelegate, MMTipsViewControllerDelegate, WCPayBalanceSelectCardViewDelegate, WCPayDecimalKeyboardViewDelegate, ILinkEventExt>
{
    WCPayBindCardInfo *m_oCardInfo;
    WCPayNoticeBanner *m_banner;
    MMUIView *m_containerView;
    MMUIView *m_cardBgView;
    MMUILabel *m_cardLabel;
    MMUIButton *m_bankNameBtn;
    MMUILabel *m_bankChargeFeeLabel;
    MMUIView *m_fetchBgView;
    MMUILabel *m_fetchLabel;
    MMUILabel *m_symbolLabel;
    UITextField *m_fetchMoneyFeild;
    MMUIView *m_fetchLine;
    MMUILabel *m_fetchTipLabel;
    MMUIButton *m_fetchAllBtn;
    WCPayBalanceTipsLogic *tipLogic;
    _Bool m_bFetchAll;
    NSDictionary *m_dicBanners;
    WCPayFetchBalanceReport *m_reportLogic;
    _Bool _m_hasManualSelectedCard;
    _Bool _bIsShowingCardInfoView;
    id <WCPayNewFetchViewControllerDelegate> _m_delegate;
    WCPayWebImageView *_cardLogoImgView;
    UIImageView *_arrowImgView;
    UIButton *_cardInfoCoverBtn;
    RichTextView *_frozenTipsTextView;
    WCPayDecimalKeyboardView *_keyboardView;
}

- (void).cxx_destruct;
@property _Bool bIsShowingCardInfoView; // @synthesize bIsShowingCardInfoView=_bIsShowingCardInfoView;
@property(retain, nonatomic) WCPayDecimalKeyboardView *keyboardView; // @synthesize keyboardView=_keyboardView;
@property(retain, nonatomic) RichTextView *frozenTipsTextView; // @synthesize frozenTipsTextView=_frozenTipsTextView;
@property(retain, nonatomic) UIButton *cardInfoCoverBtn; // @synthesize cardInfoCoverBtn=_cardInfoCoverBtn;
@property(retain, nonatomic) UIImageView *arrowImgView; // @synthesize arrowImgView=_arrowImgView;
@property(retain, nonatomic) WCPayWebImageView *cardLogoImgView; // @synthesize cardLogoImgView=_cardLogoImgView;
@property(nonatomic) _Bool m_hasManualSelectedCard; // @synthesize m_hasManualSelectedCard=_m_hasManualSelectedCard;
@property(nonatomic) __weak id <WCPayNewFetchViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)activeTextFieldWithCheckTop:(_Bool)arg1;
- (void)setupInputView;
- (void)decimalKeyboardWillHide;
- (void)decimalKeyboardWillShow;
- (id)keyboardHostViewController;
- (void)keyboardViewConfirmBtnClick:(id)arg1;
- (void)selectCardViewDidSelectAddNewCard:(id)arg1;
- (void)selectCardView:(id)arg1 didSelectCard:(id)arg2;
- (double)selectCardViewSafeBottom;
- (void)checkAndShowFirstVisitTips;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (void)showFetchRuleTips;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (id)getRealtimeChargeFeeFor:(id)arg1;
- (void)showFetchBalanceTip;
- (void)showChargeFeeTip:(id)arg1;
- (void)showBeyondFetchBalanceErrorTip;
- (void)updateFetchTipLable:(id)arg1;
- (void)textFieldDidChange;
- (void)banner:(id)arg1 clickWithUrl:(id)arg2;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (_Bool)updateFeeForFetchAll;
- (void)onFetchAllBtnCancel:(id)arg1;
- (void)onFetchAllBtnDown:(id)arg1;
- (void)onFetchAllBtnClick:(id)arg1;
- (void)doNext;
- (void)onClickBankName:(id)arg1;
- (void)onClickNext:(id)arg1;
- (void)onCancelClick;
- (void)onRightBarButtonClick;
- (void)setCurrentCardInfo:(id)arg1;
- (id)getNoticeBanner;
- (void)setCardInfo:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)didReceiveMemoryWarning;
- (id)getCardNameFrom:(id)arg1;
- (id)genLabelWithFontSize:(int)arg1 textColor:(id)arg2;
- (id)getFetchTipsLabelContent;
- (void)layoutFetchInfo;
- (void)layoutBankCardInfo;
- (void)layoutAllViews;
- (void)setupView;
- (void)setupNavigationBar;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)refreshViewWithData:(id)arg1;
- (id)displayCardInfo;
- (id)firstAvailableCardInfo;
- (id)serverDefaultCard;
- (id)manualSelectedCardInfo;
- (id)validCardInfoOfBindSerial:(id)arg1 fromBindedCardList:(id)arg2;
- (_Bool)cardInfoCanBeUsedForFetch:(id)arg1;
- (void)viewWillPopOrDismiss:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSTableHeaderFooterView : UIView {
    UIButton * _button;
    <VSTableHeaderFooterViewDelegate> * _delegate;
    int  _kind;
    UIStackView * _stackView;
    UILabel * _textLabel;
}

@property (nonatomic, retain) UIButton *button;
@property (nonatomic) <VSTableHeaderFooterViewDelegate> *delegate;
@property (nonatomic) int kind;
@property (nonatomic, retain) UIStackView *stackView;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, retain) UILabel *textLabel;

- (void).cxx_destruct;
- (void)_didInvalidateIntrinsicContentSize;
- (id)button;
- (id)delegate;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (void)invalidateIntrinsicContentSize;
- (int)kind;
- (void)layoutMarginsDidChange;
- (void)layoutSubviews;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setButton:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setKind:(int)arg1;
- (void)setStackView:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTextLabel:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)stackView;
- (id)text;
- (id)textLabel;
- (void)traitCollectionDidChange:(id)arg1;

@end
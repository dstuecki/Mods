void FoldableOptics (EntityAI ParentItem)
{
	protected int foldableOpticRaisedId = -1;
	protected int foldableOpticLoweredId = -1;
	TStringArray selectionNames = new TStringArray;

	ParentItem.ConfigGetTextArray("simpleHiddenSelections",selectionNames);

	foldableOpticRaisedId = selectionNames.Find("foldable_raised");
	foldableOpticLoweredId = selectionNames.Find("foldable_lowered");  
		
	ParentItem.SetSimpleHiddenSelectionState(foldableOpticRaisedId,false);
	ParentItem.SetSimpleHiddenSelectionState(foldableOpticLoweredId,true);
};

void UnfoldableOptics(EntityAI ParentItem)
{
	protected int foldableOpticRaisedId = -1;
	protected int foldableOpticLoweredId = -1;
	TStringArray selectionNames = new TStringArray;

	ParentItem.ConfigGetTextArray("simpleHiddenSelections",selectionNames);

	foldableOpticRaisedId = selectionNames.Find("foldable_raised");
	foldableOpticLoweredId = selectionNames.Find("foldable_lowered");  

	ParentItem.SetSimpleHiddenSelectionState(foldableOpticRaisedId,true);
	ParentItem.SetSimpleHiddenSelectionState(foldableOpticLoweredId,false);
};
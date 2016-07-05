<div id="article-toggle-<?php print $bean->bid; ?>">
  <div class="article-toggle-navigation" aria-hidden="true">
    <ul>
      <li>
        <a href="#article-toggle-grid-<?php print $bean->bid; ?>" class="article-toggle-grid-link" data-article-toggle-id="<?php print $bean->bid; ?>"><i class="fa fa-th" aria-hidden="true"></i> <span class="element-invisible">Grid</span></a>
      </li>
      <li>
        <a href="#article-toggle-list-<?php print $bean->bid; ?>" class="article-toggle-list-link" data-article-toggle-id="<?php print $bean->bid; ?>"><i class="fa fa-align-justify" aria-hidden="true"></i> <span class="element-invisible">Grid</span></a>
      </li>
    </ul>
  </div>
  <div id="article-toggle-grid-<?php print $bean->bid; ?>" class="article-toggle-section article-toggle-grid">
    <?php
      print render($content['field_article_view_grid']);
    ?>
  </div>
  <div id="article-toggle-list-<?php print $bean->bid; ?>" class="article-toggle-section article-toggle-list">
    <?php
      print render($content['field_article_view_list']);
    ?>
  </div>
</div>


<?php $tag = isset($heading_tag['#tag']) ? $heading_tag['#tag'] : 'h3'; ?>
<div class="article-view-mode-teaser node-view-mode-teaser clearfix">
  <?php if(!empty($thumbnail)): ?>
    <?php print $thumbnail; ?>
  <?php endif; ?>
  <div class="article-view-mode-teaser-content node-view-mode-teaser-content">
    <<?php print $tag; ?>><?php print $title; ?></<?php print $tag; ?>>
    <p class="date">
      <?php
        if (function_exists('cu_date_formats_medium')) {
          print cu_date_formats_medium($created);
        }
      ?>
    </p>
    <div class="article-summary"><?php print $body; ?></div>
  </div>
</div>
